%{
    #include <stdio.h>
    #include <ctype.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"

    //Stack Definition
    #define Stack_SIZE 100
    void push();
    void pop();
    void show();

    // Stack Start
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
    // Stack End

    #define keyword_size 10
    char keyword[keyword_size];

    int current_indentation = 0;
    int spaces = 0;

    // string buffer
    #define MAX_STR_CONST 256
    char string_buf[MAX_STR_CONST];
    char *string_buf_ptr;
    ////////////////////


    extern YYSTYPE yylval; 

%}

%option yylineno
%option noyywrap


newL        \n
whiteSpaces [ \t]+

letter      [a-zA-Z]

digit       [0-9]

id          ({letter}|"_")({letter}|{digit}|"_")*

num         {digit}+

function    "print"|"input"|"range"

keyword     "yield"|"with"|"try"|"True"|"return"|"raise"|"pass"|"or"|"and"|"not"|"nonlocal"|"None"|"lambda"|"is"|"in"|"import"|"if"|"else"|"global"|"from"|"for"|"finally"|"False"|"except"|"def"|"assert"|"break"|"class"|"continue"|"del"|"elif"|"while"

array       "["(({literal}|{num}|{id})",")*?({literal}|{num}|{id})"]"

ws          [ \t]

comment_1   #.*

comment_2   "'''"(\n|.*)*"'''"

comment_3   "\"\"\""(\n|.*)*"\"\"\""

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

                            printf("special symbols = : in line = %d\n",yylineno- 1);
                            printf("INDENT in line = %d\n",yylineno);
                            return NEWLINE;
                        }

{newL}{whiteSpaces}   {
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
                            printf("NEWLINE 'NEW' in line = %d\n",yylineno);
                            return NEWLINE;
                        }

{newL}                  { 
                            BEGIN(DEDENTALLSTATE);
                            unput(' ');
                            printf("NEWLINE in line = %d\n",yylineno);
                            return NEWLINE;
                        }



<<EOF>>         {
                    BEGIN(DEDENTALLSTATE);
                    unput(' ');

                    if(stack_arr[top] == 0)
                        return 0;
                }



{ws}                    {}

\\$                     {}

{sp}                    {printf("special symbols = %s in line = %d\n",yytext,yylineno);}

{array}                 {printf("array = %s in line = %d\n",yytext,yylineno);}

">"|"<"|"<="|">="|"=="  {printf("relation operator = %s in line = %d\n",yytext,yylineno);}

{comments}              {printf("comment = %s in line = %d\n",yytext,yylineno);}


"="                     {printf("assignment oper = %s in line = %d\n",yytext,yylineno);}

"+"|"-"|"*"|"/"         {printf("arithmetic oper= %s in line = %d\n",yytext,yylineno);}

"["|"]"|"{"|"}"|"("|")" {printf("parenthesis = %s in line = %d\n",yytext,yylineno);}

{function}              {printf("function = %s in line = %d\n",yytext,yylineno);}

{keyword}               {printf("keyword = %s in line = %d\n",yytext,yylineno);}

{id}                    {printf("identifier = %s in line = %d\n",yytext,yylineno);}

{num}                   {printf("number constant= %s in line = %d\n",yytext,yylineno);}


<INDENTSTATE>{
    [ ] {
        BEGIN(INITIAL);
        printf("INDENT in line = %d\n",yylineno);
        return INDENT;
    }
}

<DEDENTSTATE>{
    [ ] {
        printf("========================================\n");
        printf("current_indentation = %d\n",current_indentation);
        printf("stack_arr[top] = %d\n",stack_arr[top]);

        int flag = 1;
        for (int i = 0; i <= top; i++) {
            if (current_indentation == stack_arr[i])
                flag = 0;
        }

        if(flag) {
            printf("Indentation Error in line = %d\n",yylineno);
            return INDENTERROR;
        }

        int end = 1;
        while(current_indentation < stack_arr[top])
        {
            unput(' ');
            BEGIN(DEDENTSTATE);
            end = 0;

            pop();
            printf("in While stack_arr[top] = %d\n",stack_arr[top]);

            printf("DEDENT in line = %d\n",yylineno);
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

            printf("top = %d\n",top);
            while (top > 0) {
                unput(' ');
                BEGIN(DEDENTALLSTATE);
                printf("DEDENT 'ALL' in line = %d\n",yylineno);
                pop();
                return DEDENT;
            }
        } else {
            BEGIN(INITIAL);
        }
    }
}


\"       { string_buf_ptr = string_buf; BEGIN(DOUBLE_STRING); }    

<DOUBLE_STRING>{
    \"  {*string_buf_ptr = '\0'; printf("line%d, DOUBLE STRING: %s\n", yylineno, string_buf); BEGIN(INITIAL);} 
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
    \'  {*string_buf_ptr = '\0'; printf("line%d, SINGLE STRING: %s\n", yylineno, string_buf); BEGIN(INITIAL);}
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
                                if (yytext[i] == '\'') break;
                                keyword[i] = yytext[i];
                                i++;
                            }

                            if (strcmp(keyword, "=") == 0) {
                                printf("assignment oper = %s in line = %d\n",keyword,yylineno);
                            }

                            else if (strcmp(keyword, "(") == 0 || strcmp(keyword, "{") == 0 || strcmp(keyword, "[") == 0) {
                                printf("parenthesis = %s in line = %d\n",keyword,yylineno);
                            }

                            else {
                                printf("keyword = %s in line = %d\n",keyword,yylineno);
                            }

                            string_buf_ptr = string_buf; BEGIN(COMMENT_STRING); 
                        }    
<COMMENT_STRING>{
    "'''"  {*string_buf_ptr = '\0'; printf("line%d, COMMENT STRING: %s\n", yylineno, string_buf); BEGIN(INITIAL);}
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
                                if (yytext[i] == '\"') break;
                                keyword[i] = yytext[i];
                                i++;
                            }

                            if (strcmp(keyword, "=") == 0) {
                                printf("assignment oper = %s in line = %d\n",keyword,yylineno);
                            }

                            else if (strcmp(keyword, "(") == 0 || strcmp(keyword, "{") == 0 || strcmp(keyword, "[") == 0) {
                                printf("parenthesis = %s in line = %d\n",keyword,yylineno);
                            }

                            else {
                                printf("keyword = %s in line = %d\n",keyword,yylineno);
                            }
                            string_buf_ptr = string_buf; BEGIN(COMMENT_STRING_DOUBLE); 
                        }

<COMMENT_STRING_DOUBLE>{
    \"{3}   {*string_buf_ptr = '\0'; printf("line%d, COMMENT STRING DOUBLE: %s\n", yylineno, string_buf); BEGIN(INITIAL);}
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