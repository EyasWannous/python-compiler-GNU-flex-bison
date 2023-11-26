%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yydebug=1;
void yyerror(const char *);

extern int yylex();
extern int yyparse();
extern FILE *yyin;
// extern int yylex(void);

%}

// tokens
%token ID NUMBER STRING ASSIGN RETURN
%token EQ PLUS MINUS MUL DIVIDE LBRACKET RBRACKET SEMICOLON EQUAL
%token PRINT KEYWORD IDENTIFIER DEF
%token INDENT DEDENT NEWLINE
%token IndentError statement string

%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%union {
    char *strval;
    int intval;
}



%%
// %type<strval> string

// %start statements

// statements:
//     statement
//     | statements statement
//     ;

/* Parser Grammar */
input: 
    | IndentError {printf("IndentError || WOOOO \n");}
    | input INDENT  {printf("INDENT  || WOOOO \n");}
    | input DEDENT  {printf("DENDENT || WOOOO \n");};

in: 
    INDENT
{
    printf(1);
    // printf("INDENT\n");
    // YYACCEPT;
};

de: 
    DEDENT
{
    printf(1);
    // printf("DEDENT\n");
    // YYACCEPT;
};

ie: IndentError{
    printf(1);
    // printf("IndentError\n"); 
    // YYACCEPT;
};

function: DEF IDENTIFIER '(' args ')' ':' block {
            printf("Function successfully parsed:\n"); 
            // YYACCEPT;
            };

args    : /* empty params */ { }
        | args_  { }
        ;



args_   : arg { }
        | args_ ',' arg { }
        ;



arg     : IDENTIFIER { }
        | NUMBER { }
        ;


block : NEWLINE INDENT statements DEDENT { }
    ;


statements 
            : simple_stmt NEWLINE {}
            | statements simple_stmt NEWLINE {}
    ;

simple_stmt
    : assignment {}
    | return_stmt {}
    ;


assignment
    : IDENTIFIER ASSIGN expression  {
        }
    ;





expression
    : expression '+' expression     { }
    | expression '-' expression     { }
    | expression '*' expression     { }
    | expression '/' expression     { }
    | '|' expression  %prec UMINUS  { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                    which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                    rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/}
    | '(' expression ')'            { }
    | '-' expression %prec UMINUS          { }
    | NUMBER                        { }
    | STRING                        { }
;

return_stmt
            : RETURN NUMBER { }
            | RETURN IDENTIFIER { }
            ;
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

// void yyerror (char const *s)
// {
//     fprintf (stderr, "%s\n", s);
// }
