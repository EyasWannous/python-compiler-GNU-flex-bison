%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int status;
// yypstate *ps = yypstate_new ();
// do {
//     status = yypush_parse (ps, yylex (), NULL);
// } while (status == YYPUSH_MORE);
// yypstate_delete (ps);
// extern int yychar;
// int status;
// yypstate *ps = yypstate_new ();
// do {
//     yychar = yylex ();
//     status = yypush_parse (ps);
// } while (status == YYPUSH_MORE);
// yypstate_delete (ps);
// yypstate *ps = yypstate_new ();
// yypull_parse (ps); /* Will call the lexer */
// yypstate_delete (ps);


int yydebug = 1;
void yyerror(const char *);
// void yyerror(YYLTYPE* loc, const char* err);


extern int yylex();
extern int yyparse();
extern FILE *yyin;
// extern int yylex(void);

%}

%locations

// %define api.pure full
// %define api.push-pull push

%error-verbose

// tokens
%token ID NUMBER STRING RETURN
%token EQUAL
%token PRINT KEYWORD DEF
%token INDENT DeDent NewLine
%token IndentError statement string EOFF

%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%union {
    char *strval;
    int intval;
}

// %left

// %left input
// %right blank

// %type<strval> string

// %start input

// %start statements


%%




// statements:
//     statement
//     | statements statement
//     ;

/* Parser Grammar */
input
    : blank {printf("BLANK INPUT WOOOO \n");}
    | IndentError {printf("IndentError || WOOOO \n");}
    | input INDENT {printf("INDENT || WOOOO \n");}
    | input DEDENT {printf("DENDENT || WOOOO \n");}
    | input NewLine {printf("NewLine || WOOOO \n");}
    // | input EOFF {printf("EOFF || WOOOO \n"); YYACCEPT;}
    // | block input {printf("Block || WOOOO \n");}
    ;

block
    : blank {printf("BLANK BLOCK WOOOO \n");}
    | INDENT block DEDENT {printf("Block || WOOOO || WOOOO \n");}
    ;

blank
    :
    ;

function
    : DEF ID '(' args ')' ':' {}
    ;

args
    : blank {}
    | arg ',' args {}
    | arg {}
    ;

arg
    : NUMBER
    | ID
    ;

// block 
//     : NewLine INDENT statements DEDENT { }
//     ;

///////////////////////////////////////////
///////////////////////////////////////////


// function: DEF IDENTIFIER '(' args ')' ':' block {
//             printf("Function successfully parsed:\n"); 
//             // YYACCEPT;
//             };

// args    : /* empty params */ { }
//         | args_  { }
//         ;



// args_   : arg { }
//         | args_ ',' arg { }
//         ;



// arg     : IDENTIFIER { }
//         | NUMBER { }
//         ;




statements 
    : simple_stmt NewLine {}
    | statements simple_stmt NewLine {}
    ;

simple_stmt
    : assignment {}
    | return_stmt {}
    ;


assignment:
//     : IDENTIFIER ASSIGN expression  {}
//     ;





expression
    : expression '+' expression     { }
    | expression '-' expression     { }
    | expression '*' expression     { }
    | expression '/' expression     { }
    | '|' expression  %prec UMINUS  { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                    which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                    rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/}
    | '(' expression ')'            { }
    | '-' expression %prec UMINUS   { }
    | NUMBER                        { }
    | STRING                        { }
    ;

return_stmt:
    // : RETURN NUMBER { }
    // | RETURN IDENTIFIER { }
    // ;

%%



void main(int argc, char **argv)
{
/*success("This is a valid python expression");*/
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
    else
        yyin=stdin;
    yyparse();
    // while(yylex());
    // while(yyparse());
}

// int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s\n", s);
//     return 1;
// }

void yyerror(const char *msg)
{
    printf(" %s \n", msg); 
}

// void yyerror(YYLTYPE* loc, const char* err) {
//     printf("Error:  %s \n", err); 
// }

// void yyerror (char const *s)
// {
//     fprintf (stderr, "%s\n", s);
// }
