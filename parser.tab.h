/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

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
/* Tokens.  */
#define ID 258
#define STRING 259
#define ARRAY 260
#define RETURN 261
#define BREAK 262
#define CONTINUE 263
#define GLOBAL 264
#define NONLOCAL 265
#define YIELD 266
#define INDENT 267
#define DEDENT 268
#define INDENTERROR 269
#define NEWLINE 270
#define GT 271
#define LT 272
#define GTE 273
#define LTE 274
#define EQUAL 275
#define INT 276
#define FLOAT 277
#define STR 278
#define BOOL 279
#define LIST 280
#define INT_NUMBER 281
#define FLOAT_NUMBER 282
#define IF 283
#define ELSE 284
#define ELIF 285
#define DEF 286
#define WHILE 287
#define FOR 288
#define IN 289
#define RANGE 290
#define PRINT 291
#define INPUT 292
#define CLASS 293
#define TRY 294
#define EXCEPT 295
#define MATCH 296
#define CASE 297
#define WITH 298
#define AS 299
#define PASS 300
#define UMINUS 301




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 16 "parser.y"
typedef union YYSTYPE {
        char *strval;
        int intval;
        float flval;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 136 "parser.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



