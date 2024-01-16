/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y" /* yacc.c:1909  */

        #include "astNodes.hpp"
        #include <iostream>
        #include <string>

#line 50 "parser.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STRING = 259,
    ARRAY = 260,
    RETURN = 261,
    BREAK = 262,
    CONTINUE = 263,
    GLOBAL = 264,
    NONLOCAL = 265,
    YIELD = 266,
    INDENT = 267,
    DEDENT = 268,
    INDENTERROR = 269,
    NEWLINE = 270,
    GT = 271,
    LT = 272,
    GTE = 273,
    LTE = 274,
    EQUAL = 275,
    INT = 276,
    FLOAT = 277,
    STR = 278,
    BOOL = 279,
    LIST = 280,
    INT_NUMBER = 281,
    FLOAT_NUMBER = 282,
    IF = 283,
    ELSE = 284,
    ELIF = 285,
    DEF = 286,
    WHILE = 287,
    FOR = 288,
    IN = 289,
    RANGE = 290,
    PRINT = 291,
    INPUT = 292,
    CLASS = 293,
    TRY = 294,
    EXCEPT = 295,
    MATCH = 296,
    CASE = 297,
    WITH = 298,
    AS = 299,
    PASS = 300,
    AND = 301,
    OR = 302,
    TRUE_TOK = 303,
    FALSE_TOK = 304,
    UMINUS = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "parser.y" /* yacc.c:1909  */

        char *strval;
        int intval;
        float flval;
        AstNode* astNode;

#line 120 "parser.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
