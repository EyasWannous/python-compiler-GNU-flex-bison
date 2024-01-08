%{
    #include <stdio.h>
    #include <ctype.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"

    #pragma warning (disable: 4005)
    #include "parser.hpp"
    #include "astNodes.hpp"
    using namespace std;

    #define Stack_SIZE 100
    void push();
    void pop();
    void show();

    int top = -1;
    int stack_arr[Stack_SIZE];

    void push(int insert_item)
    {
        if (top == Stack_SIZE - 1)
            printf("\nOverflow!!");

        else
        {
            top++;
            stack_arr[top] = insert_item;
        }
    }

    void pop()
    {
        if (top == -1)
            printf("\nUnderflow!!");

        else
            top--;
    }

    void stackshow()
    {
        if (top == -1)
            printf("\nUnderflow!!");

        else
        {
            printf("\nElements present in the stack: \n");
            for (int i = top; i >= 0; --i)
                printf("%d\n", stack_arr[i]);
        }
    } 

    #define keyword_size 10
    char keyword[keyword_size];

    #define MAX_STR_CONST 256
    char string_buf[MAX_STR_CONST];
    char *string_buf_ptr;

    int current_indentation = 0;
    int spaces = 0;

    extern YYSTYPE yylval;
%}

%option yylineno
%option noyywrap


newL        \n
whiteSpaces [ \t]+

letter      [a-zA-Z]

digit       [0-9]

id          ({letter}|"_")({letter}|{digit}|"_")*

int         -?{digit}+

float       -?{digit}+"."{digit}+

num         ({int}|{float})

keyword     "yield"|"with"|"try"|"True"|"return"|"raise"|"pass"|"or"|"and"|"not"|"nonlocal"|"None"|"lambda"|"is"|"in"|"import"|"if"|"else"|"global"|"from"|"for"|"finally"|"False"|"except"|"def"|"assert"|"break"|"class"|"continue"|"del"|"elif"|"while"

array       "["(({literal}|{num}|{id})","" "*)*?({literal}|{num}|{id})"]"

ws          [ \t]

comment_1   #.*

comment_2   \'{3}[^\'{3}]*\'{3}

comment_3   \"{3}[^\"{3}]*\"{3}

comments    ({comment_1}|{comment_2}|{comment_3})

sp          [:,.;]

literal     (\"([^\"]|\\.)*\")|(\'([^\']|\\.)*\')

literal_2   ({keyword}" "|(("["|"{"|"("|",")|"="{ws}*))

%x DOUBLE_STRING
%x SINGLE_STRING
%x COMMENT_STRING
%x COMMENT_STRING_DOUBLE
%x INDENTSTATE
%x DEDENTALLSTATE
%x DEDENTSTATE
%x NEWNEW

%%

":"{newL}{whiteSpaces}  {
                            BEGIN(INDENTSTATE);
                            if(top < 0)
                                push(0);

                            spaces = 0;
                            for(int i = 0; i < yyleng; i++){
                                if (yytext[i] == ' ') {
                                    spaces++;
                                } else if (yytext[i] == '\t') {
                                    spaces += 8;
                                }
                            }
                            push(spaces);

                            current_indentation = spaces;
                            unput(' ');

                            return NEWLINE;
                        }

{newL}{whiteSpaces}     {
                            if(top < 0)
                                push(0);

                            spaces = 0;
                            for(int i = 0; i < yyleng; i++){
                                if (yytext[i] == ' ') {
                                    spaces++;
                                } else if (yytext[i] == '\t') {
                                    spaces += 8;
                                }
                            }
                            current_indentation = spaces;

                            unput(' ');
                            BEGIN(DEDENTSTATE);
                            return NEWLINE;
                        }

{newL}                  { 
                            BEGIN(DEDENTALLSTATE);
                            unput(' ');
                            return NEWLINE;
                        }

{newL}{comments}        {}

<<EOF>>         {
                    BEGIN(NEWNEW);
                    unput(' ');

                    if(stack_arr[top] == 0)
                        return 0;
                }


{ws}                    {}

\\$                     {}

{sp}                    {yylval.strval = strdup(yytext); return yytext[0];}

{array}                 {return ARRAY;}

{comments}              {}

"="                     {yylval.strval = strdup(yytext); return yytext[0];}

"+"|"-"|"*"|"/"|"_"     {yylval.strval = strdup(yytext); return yytext[0];}

"["|"]"|"{"|"}"|"("|")" {yylval.strval = strdup(yytext); return yytext[0];} 

"def"                   {
                            yylval.strval = strdup(yytext);
                            return DEF;
                        }

"if"                    {
                            yylval.strval = strdup(yytext);
                            return IF;
                        }

"elif"                  {
                            yylval.strval = strdup(yytext);
                            return ELIF;
                        }

"else"                  {
                            yylval.strval = strdup(yytext);
                            return ELSE;
                        }

"break"                 {
                            yylval.strval = strdup(yytext);
                            return BREAK;
                        }

"continue"              {
                            yylval.strval = strdup(yytext);
                            return CONTINUE;
                        }

"global"                {
                            yylval.strval = strdup(yytext);
                            return GLOBAL;
                        }

"nonlocal"              {
                            yylval.strval = strdup(yytext);
                            return NONLOCAL;
                        }

"yield"                 {
                            yylval.strval = strdup(yytext);
                            return YIELD;
                        }

"return"                {
                            yylval.strval = strdup(yytext);
                            return RETURN;
                        }

"<"                     {
                            yylval.strval = strdup(yytext);
                            return LT;
                        }

">"                     {
                            yylval.strval = strdup(yytext);
                            return GT;
                        }

"<="                    {
                            yylval.strval = strdup(yytext);
                            return LTE;
                        }

">="                    {
                            yylval.strval = strdup(yytext);
                            return GTE;
                        }

"=="                    {
                            yylval.strval = strdup(yytext);
                            return EQUAL;
                        }

"while"                 {
                            yylval.strval = strdup(yytext);
                            return WHILE;
                        }

"for"                   {
                            yylval.strval = strdup(yytext);
                            return FOR;
                        }

"in"                    {
                            yylval.strval = strdup(yytext);
                            return IN;
                        }

"range"                 {
                            yylval.strval = strdup(yytext);
                            return RANGE;
                        }

"print"                 {
                            yylval.strval = strdup(yytext);
                            return PRINT;
                        }

"input"                 {
                            yylval.strval = strdup(yytext);
                            return INPUT;
                        }

"class"                 {
                            yylval.strval = strdup(yytext);
                            return CLASS;
                        }

"try"                   {
                            yylval.strval = strdup(yytext);
                            return TRY;
                        }

"except"                {
                            yylval.strval = strdup(yytext);
                            return EXCEPT;
                        }

"match"                 {
                            yylval.strval = strdup(yytext);
                            return MATCH;
                        }

"case"                  {
                            yylval.strval = strdup(yytext);
                            return CASE;
                        }

"with"                  {
                            yylval.strval = strdup(yytext);
                            return WITH;
                        }

"as"                    {
                            yylval.strval = strdup(yytext);
                            return AS;
                        }

"int"                   {
                            yylval.strval = strdup(yytext);
                            return INT;
                        }

"float"                 {
                            yylval.strval = strdup(yytext);
                            return FLOAT;
                        }

"str"                   {
                            yylval.strval = strdup(yytext);
                            return STR;
                        }

"bool"                  {
                            yylval.strval = strdup(yytext);
                            return BOOL;
                        }

"list"                  {
                            yylval.strval = strdup(yytext);
                            return LIST;
                        }

"pass"                  {
                            yylval.strval = strdup(yytext);
                            return PASS;
                        }


{id}                    {
                            yylval.strval = strdup(yytext);
                            return ID;
                        }

{int}                   {
                            yylval.intval = atoi(yytext);
                            return INT_NUMBER;
                        }

{float}                 {
                            yylval.flval = atof(yytext);
                            return FLOAT_NUMBER;
                        }


<INDENTSTATE>{
    [ ] {
        BEGIN(INITIAL);
        return INDENT;
    }
}

<DEDENTSTATE>{
    [ ] {

        int flag = 1;
        for (int i = 0; i <= top; i++) {
            if (current_indentation == stack_arr[i])
                flag = 0;
        }

        if(flag)
            return INDENTERROR;

        int end = 1;
        while(current_indentation < stack_arr[top])
        {
            unput(' ');
            BEGIN(DEDENTSTATE);
            end = 0;
            pop();

            return DEDENT;
        }

        if(end)
            BEGIN(INITIAL);

    }
}

<DEDENTALLSTATE>{
    [ ] {
        if (top < 0)
            push(0);

        if (stack_arr[top] > 0) {
            while (top > 0) {
                unput(' ');
                BEGIN(DEDENTALLSTATE);
                pop();

                return DEDENT;
            }
        } else {
            BEGIN(INITIAL);
        }
    }
}

<NEWNEW>{
    [ ] {
        BEGIN(DEDENTALLSTATE);
        unput(' ');
        return NEWLINE;
    }
}


\"       { string_buf_ptr = string_buf; BEGIN(DOUBLE_STRING); }    

<DOUBLE_STRING>{
    \"  {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;} 
    \\\n {              }
    \n   {printf("error in line %d\n", yylineno); BEGIN(INITIAL);}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    \\\" {*string_buf_ptr++ = '\"';} 
    [^\\\n\"]+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}

\'        { string_buf_ptr = string_buf; BEGIN(SINGLE_STRING); }    
<SINGLE_STRING>{
    \'  {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;}
    \\\n {              }
    \n   {printf("line%d, ERROR: new line in string\n", yylineno); BEGIN(INITIAL);}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    \\\' {*string_buf_ptr++ = '\'';} 
    [^\\\n\']+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}

{literal_2}"'''"        {   
                            int i = 0;
                            strcpy(keyword, " ");

                            while(yytext[i] != ' ') {
                                if (yytext[i] == '\'') 
                                    break;

                                keyword[i] = yytext[i];
                                i++;
                            }

                            string_buf_ptr = string_buf; BEGIN(COMMENT_STRING); 

                            if (strcmp(keyword, "=") == 0) {
                                return yytext[0];
                            }
                            else if (strcmp(keyword, "(") == 0 || strcmp(keyword, "{") == 0 || strcmp(keyword, "[") == 0) {
                                return yytext[0];
                            }

                            else {
                                if ( strcmp(keyword, "return") == 0) {
                                    return RETURN;
                                }
                            }

                            
                        }

<COMMENT_STRING>{
    "'''"  {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;}
    \\\n {}
    \n   {*string_buf_ptr++ = '\n';}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    [^\\\n"'''"]+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}

{literal_2}\"{3}        {   
                            int i = 0;
                            strcpy(keyword, " ");

                            while(yytext[i] != ' ') {
                                if (yytext[i] == '\"') 
                                    break;

                                keyword[i] = yytext[i];
                                i++;
                            }

                            string_buf_ptr = string_buf; BEGIN(COMMENT_STRING_DOUBLE); 

                            if (strcmp(keyword, "=") == 0) {
                                return yytext[0];
                            }

                            else if (strcmp(keyword, "(") == 0 || strcmp(keyword, "{") == 0 || strcmp(keyword, "[") == 0) {
                                return yytext[0];
                            }

                            else {
                                if ( strcmp(keyword, "return") == 0) {
                                    return RETURN;
                                }
                            }
                            
                        }

<COMMENT_STRING_DOUBLE>{
    \"{3}   {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;}
    \\\n {}
    \n   {*string_buf_ptr++ = '\n';}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    [^\\\n\\"{3}]+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}

.                       {printf("error in %d is %s",yylineno,yytext);}

%%