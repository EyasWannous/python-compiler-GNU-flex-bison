%code requires {
        #include "astNodes.hpp"
        #include <iostream>
        #include <string>
}

%union {
        char *strval;
        int intval;
        float flval;
        AstNode* astNode;
}

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int yydebug=1;
void yyerror(const char *);

extern FILE *yyin;
extern int yylex();
extern int yyparse();
AstNode* root = NULL;
int n_nodes = 0;
%}



%error-verbose

// tokens
%token ID STRING ARRAY RETURN BREAK CONTINUE GLOBAL NONLOCAL YIELD 
%token INDENT DEDENT INDENTERROR NEWLINE GT LT GTE LTE EQUAL 
%token INT FLOAT STR BOOL LIST INT_NUMBER FLOAT_NUMBER

%token<astNode> IF ELSE ELIF DEF WHILE FOR IN RANGE PRINT INPUT CLASS TRY EXCEPT MATCH CASE WITH AS PASS AND OR TRUE_TOK FALSE_TOK 

%type<astNode> ID STRING RETURN BREAK CONTINUE GLOBAL NONLOCAL YIELD GT LT GTE LTE EQUAL INT FLOAT STR BOOL LIST
%type<astNode> INT_NUMBER FLOAT_NUMBER boolean

%type<astNode> prog statements statement function assignment expression NUMBER function_block function_stmts function_stmt_ function_sp_stmt function_compound_stmt args args_ arg simple_stmt ARRAY start function_call argsp args_p argp argsc args_c argc return_stmt global_stmt nonlocal_stmt yield_stmt
%type<astNode> func_while_stmt func_for_stmt func_for_block func_for_stmts func_for_stmt_ relation_stmt for_sp_stmt range_args for_compound_stmt
%type<astNode> func_if_stmt func_if_header func_elif_else_ func_elif_else func_else_stmt func_elif_stmts func_elif_stmt func_elif_header
%type<astNode> if_stmt if_header elif_else_ elif_else else_stmt elif_stmts elif_stmt elif_header with_statement with_statement_body with_body with_stmt_contents with_item inside_brackets target targets
%type<astNode> block stmts stmt compound_stmt pass class class_block class_stmts class_stmt_ class_sp_stmt
%type<astNode> while_stmt for_stmt for_block for_stmts for_stmt_ for_if_stmt for_if_header for_elif_else_ for_elif_else for_else_stmt for_elif_stmts for_elif_stmt for_elif_header
%type<astNode> try_except_stmt except_clauses except_clause match_stmt case_statements case_statement final_case match_block

%nonassoc '='
%left '|' '&' AND OR
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%%

/* Parser Grammar */

start:
prog    {
                // Assign the root of the AST
                root = $$;
                YYACCEPT;
        }
;

prog
        : { $$=NULL; }
        | statements {
                $$=$1;
        }
;

statements  
        : statement { $$=new StatementsNode("root"); $$->add($1); }
        | statements NEWLINE statement { $1->add($3); $$ = $1; }
        | statements NEWLINE { }
;


statement   
        : if_stmt { $$ = $1; }
        | while_stmt { $$ = $1; }
        | for_stmt { $$ = $1; }
        | function { $$ = $1; }
        | function_call { $$ = $1; }
        | assignment NEWLINE { $$ = $1; }
        | class { $$ = $1; }
        | try_except_stmt { $$ = $1; }
        | match_stmt { $$ = $1; }
        | with_statement { $$ = $1; }
        | pass NEWLINE { $$ = $1; }
;

NUMBER
        : INT_NUMBER    { 
                                std::string nname = "int" + std::to_string(n_nodes);
                                ++n_nodes;
                                $1->name=nname;
                                $$ = $1;
                        }

        | FLOAT_NUMBER  { 
                                std::string nname = "float" + std::to_string(n_nodes);
                                ++n_nodes;
                                $1->name=nname;
                                $$ = $1;
                        }
;

boolean : TRUE_TOK      {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                $1 = new BoolNode();
                                $1->name=nname;
                                $1->label = "True";
                                $$ = $1;
                        }
        | FALSE_TOK     {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                $1 = new BoolNode();
                                $1->name=nname;
                                $1->label = "False";
                                $$ = $1;
                        }


//! IF statment START (AST)

if_stmt     
        : if_header block elif_else_  { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new IfStatementNode();
                $$->name = nname;
                $$->add($1);
                $$->add($2);
                if ($3 != NULL)
                    $$->add($3);
        }                     
;

if_header   
        : IF relation_stmt { $$ = $2; }
        | IF '(' relation_stmt ')' { $$ = $3; }  
;

elif_else_  
        :     { $$ = NULL; }
        | elif_else { $$ = $1; }
;

elif_else   
        : elif_stmts else_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                $$=new BlockNode(nname);
                $$->label = "Elif..._Else";
                $$->add($1); 
                $$->add($2); 
        }
        | elif_stmts { $$ = $1; }
        | else_stmt { $$ = $1; }
;

else_stmt   
        : ELSE  block {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElseStatementNode(nname);
                $$->add($2);
        }
;

elif_stmts  
        : elif_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Elif..."; 
                $$->add($1); 
        }
        | elif_stmts elif_stmt { $1->add($2); $$ = $1; }
;

elif_stmt   
        : elif_header block {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElIfStatementNode(nname);
                $$->add($1);
                $$->add($2);
        }
;

elif_header 
        : ELIF relation_stmt { $$ = $2; }
        | ELIF '(' relation_stmt ')' { $$ = $3; }    
;

// IF statement END

//! FUNCTION statement START (AST)
function    
        : DEF ID '(' args ')' function_block {
        //printf("Function successfully parsed:\n"); 
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($2);
                $$ = new FunctionNode(idFunc->value);
                if ($4 != NULL)
                    $$->add($4);
                $$->add($6);
        }
        | DEF ID '(' args ')' '-' GT data_type function_block {
            //printf("Generic Function successfully parsed:\n");
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($2);
                $$ = new FunctionNode(idFunc->value + "_Generic");
                if ($4 != NULL)
                    $$->add($4);
                $$->add($9);
        }
;

function_block
            : NEWLINE INDENT function_stmts DEDENT { $$ = $3; }
;

function_stmts   
            : function_stmt_    { 
                                        std::string nname = "stmt" + std::to_string(n_nodes);
                                        ++n_nodes;
                                        $$ = new StatementsNode(nname); 
                                        $$->add($1); 
                                }

            | function_stmts function_stmt_ { $1->add($2); $$ = $1; }
;

function_stmt_   
            : simple_stmt NEWLINE { 
                $$ = $1;         
            }

            | function_compound_stmt { 
                $$ = $1;        
            }

            | function_sp_stmt NEWLINE { 
                $$ = $1;            
            }
;

function_sp_stmt 
            : return_stmt{ $$ = $1; }
            | global_stmt{ $$ = $1; }
            | nonlocal_stmt{ $$ = $1; }
            | yield_stmt{ $$ = $1; }
;

function_compound_stmt
        : func_if_stmt{ $$ = $1; }
        | func_while_stmt{ $$ = $1; }
        | func_for_stmt{ $$ = $1; }
        | try_except_stmt { $$ = $1; }
        | with_statement { $$ = $1; }
        | match_stmt { $$ = $1; }
        | function{ $$ = $1; }
;

//!================================================================
func_while_stmt
        : WHILE relation_stmt func_for_block { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new WhileStatementNode();
                $$->name = name;
                $$->add($2);
                $$->add($3);
        }
;

func_for_stmt    
        : FOR ID IN RANGE range_args func_for_block { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                $4 = new FunctionCallNode(nname);
                $4->add($5);
                $$ = new ForStatementNode();
                $$->name = name;
                $$->add($4);
                $$->add($6);
        }
        | FOR ID IN ARRAY func_for_block { 
            //printf("for statement successfully parsed:\n"); 
        }
;

func_for_block
        : NEWLINE INDENT func_for_stmts DEDENT { $$ = $3; }
;

func_for_stmts   
        : func_for_stmt_ {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new StatementsNode(nname); 
                $$->add($1); 
        }

        | func_for_stmts func_for_stmt_ { $1->add($2); $$ = $1; }
;

func_for_stmt_   
        : simple_stmt NEWLINE { $$ = $1; }
        | for_compound_stmt { $$ = $1; }
        | for_sp_stmt NEWLINE { $$ = $1; }
        | function_sp_stmt NEWLINE { $$ = $1; }
;
//!================================================================
func_if_stmt     
        : func_if_header function_block func_elif_else_  { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new IfStatementNode();
                $$->name = nname;
                $$->add($1);
                $$->add($2);
                if ($3 != NULL)
                    $$->add($3);
            }                     
;

func_if_header
        : IF relation_stmt { $$ = $2; }
        | IF '(' relation_stmt ')' { $$ = $3; } 
;

func_elif_else_  
        :     { $$ = NULL; }
        | func_elif_else { $$ = $1; }
;

func_elif_else   
        : func_elif_stmts func_else_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                $$=new BlockNode(nname);
                $$->label = "Elif..._Else";
                $$->add($1); 
                $$->add($2); 
        }
        | func_elif_stmts { $$ = $1; }
        | func_else_stmt { $$ = $1; }
;

func_else_stmt   
        : ELSE  function_block {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElseStatementNode(nname);
                $$->add($2);
        }
;

func_elif_stmts  
        : func_elif_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Elif..."; 
                $$->add($1); 
        }
        | func_elif_stmts func_elif_stmt { $1->add($2); $$ = $1; }
;

func_elif_stmt   
        : func_elif_header function_block {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElIfStatementNode(nname);
                $$->add($1);
                $$->add($2);
        }
;

func_elif_header 
        : ELIF relation_stmt { $$ = $2; }
        | ELIF '(' relation_stmt ')' { $$ = $3; }    
;

//!===============================================================

//! args for define function (AST)
args    
    : /* empty params */ { $$ = NULL; }
    | args_  { $$ = $1; }
;


args_ 
    : arg{ 
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); $$->add($1); 
        }
    | args_ ',' arg { $1->add($3); $$ = $1; }
;



arg   
    : ID { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }

    | ID ':' data_type { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }
;

//! args for print function (AST)
argsp  
    : /* empty params */ { $$ = NULL; }
    | args_p { $$ = $1; }
;


args_p
    : argp {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); $$->add($1); 
        }

    | args_p  argp { $1->add($2); $$ = $1; }
;



argp  
    : ID { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
        }

    | NUMBER { $$ = $1; }

    | STRING {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = $1; 
        }
;

//! args for function call (AST)
argsc  
    : /* empty params */ { $$ = NULL; }
    | args_c { $$ = $1; }
;


args_c
    : argc {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); $$->add($1); 
        }

    | args_c ',' argc { $1->add($3); $$ = $1; }
;



argc  
    : ID { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
        }

    | NUMBER { $$ = $1; }

    | STRING {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = $1; 
        }
;

// FUNCTION statement END

//! WHILE statement START (AST)
while_stmt
        : WHILE relation_stmt for_block { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new WhileStatementNode();
                $$->name = name;
                $$->add($2);
                $$->add($3);
        }
;
// WHILE statement END

//! FOR statement START (AST)
range_args  
        : '(' NUMBER ')' {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); 
                $$->add($2); 
        }

        | '(' NUMBER ',' NUMBER')' {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); 
                $$->add($2); 
                $$->add($4); 
        }

        | '(' NUMBER ',' NUMBER ',' NUMBER ')' {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new Args(nname); 
                $$->add($2); 
                $$->add($4); 
                $$->add($6); 
        }
;

for_stmt    
        : FOR ID IN RANGE range_args for_block { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                $4 = new FunctionCallNode(nname);
                $4->add($5);
                $$ = new ForStatementNode();
                $$->name = name;
                $$->add($4);
                $$->add($6);
        }

        | FOR ID IN ARRAY for_block { 
            printf("for statement successfully parsed:\n"); 
        }
;

for_block
        : NEWLINE INDENT for_stmts DEDENT { $$ = $3; }
;

for_stmts   
        : for_stmt_ {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new StatementsNode(nname); 
                $$->add($1);
        }

        | for_stmts for_stmt_ { $1->add($2); $$ = $1; }
;

for_stmt_   
        : simple_stmt NEWLINE {  $$ = $1; }
        | for_compound_stmt {  $$ = $1; }
        | for_sp_stmt NEWLINE {  $$ = $1; }
;

for_sp_stmt 
        : BREAK {
                std::string nname = "break" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new BreakStatementNode(); 
                $$->name = nname;
        }

        | CONTINUE {
                std::string nname = "continue" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ContinueStatementNode(); 
                $$->name = nname;
        }
;

for_compound_stmt
        : for_if_stmt {  $$ = $1; }
        | while_stmt {  $$ = $1; }
        | for_stmt {  $$ = $1; }
        | try_except_stmt {  $$ = $1; }
        | with_statement { $$ = $1; }
        | match_stmt { $$ = $1; }
;

//!===============================================================
for_if_stmt     
        : for_if_header for_block for_elif_else_  { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new IfStatementNode();
                $$->name = nname;
                $$->add($1);
                $$->add($2);
                if ($3 != NULL)
                    $$->add($3);
            }                     
;

for_if_header   
        : IF relation_stmt { $$ = $2; }
        | IF '(' relation_stmt ')' { $$ = $3; }  
;

for_elif_else_  
        :     { $$ = NULL; }
        | for_elif_else { $$ = $1; }
;

for_elif_else   
        : for_elif_stmts for_else_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                $$=new BlockNode(nname);
                $$->label = "Elif..._Else";
                $$->add($1); 
                $$->add($2); 
        }
        | for_elif_stmts { $$ = $1; }
        | for_else_stmt { $$ = $1; }
;

for_else_stmt   
        : ELSE  for_block {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElseStatementNode(nname);
                $$->add($2);
        }
;

for_elif_stmts  
        : for_elif_stmt {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Elif..."; 
                $$->add($1); 
        }
        | for_elif_stmts for_elif_stmt { $1->add($2); $$ = $1; }
;

for_elif_stmt   
        : for_elif_header for_block {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ElIfStatementNode(nname);
                $$->add($1);
                $$->add($2);
        }
;

for_elif_header 
        : ELIF relation_stmt { $$ = $2; }
        | ELIF '(' relation_stmt ')' { $$ = $3; }    
;



// FOR statement END

//! FUNCTION_CALL statement START (AST)
function_call     
            : ID '(' argsc ')' {
                std::string name = "_func_call" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($1);
                $$ = new FunctionCallNode(idFunc->value + name);
                if ($3 != NULL)
                    $$->add($3);
            }

            | PRINT '(' argsp ')' {
                std::string name = "print" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new FunctionCallNode(name);
                if ($3 != NULL)
                    $$->add($3);
            }

            | INPUT '(' STRING ')' {
                std::string name = "input" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new FunctionCallNode(name);
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $3->name=nname;
                $$->add($3);
            }
;
// FUNCTION_CALL statement END

//! CLASS statement START (AST)

class
    : CLASS ID class_block { 
        //printf("class statement successfully parsed:\n");
        std::string name = "class" + std::to_string(n_nodes);
        ++n_nodes;
        IdentifierNode* idclass = dynamic_cast<IdentifierNode*>($2);
        $$ = new ClassNode(idclass->value);
        $$->add($3);
    }
;

class_block
        : NEWLINE INDENT class_stmts DEDENT { $$ = $3; }
;

class_stmts   
        : class_stmt_ {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            $$ = new StatementsNode(nname); 
            $$->add($1); 
        }
        | class_stmts class_stmt_ { $1->add($2); $$ = $1; }
;

class_stmt_   
        : simple_stmt NEWLINE { $$ = $1; }
        | compound_stmt { $$ = $1; }
        | class_sp_stmt NEWLINE { $$ = $1; }
        | function { $$ = $1; }
;

class_sp_stmt 
            : global_stmt { $$ = $1; }
;  
// CLASS statement END

//! TRY_EXCEPT statement START (AST)
try_except_stmt 
            : TRY block except_clauses { 
                //printf("try_except statement successfully parsed:\n");
                std::string name = "try" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new TryStatementNode();
                $$->name = name;
                $$->add($2);
                $$->add($3);
            }
;

except_clauses    
            : except_clause {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Except..."; 
                $$->add($1); 
            }
            | except_clauses except_clause { $1->add($2); $$ = $1; }
;

except_clause 
            : EXCEPT block {
                std::string nname = "except" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ExceptStatementNode();
                $$->name = nname;
                $$->add($2);
            }
;

// TRY_EXCEPT statement END

//! MATCH statement START (AST)
match_stmt   
        : MATCH ID match_block { 
            //printf("match statement successfully parsed:\n");
            std::string name = "match" + std::to_string(n_nodes);
            ++n_nodes;
            std::string nname = "iden" + std::to_string(n_nodes);
            ++n_nodes;
            $2->name=nname;
            $$ = new matchStatementNode();
            $$->name = name;
            $$->add($2);
            $$->add($3);
        }
;

case_statements   
            :
            case_statement {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Case..."; 
                $$->add($1); 
            }
            | case_statements case_statement { $1->add($2); $$ = $1; }
;

case_statement    
            : CASE argp block {
                std::string nname = "case" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new CaseStatementNode(nname);
                $$->add($2);
                $$->add($3);
            }
;

final_case  
        : CASE '_' block {
            std::string nname = "case" + std::to_string(n_nodes);
            ++n_nodes;
            $$ = new CaseStatementNode(nname);
            $$->label = "Default Statement";
            $$->add($3);
        }
;

match_block 
        : NEWLINE INDENT case_statements final_case DEDENT {
            std::string nname = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            $$=new BlockNode(nname);
            $$->label = "Match Block"; 
            $$->add($3);
            $$->add($4);
        }
;

// MATCH statement END


//! WITH statement START (AST)

with_statement 
                : WITH with_statement_body block { 
                    //printf("with statement successfully parsed:\n");
                    std::string nname = "with" + std::to_string(n_nodes);
                    n_nodes;  
                    $$ = new withStatementNode();
                    $$->name = nname;
                    $$->add($2);
                    $$->add($3);
                }
;

with_statement_body
                :  with_statement_body ',' with_body {
                    $1->add($3);
                    $$=$1;  
                }
                | with_body {
                        std::string nname = "block" + std::to_string(n_nodes);
                        ++n_nodes; 
                        $$=new BlockNode(nname);
                        $$->label = "With Head"; 
                        $$->add($1); 
                }
;

with_body
        : with_stmt_contents { $$=$1; }
        |'(' with_stmt_contents ')' { $$=$2; }
;

/////////////////////////////
with_stmt_contents
                : with_item { $$=$1; }
                //|with_item ',' with_stmt_contents
;

with_item
        : ID '(' inside_brackets ')' AS target {
            std::string nname = "iden" + std::to_string(n_nodes);
            n_nodes;
            $1->name = nname;
            std::string name = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            $$=new BlockNode(name);
            $$->label = "With Item"; 
            $$->add($1);
            $$->add($3);
            $$->add($6);
        }
        //| expression { $$=$1; }
        // | expression AS target {
        //     $1->add($3);
        //     $$ = $1;
        // }
;
//////////////////////////////

inside_brackets
            : expression {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                $$=new BlockNode(nname);
                $$->label = "Parameters"; 
                $$->add($1); 
            }
            | inside_brackets ',' expression {
                $1->add($3);
                $$ = $1;
            }
;

target
    : '(' targets ')' { $$=$2; } 
    | target '.' ID { $1->add($3); $$=$1; }
    | ID {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }
;

targets
    : target {
        std::string nname = "block" + std::to_string(n_nodes);
        ++n_nodes; 
        $$=new BlockNode(nname);
        $$->label = "Targets"; 
        $$->add($1); 
    }
    | targets ',' target { $1->add($3); $$=$1; }
;

// WITH statement END

block //: NEWLINE INDENT stmts NEWLINE DEDENT { }
    : NEWLINE INDENT stmts DEDENT { $$ = $3; }
;

stmts 
    : stmt {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            $$ = new StatementsNode(nname); 
            $$->add($1); 
    }
    | stmts stmt { $1->add($2); $$ = $1; }
;

stmt  
    : simple_stmt NEWLINE { $$ = $1; }
    | compound_stmt { $$ = $1; }
;


simple_stmt
        : assignment      { $$ = $1; }
        | pass            { $$ = $1; }
        //| return_stmt     {}
        //| BREAK           {}
        //| CONTINUE        {}
        //| yield_stmt      {}
        //| global_stmt     {}
        //| nonlocal_stmt   {}
        | function_call   { $$ = $1; }
;

compound_stmt
        : if_stmt    { $$ = $1; }
        | while_stmt { $$ = $1; }
        | for_stmt   { $$ = $1; }
        //| function   {}
        | try_except_stmt { $$ = $1; }
        | with_statement { $$ = $1; }
        | match_stmt { $$ = $1; }
;

assignment
        : ID '=' expression  {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($3);
        }

        | ID '+' '=' expression  {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($4);
        }

        | ID '-' '=' expression  {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($4);
        }

        | ID '*' '=' expression  {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($4);
        }

        | ID '/' '=' expression  {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($4);
        }

        | ID '=' ARRAY       {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = new assignmentStatement(name);
                $$->add($1);
                $$->add($3);
        }
;

return_stmt
        : RETURN NUMBER {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ReturnStatementNode($2);
                $$->name = nname;
        }

        | RETURN NUMBER ',' NUMBER {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new ReturnStatementNode($2);
                $$->add($4);
                $$->name = nname;
        }

        | RETURN ID { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $$ = new ReturnStatementNode($2);
                $$->name = nname;
        }

        | RETURN ID ',' ID { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $4->name=nnname;
                $$ = new ReturnStatementNode($2);
                $$->add($4);
                $$->name = nname;
        }

        | RETURN STRING { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $$ = new ReturnStatementNode($2);
                $$->name = nname;
        }

        | RETURN STRING ',' STRING { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $4->name=nnname;
                $$ = new ReturnStatementNode($2);
                $$->add($4);
                $$->name = nname;
        }
;

yield_stmt
        : YIELD ID {
                std::string nname = "yield" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $$ = new yieldStatementNode($2);
                $$->name = nname;
        }
;

global_stmt
        : GLOBAL ID {
                std::string nname = "global" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $$ = new globalStatementNode($2);
                $$->name = nname;
        }
;

nonlocal_stmt
        : NONLOCAL ID {
                std::string nname = "nonlocal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $2->name=name;
                $$ = new nonLocalStatementNode($2);
                $$->name = nname;
        }
;

pass
        : PASS {
                std::string nname = "pass" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new PassStatementNode();
                $$->name = nname;
        }
;

relation_stmt
        : ID GT NUMBER    {
                std::string nname = "gt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=name;
                $$ = new BinaryExpressionNode(">", $1, $3);
                $$->name=nname;
        }

        | ID LT NUMBER    {
                std::string nname = "lt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=name;
                $$ = new BinaryExpressionNode("<", $1, $3);
                $$->name=nname;
        }

        | ID GTE NUMBER   {
                std::string nname = "gte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=name;
                $$ = new BinaryExpressionNode(">=", $1, $3);
                $$->name=nname;
        }

        | ID LTE NUMBER   {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=name;
                $$ = new BinaryExpressionNode("<=", $1, $3);
                $$->name=nname;
        }

        | ID EQUAL NUMBER {
                std::string nname = "equal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=name;
                $$ = new BinaryExpressionNode("==", $1, $3);
                $$->name=nname;
        }

        | ID EQUAL STRING {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                $3->name=name;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nnname;
                $$ = new BinaryExpressionNode("==", $1, $3);
                $$->name=nname;
        }
        | ID { 
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                $1->name=nname;
                $$ = $1;
            }
;

expression
        : expression '+' expression     {
                std::string nname = "add" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new AdditionExpressionNode($1, $3);
                $$->name=nname;
        }

        | expression '-' expression     {
                std::string nname = "sub" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new SubtractionExpressionNode($1, $3);
                $$->name=nname;
        }

        | expression '*' expression     {
                std::string nname = "multi" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new MultiplicationExpressionNode($1, $3);
                $$->name=nname;
        }

        | expression '/' expression     {
                std::string nname = "divide" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new DivisionExpressionNode($1, $3);
                $$->name=nname;
        }

        | expression AND expression     {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new BinaryExpressionNode("AND", $1, $3);
                $$->name=nname;
        }

        | expression '&' expression     {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new BinaryExpressionNode("AND", $1, $3);
                $$->name=nname;
        }

        | expression OR expression     {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new BinaryExpressionNode("OR", $1, $3);
                $$->name=nname;
        }

        | expression '|' expression     {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                $$ = new BinaryExpressionNode("OR", $1, $3);
                $$->name=nname;
        }

        | '|' expression  %prec UMINUS  { }
        | '(' expression ')'           { $$ = $2; }
        | '-' expression %prec UMINUS   { }

        | NUMBER                        { $$ = $1; }

        | boolean                       { $$ = $1; }

        | STRING                        {
                                                std::string nname = "string" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                $1->name=nname;
                                                $$ = $1; 
                                        }

        | ID                            { 
                                                std::string nname = "iden" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                $1->name=nname;
                                                $$ = $1;
                                        }
;

data_type   
        : INT
        | FLOAT
        | BOOL
        | STR
        | LIST '[' INT ']'
        | LIST '[' FLOAT ']'
        | LIST '[' STR ']'
;



%%



int main(int argc, char **argv)
{
        if (argc > 1){
                for(int i=0;i<argc;i++)
                printf("value of argv[%d] = %s\n\n",i,argv[i]);

                yyin=fopen(argv[1],"r");
        }
        else
                yyin=stdin;

        yyparse();
        // AST is constructed, you can print it now
        if (root != NULL) {
                AST ast(root);
                ast.Print();
        }
        return 0;
}

void yyerror(const char *msg) {
        printf(" %s \n", msg);
}