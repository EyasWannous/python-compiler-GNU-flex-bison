%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yydebug=1;
void yyerror(const char *);

extern FILE *yyin;
extern int yylex();
extern int yyparse();

%}


%union {
        char *strval;
        int intval;
        float flval;
}

%error-verbose

// tokens
%token ID NUMBER STRING ARRAY RETURN BREAK CONTINUE GLOBAL NONLOCAL YIELD 
%token INDENT DEDENT INDENTERROR NEWLINE GT LT GTE LTE EQUAL 
%token IF ELSE ELIF DEF WHILE FOR IN RANGE PRINT INPUT CLASS TRY EXCEPT MATCH CASE WITH AS PASS
%token INT FLOAT STR BOOL LIST

%type<strval> ID STRING 
%type<intval> NUMBER 

%nonassoc '='
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

/* Parser Grammar */

prog
    : { /* for empty put % empty */}
    | statements {
        printf("prog accepted:\n");YYACCEPT;
    }
;

statements  
        : statement { }
        | statements NEWLINE statement { }
        | statements NEWLINE { }
;


statement   
        : if_stmt { }
        | while_stmt { }
        | for_stmt { }
        | function { }
        | function_call { }
        | assignment { }
        | class { }
        | try_except_stmt { }
        | match_stmt { }
        | with_statement { }
;

// IF statment START

if_stmt     
        : if_header block elif_else_  { printf("if statement successfully parsed:\n"); }                     
;

if_header   
        : IF relation_stmt
        | IF '(' relation_stmt ')'  
;

elif_else_  
        :     {/* empty no next elif or else*/}
        | elif_else { }
;

elif_else   
        : elif_stmts else_stmt
        | elif_stmts
        | else_stmt
;

else_stmt   
        : ELSE  block 
;

elif_stmts  
        : elif_stmt
        | elif_stmts elif_stmt 
;

elif_stmt   
        : elif_header block
;

elif_header 
        : ELIF relation_stmt
        | ELIF '(' relation_stmt ')'    
;

// IF statement END

// FUNCTION statement START
function    
        : DEF ID '(' args ')' function_block {
            printf("Function successfully parsed:\n"); 
        }
        | DEF ID '(' args ')' '-' GT data_type function_block {
            printf("Generic Function successfully parsed:\n"); 
        }
;

function_block
            : NEWLINE INDENT function_stmts DEDENT { }
;

function_stmts   
            : function_stmt_
            | function_stmts function_stmt_
;

function_stmt_   
            : simple_stmt NEWLINE {}
            | function_compound_stmt {}
            | function_sp_stmt NEWLINE
;

function_sp_stmt 
            : return_stmt
            | global_stmt
            | nonlocal_stmt
            | yield_stmt
;

function_compound_stmt
        : func_if_stmt
        | func_while_stmt
        | func_for_stmt
        | try_except_stmt {}
        | with_statement {}
        | match_stmt {}
        | function
;

//!================================================================
func_while_stmt
        : WHILE relation_stmt func_for_block { 
            printf("while statement successfully parsed:\n"); 
        }
;

func_for_stmt    
        : FOR ID IN RANGE range_args func_for_block { 
            printf("for statement successfully parsed:\n"); 
        }
        | FOR ID IN ARRAY func_for_block { 
            printf("for statement successfully parsed:\n"); 
        }
;

func_for_block
        : NEWLINE INDENT func_for_stmts DEDENT { }
;

func_for_stmts   
        : func_for_stmt_
        | func_for_stmts func_for_stmt_
;

func_for_stmt_   
        : simple_stmt NEWLINE {}
        | for_compound_stmt {}
        | for_sp_stmt NEWLINE
        | function_sp_stmt
;
//!================================================================
func_if_stmt     
        : func_if_header function_block func_elif_else_  { printf("if statement successfully parsed:\n"); }                     
;

func_if_header   
        : IF relation_stmt
        | IF '(' relation_stmt ')'  
;

func_elif_else_  
        :     {/* empty no next elif or else*/}
        | func_elif_else { }
;

func_elif_else   
        : func_elif_stmts func_else_stmt
        | func_elif_stmts
        | func_else_stmt
;

func_else_stmt   
        : ELSE  function_block 
;

func_elif_stmts  
        : func_elif_stmt
        | func_elif_stmts func_elif_stmt 
;

func_elif_stmt   
        : func_elif_header function_block
;

func_elif_header 
        : ELIF relation_stmt
        | ELIF '(' relation_stmt ')'    
;

//!===============================================================

// args for define function
args    
    : /* empty params */ { }
    | args_  { }
;



args_ 
    : arg { }
    | args_ ',' arg { }
;



arg   
    : ID { }
    | ID ':' data_type { }
;

// args for print function
argsp  
    : /* empty params */ { }
    | args_p { }
;


args_p
    : argp { }
    | args_p  argp { }
;



argp  
    : ID { }
    | NUMBER { }
    | STRING { }
;

// FUNCTION statement END

// WHILE statement START
while_stmt
        : WHILE relation_stmt for_block { 
            printf("while statement successfully parsed:\n"); 
        }
;
// WHILE statement END

// FOR statement START
range_args  
        : '(' NUMBER ')'
        | '(' NUMBER ',' NUMBER')'
        | '(' NUMBER ',' NUMBER ',' NUMBER ')'
;

for_stmt    
        : FOR ID IN RANGE range_args for_block { 
            printf("for statement successfully parsed:\n"); 
        }
        | FOR ID IN ARRAY for_block { 
            printf("for statement successfully parsed:\n"); 
        }
;

for_block
        : NEWLINE INDENT for_stmts DEDENT { }
;

for_stmts   
        : for_stmt_
        | for_stmts for_stmt_
;

for_stmt_   
        : simple_stmt NEWLINE {}
        | for_compound_stmt {}
        | for_sp_stmt NEWLINE
;

for_sp_stmt 
        : BREAK
        | CONTINUE
;

for_compound_stmt
        : for_if_stmt
        | while_stmt
        | for_stmt
        | try_except_stmt {}
        | with_statement {}
        | match_stmt {}
;

//!===============================================================
for_if_stmt     
        : for_if_header for_block for_elif_else_  { printf("if statement successfully parsed:\n"); }                     
;

for_if_header   
        : IF relation_stmt
        | IF '(' relation_stmt ')'  
;

for_elif_else_  
        :     {/* empty no next elif or else*/}
        | for_elif_else { }
;

for_elif_else   
        : for_elif_stmts for_else_stmt
        | for_elif_stmts
        | for_else_stmt
;

for_else_stmt   
        : ELSE  for_block 
;

for_elif_stmts  
        : for_elif_stmt
        | for_elif_stmts for_elif_stmt 
;

for_elif_stmt   
        : for_elif_header for_block
;

for_elif_header 
        : ELIF relation_stmt
        | ELIF '(' relation_stmt ')'    
;



// FOR statement END

// FUNCTION_CALL statement START
function_call     
            : ID '(' args ')' {}
            | PRINT '(' argsp ')' {}
            | INPUT '(' STRING ')' {}
;
// FUNCTION_CALL statement END

// CLASS statement START

class 
    : CLASS ID class_block { 
        printf("class statement successfully parsed:\n");
    }
;

class_block
        : NEWLINE INDENT class_stmts DEDENT { }
;

class_stmts   
        : class_stmt_
        | class_stmts class_stmt_
;

class_stmt_   
        : simple_stmt NEWLINE {}
        | compound_stmt {}
        | class_sp_stmt NEWLINE
        | function
;

class_sp_stmt 
            : global_stmt
;  
// CLASS statement END

// TRY_EXCEPT statement START
try_except_stmt 
            : TRY block except_clauses { 
                printf("try_except statement successfully parsed:\n"); 
            }
;

except_clauses    
            : except_clause {}
            | except_clauses except_clause {}
;

except_clause 
            : EXCEPT block {}
;

// TRY_EXCEPT statement END

// MATCH statement START
match_stmt  
        : MATCH ID match_block { 
            printf("match statement successfully parsed:\n"); 
        }
;

case_statements   
            :
            case_statement 
            | case_statements case_statement 
;

case_statement    
            : CASE argp block 
;

final_case  
        : CASE '_' block
;

match_block 
        : NEWLINE INDENT case_statements final_case DEDENT { }
;

// MATCH statement END


// WITH statement START

with_statement
            : WITH with_statement_body block { 
                printf("with statement successfully parsed:\n"); 
            }
;

with_statement_body
                : with_body ',' with_statement_body
                | with_body
;

with_body
        : with_stmt_contents
        |'(' with_stmt_contents ')'
;

/////////////////////////////
with_stmt_contents
                : with_item 
                //|with_item ',' with_stmt_contents
;

with_item
        : ID '(' inside_brackets ')' AS target
        | expression
        | expression AS target
;
//////////////////////////////

inside_brackets
            : expression
            | expression ',' inside_brackets
;

target
    : '(' targets ')' 
    | target '.' ID 
    | ID
;

targets
    : target
    | targets ',' target
;

// WITH statement END


block //: NEWLINE INDENT stmts NEWLINE DEDENT { }
    : NEWLINE INDENT stmts DEDENT { }
;

stmts 
    : stmt
    | stmts stmt
;

stmt  
    : simple_stmt NEWLINE {}
    | compound_stmt {}
;


simple_stmt
        : assignment      {}
        //| return_stmt     {}
        //| BREAK           {}
        //| CONTINUE        {}
        //| yield_stmt      {}
        //| global_stmt     {}
        //| nonlocal_stmt   {}
        | function_call   {}
;

compound_stmt
        : if_stmt    {}
        | while_stmt {}
        | for_stmt   {}
        //| function   {}
        | try_except_stmt {}
        | with_statement {}
        | match_stmt {}
;

assignment
        : ID '=' expression  {}
        | ID '=' ARRAY       {}
;

return_stmt
        : RETURN NUMBER { }
        | RETURN ID { }
        | RETURN STRING { }
;

yield_stmt
        : YIELD ID { }
;

global_stmt
        : GLOBAL ID { }
;

nonlocal_stmt
        : NONLOCAL ID { }
;

relation_stmt
        : ID GT NUMBER    {}
        | ID LT NUMBER    {}
        | ID GTE NUMBER   {}
        | ID LTE NUMBER   {}
        | ID EQUAL NUMBER {}
        | ID EQUAL STRING {}
;

expression
        : expression '+' expression     { }
        | expression '-' expression     { }
        | expression '*' expression     { }
        | expression '/' expression     { }
        | '|' expression  %prec UMINUS  { }
        //| '(' expression ')'           { }
        | '-' expression %prec UMINUS   { }
        | NUMBER                        { }
        | STRING                        { }
        | ID
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



void main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);

        yyin=fopen(argv[1],"r");
    }
    else
        yyin=stdin;

    yyparse();
}

void yyerror(const char *msg) {
    printf(" %s \n", msg);
}