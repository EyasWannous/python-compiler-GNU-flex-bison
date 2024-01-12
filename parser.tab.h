
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* "%code requires" blocks.  */

/* Line 1676 of yacc.c  */
#line 1 "parser.y"

#include "astNodes.hpp"
#include <iostream>
#include <string>



/* Line 1676 of yacc.c  */
#line 48 "parser.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     UMINUS = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 7 "parser.y"

        char *strval;
        int intval;
        float flval;
        AstNode* astNode;



/* Line 1676 of yacc.c  */
#line 120 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


