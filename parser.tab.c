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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yydebug=1;
void yyerror(const char *);

extern FILE *yyin;
extern int yylex();
extern int yyparse();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 16 "parser.y"
typedef union YYSTYPE {
        char *strval;
        int intval;
        float flval;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 197 "parser.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 209 "parser.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  89
/* YYNRULES -- Number of rules. */
#define YYNRULES  203
/* YYNRULES -- Number of states. */
#define YYNSTATES  347

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    49,    47,    55,    48,    58,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,     2,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,    57,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      43,    46,    51,    52,    54,    57,    59,    61,    64,    66,
      69,    72,    75,    80,    87,    97,   102,   104,   107,   110,
     112,   115,   117,   119,   121,   123,   125,   127,   129,   131,
     133,   135,   137,   141,   148,   154,   159,   161,   164,   167,
     169,   172,   174,   178,   181,   186,   187,   189,   192,   194,
     196,   199,   201,   204,   207,   210,   215,   216,   218,   220,
     224,   226,   230,   231,   233,   235,   238,   240,   242,   244,
     248,   252,   258,   266,   273,   279,   284,   286,   289,   292,
     294,   297,   299,   301,   303,   305,   307,   309,   311,   313,
     317,   320,   325,   326,   328,   331,   333,   335,   338,   340,
     343,   346,   349,   354,   359,   364,   369,   373,   378,   380,
     383,   386,   388,   391,   393,   395,   399,   401,   404,   407,
     411,   413,   416,   420,   424,   430,   434,   438,   440,   442,
     446,   448,   455,   457,   461,   463,   467,   471,   475,   477,
     479,   483,   488,   490,   493,   496,   498,   500,   502,   504,
     506,   508,   510,   512,   514,   518,   522,   525,   528,   531,
     534,   537,   540,   544,   548,   552,   556,   560,   564,   568,
     572,   576,   580,   583,   586,   588,   590,   592,   594,   596,
     598,   600,   605,   610
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      62,     0,    -1,    -1,    63,    -1,    64,    -1,    63,    15,
      64,    -1,    63,    15,    -1,    66,    -1,    99,    -1,   101,
      -1,    74,    -1,   115,    -1,   142,    -1,   116,    -1,   121,
      -1,   124,    -1,   129,    -1,    26,    -1,    27,    -1,    67,
     137,    68,    -1,    28,   147,    -1,    28,    53,   147,    54,
      -1,    -1,    69,    -1,    71,    70,    -1,    71,    -1,    70,
      -1,    29,   137,    -1,    72,    -1,    71,    72,    -1,    73,
     137,    -1,    30,   147,    -1,    30,    53,   147,    54,    -1,
      31,     3,    53,    93,    54,    75,    -1,    31,     3,    53,
      93,    54,    48,    16,   149,    75,    -1,    15,    12,    76,
      13,    -1,    77,    -1,    76,    77,    -1,   140,    15,    -1,
      79,    -1,    78,    15,    -1,   143,    -1,   145,    -1,   146,
      -1,   144,    -1,    85,    -1,    80,    -1,    81,    -1,   121,
      -1,   129,    -1,   124,    -1,    74,    -1,    32,   147,    82,
      -1,    33,     3,    34,    35,   100,    82,    -1,    33,     3,
      34,     5,    82,    -1,    15,    12,    83,    13,    -1,    84,
      -1,    83,    84,    -1,   140,    15,    -1,   106,    -1,   105,
      15,    -1,    78,    -1,    86,    75,    87,    -1,    28,   147,
      -1,    28,    53,   147,    54,    -1,    -1,    88,    -1,    90,
      89,    -1,    90,    -1,    89,    -1,    29,    75,    -1,    91,
      -1,    90,    91,    -1,    92,    75,    -1,    30,   147,    -1,
      30,    53,   147,    54,    -1,    -1,    94,    -1,    95,    -1,
      94,    55,    95,    -1,     3,    -1,     3,    56,   149,    -1,
      -1,    97,    -1,    98,    -1,    97,    98,    -1,     3,    -1,
      65,    -1,     4,    -1,    32,   147,   102,    -1,    53,    65,
      54,    -1,    53,    65,    55,    65,    54,    -1,    53,    65,
      55,    65,    55,    65,    54,    -1,    33,     3,    34,    35,
     100,   102,    -1,    33,     3,    34,     5,   102,    -1,    15,
      12,   103,    13,    -1,   104,    -1,   103,   104,    -1,   140,
      15,    -1,   106,    -1,   105,    15,    -1,     7,    -1,     8,
      -1,   107,    -1,    99,    -1,   101,    -1,   121,    -1,   129,
      -1,   124,    -1,   108,   102,   109,    -1,    28,   147,    -1,
      28,    53,   147,    54,    -1,    -1,   110,    -1,   112,   111,
      -1,   112,    -1,   111,    -1,    29,   102,    -1,   113,    -1,
     112,   113,    -1,   114,   102,    -1,    30,   147,    -1,    30,
      53,   147,    54,    -1,     3,    53,    93,    54,    -1,    36,
      53,    96,    54,    -1,    37,    53,     4,    54,    -1,    38,
       3,   117,    -1,    15,    12,   118,    13,    -1,   119,    -1,
     118,   119,    -1,   140,    15,    -1,   141,    -1,   120,    15,
      -1,    74,    -1,   145,    -1,    39,   137,   122,    -1,   123,
      -1,   122,   123,    -1,    40,   137,    -1,    41,     3,   128,
      -1,   126,    -1,   125,   126,    -1,    42,    98,   137,    -1,
      42,    57,   137,    -1,    15,    12,   125,   127,    13,    -1,
      43,   130,   137,    -1,   131,    55,   130,    -1,   131,    -1,
     132,    -1,    53,   132,    54,    -1,   133,    -1,     3,    53,
     134,    54,    44,   135,    -1,   148,    -1,   148,    44,   135,
      -1,   148,    -1,   148,    55,   134,    -1,    53,   136,    54,
      -1,   135,    58,     3,    -1,     3,    -1,   135,    -1,   136,
      55,   135,    -1,    15,    12,   138,    13,    -1,   139,    -1,
     138,   139,    -1,   140,    15,    -1,   141,    -1,   142,    -1,
     115,    -1,    66,    -1,    99,    -1,   101,    -1,   121,    -1,
     129,    -1,   124,    -1,     3,    46,   148,    -1,     3,    46,
       5,    -1,     6,    65,    -1,     6,     3,    -1,     6,     4,
      -1,    11,     3,    -1,     9,     3,    -1,    10,     3,    -1,
       3,    16,    65,    -1,     3,    17,    65,    -1,     3,    18,
      65,    -1,     3,    19,    65,    -1,     3,    20,    65,    -1,
       3,    20,     4,    -1,   148,    47,   148,    -1,   148,    48,
     148,    -1,   148,    49,   148,    -1,   148,    50,   148,    -1,
      51,   148,    -1,    48,   148,    -1,    65,    -1,     4,    -1,
       3,    -1,    21,    -1,    22,    -1,    24,    -1,    23,    -1,
      25,    59,    21,    60,    -1,    25,    59,    22,    60,    -1,
      25,    59,    23,    60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    44,    44,    45,    51,    52,    53,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    71,    72,    78,
      82,    83,    87,    88,    92,    93,    94,    98,   102,   103,
     107,   111,   112,   119,   122,   128,   132,   133,   137,   138,
     139,   143,   144,   145,   146,   150,   151,   152,   153,   154,
     155,   156,   161,   167,   170,   176,   180,   181,   185,   186,
     187,   188,   192,   196,   197,   201,   202,   206,   207,   208,
     212,   216,   217,   221,   225,   226,   233,   234,   240,   241,
     247,   248,   253,   254,   259,   260,   266,   267,   268,   275,
     283,   284,   285,   289,   292,   298,   302,   303,   307,   308,
     309,   313,   314,   318,   319,   320,   321,   322,   323,   328,
     332,   333,   337,   338,   342,   343,   344,   348,   352,   353,
     357,   361,   362,   371,   372,   373,   380,   386,   390,   391,
     395,   396,   397,   398,   402,   408,   414,   415,   419,   426,
     433,   434,   438,   442,   446,   455,   461,   462,   466,   467,
     472,   477,   478,   479,   484,   485,   489,   490,   491,   495,
     496,   503,   507,   508,   512,   513,   518,   525,   529,   530,
     531,   533,   534,   535,   539,   540,   544,   545,   546,   550,
     554,   558,   562,   563,   564,   565,   566,   567,   571,   572,
     573,   574,   575,   577,   578,   579,   580,   584,   585,   586,
     587,   588,   589,   590
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "ARRAY", "RETURN",
  "BREAK", "CONTINUE", "GLOBAL", "NONLOCAL", "YIELD", "INDENT", "DEDENT",
  "INDENTERROR", "NEWLINE", "GT", "LT", "GTE", "LTE", "EQUAL", "INT",
  "FLOAT", "STR", "BOOL", "LIST", "INT_NUMBER", "FLOAT_NUMBER", "IF",
  "ELSE", "ELIF", "DEF", "WHILE", "FOR", "IN", "RANGE", "PRINT", "INPUT",
  "CLASS", "TRY", "EXCEPT", "MATCH", "CASE", "WITH", "AS", "PASS", "'='",
  "'+'", "'-'", "'*'", "'/'", "'|'", "UMINUS", "'('", "')'", "','", "':'",
  "'_'", "'.'", "'['", "']'", "$accept", "prog", "statements", "statement",
  "NUMBER", "if_stmt", "if_header", "elif_else_", "elif_else", "else_stmt",
  "elif_stmts", "elif_stmt", "elif_header", "function", "function_block",
  "function_stmts", "function_stmt_", "function_sp_stmt",
  "function_compound_stmt", "func_while_stmt", "func_for_stmt",
  "func_for_block", "func_for_stmts", "func_for_stmt_", "func_if_stmt",
  "func_if_header", "func_elif_else_", "func_elif_else", "func_else_stmt",
  "func_elif_stmts", "func_elif_stmt", "func_elif_header", "args", "args_",
  "arg", "argsp", "args_p", "argp", "while_stmt", "range_args", "for_stmt",
  "for_block", "for_stmts", "for_stmt_", "for_sp_stmt",
  "for_compound_stmt", "for_if_stmt", "for_if_header", "for_elif_else_",
  "for_elif_else", "for_else_stmt", "for_elif_stmts", "for_elif_stmt",
  "for_elif_header", "function_call", "class", "class_block",
  "class_stmts", "class_stmt_", "class_sp_stmt", "try_except_stmt",
  "except_clauses", "except_clause", "match_stmt", "case_statements",
  "case_statement", "final_case", "match_block", "with_statement",
  "with_statement_body", "with_body", "with_stmt_contents", "with_item",
  "inside_brackets", "target", "targets", "block", "stmts", "stmt",
  "simple_stmt", "compound_stmt", "assignment", "return_stmt",
  "yield_stmt", "global_stmt", "nonlocal_stmt", "relation_stmt",
  "expression", "data_type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,   124,   301,    40,    41,    44,    58,    95,    46,    91,
      93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    71,    71,
      72,    73,    73,    74,    74,    75,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    80,    81,    81,    82,    83,    83,    84,    84,
      84,    84,    85,    86,    86,    87,    87,    88,    88,    88,
      89,    90,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    99,
     100,   100,   100,   101,   101,   102,   103,   103,   104,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   107,
     108,   108,   109,   109,   110,   110,   110,   111,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   117,   118,   118,
     119,   119,   119,   119,   120,   121,   122,   122,   123,   124,
     125,   125,   126,   127,   128,   129,   130,   130,   131,   131,
     132,   133,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   144,
     145,   146,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,   149,   149,
     149,   149,   149,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     4,     0,     1,     2,     1,     1,     2,     1,     2,
       2,     2,     4,     6,     9,     4,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     5,     4,     1,     2,     2,     1,
       2,     1,     3,     2,     4,     0,     1,     2,     1,     1,
       2,     1,     2,     2,     2,     4,     0,     1,     1,     3,
       1,     3,     0,     1,     1,     2,     1,     1,     1,     3,
       3,     5,     7,     6,     5,     4,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     4,     0,     1,     2,     1,     1,     2,     1,     2,
       2,     2,     4,     4,     4,     4,     3,     4,     1,     2,
       2,     1,     2,     1,     1,     3,     1,     2,     2,     3,
       1,     2,     3,     3,     5,     3,     3,     1,     1,     3,
       1,     6,     1,     3,     1,     3,     3,     3,     1,     1,
       3,     4,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     7,     0,    10,     8,     9,
      11,    13,    14,    15,    16,    12,     0,    76,     0,     0,
      20,     0,     0,     0,    82,     0,     0,     0,     0,     0,
     196,   195,    17,    18,     0,     0,     0,   194,     0,   147,
     148,   150,   152,     1,     6,    22,   196,   175,   174,    80,
       0,    77,    78,     0,     0,     0,     0,     0,     0,    76,
       0,    89,     0,    86,    88,    87,     0,    83,    84,     0,
       0,   126,     0,     0,   135,   136,     0,   139,     0,   193,
     192,     0,   145,     0,     0,     0,     0,     0,     0,     5,
       0,     0,    19,    23,    26,    25,    28,     0,     0,   123,
       0,   182,   183,   184,   185,   187,   186,    21,     0,     0,
       0,     0,   124,    85,   125,     0,   168,   169,   170,   167,
     171,   173,   172,     0,   162,     0,   165,   166,   138,   137,
       0,     0,   154,   149,   146,   158,     0,   153,   188,   189,
     190,   191,    27,     0,    31,    24,    29,    30,   197,   198,
     200,   199,     0,    81,    79,     0,   101,   102,     0,   104,
     105,     0,    96,     0,    99,   103,     0,   106,   108,   107,
       0,    94,     0,     0,     0,   133,     0,   128,     0,     0,
     131,   134,   161,   163,   164,     0,     0,   140,     0,     0,
     159,     0,     0,     0,     0,     0,     0,    33,     0,   110,
      95,    97,   100,   112,    98,     0,    93,   180,   127,   129,
     132,   130,     0,     0,   141,     0,     0,   155,   156,     0,
     157,    32,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   113,   116,   115,   118,     0,    90,     0,   142,     0,
     144,   151,   160,   201,   202,   203,     0,     0,     0,     0,
       0,     0,    51,     0,    36,     0,    39,    46,    47,    45,
       0,    48,    50,    49,     0,    41,    44,    42,    43,     0,
     111,   117,     0,   121,   114,   119,   120,     0,   143,   177,
     178,   176,   181,   179,     0,    63,     0,     0,    35,    37,
      40,    65,    38,    34,     0,    91,     0,     0,     0,    52,
       0,     0,     0,    62,    66,    69,    68,    71,     0,   122,
       0,    64,     0,     0,     0,    70,     0,    74,    67,    72,
      73,    92,    61,     0,    56,     0,    59,     0,    54,     0,
       0,    55,    57,    60,    58,    53,    75
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    12,    13,    14,    47,   126,    16,   102,   103,   104,
     105,   106,   107,    17,   207,   263,   264,   265,   266,   267,
     268,   309,   333,   334,   269,   270,   313,   314,   315,   316,
     317,   318,    60,    61,    62,    76,    77,   222,   127,   183,
     128,    71,   171,   172,   173,   174,   175,   176,   240,   241,
     242,   243,   244,   245,   129,    21,    81,   186,   187,   188,
     130,    84,    85,   131,   196,   197,   225,    87,   132,    48,
      49,    50,    51,   141,   147,   201,    38,   133,   134,   135,
     136,   137,   275,   276,   277,   278,    30,    52,   163
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -307
static const short int yypact[] =
{
     263,   -22,     9,    84,   122,   141,   -21,    95,   148,   142,
     162,    37,   177,   164,  -307,  -307,   142,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,    91,   188,   214,   122,
    -307,   139,   185,   168,   137,   199,   189,   195,   175,   193,
     167,  -307,  -307,  -307,   107,   107,   111,  -307,   142,   166,
    -307,  -307,   149,  -307,   263,    -4,  -307,  -307,   281,   161,
     170,   171,  -307,    24,    24,    24,    24,   123,   174,   188,
     226,  -307,    96,  -307,  -307,  -307,   187,   137,  -307,   191,
     227,  -307,   444,   142,   175,  -307,   230,  -307,   107,  -307,
    -307,   192,  -307,    37,    12,   107,   107,   107,   107,  -307,
     142,    17,  -307,  -307,  -307,    -4,  -307,   142,   246,  -307,
     188,  -307,  -307,  -307,  -307,  -307,  -307,  -307,   196,   399,
     185,   190,  -307,  -307,  -307,   413,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,   430,  -307,   236,  -307,  -307,  -307,  -307,
     218,   202,   140,  -307,  -307,  -307,    12,   200,    59,    59,
    -307,  -307,  -307,   122,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,   203,  -307,  -307,    54,  -307,  -307,    39,  -307,
    -307,   173,  -307,   257,  -307,  -307,   185,  -307,  -307,  -307,
     258,  -307,    24,   185,   273,  -307,   216,  -307,   264,   265,
    -307,  -307,  -307,  -307,  -307,   137,   219,  -307,   243,   107,
     200,    -2,   286,   238,    82,   278,   277,  -307,   122,  -307,
    -307,  -307,  -307,    83,  -307,    75,  -307,  -307,  -307,  -307,
    -307,  -307,   142,    19,  -307,   285,    12,  -307,  -307,    12,
    -307,  -307,   245,   250,   253,   387,   246,   261,   185,    40,
    -307,  -307,  -307,    83,  -307,   185,  -307,    24,  -307,   142,
    -307,   200,   200,  -307,  -307,  -307,   143,   314,   316,    44,
     122,   317,  -307,   336,  -307,   306,  -307,  -307,  -307,  -307,
     323,  -307,  -307,  -307,   325,  -307,  -307,  -307,  -307,   323,
    -307,  -307,   122,  -307,  -307,  -307,  -307,   106,  -307,  -307,
    -307,  -307,  -307,  -307,   122,  -307,   328,   298,  -307,  -307,
    -307,   155,  -307,  -307,   290,  -307,    24,   294,   338,  -307,
     101,   323,    46,  -307,  -307,  -307,   155,  -307,   323,  -307,
     299,  -307,   348,   328,   190,  -307,   122,  -307,  -307,  -307,
    -307,  -307,  -307,   275,  -307,   337,  -307,   345,  -307,   328,
     307,  -307,  -307,  -307,  -307,  -307,  -307
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -307,  -307,  -307,   308,   -29,    13,  -307,  -307,  -307,   260,
    -307,   266,  -307,  -109,  -211,  -307,   100,  -190,  -307,  -307,
    -307,  -306,  -307,    33,  -307,  -307,  -307,  -307,    58,  -307,
      62,  -307,   301,  -307,   272,  -307,  -307,   -16,     3,    64,
       4,  -110,  -307,   212,  -177,  -155,  -307,  -307,  -307,  -307,
     151,  -307,   152,  -307,    29,  -307,  -307,  -307,   206,  -307,
       0,  -307,   302,     1,  -307,   204,  -307,  -307,     2,   310,
    -307,   353,  -307,   205,  -140,  -307,    -9,  -307,   268,  -111,
    -114,    30,  -307,  -307,  -104,  -307,    15,   -17,   169
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
      22,    23,    24,    18,    19,    75,   200,    55,   180,    58,
     181,   190,    28,    15,   189,   145,   185,   338,    78,    32,
      28,   191,    73,    74,    26,   100,   101,    89,    90,    20,
      25,    27,    34,   345,   111,   112,   113,   114,   116,    92,
      40,    41,    28,    28,    68,    42,    43,    28,    75,    28,
      42,    43,   228,   229,    22,    23,    24,    18,    19,   301,
     180,   123,    29,    42,    43,   146,   213,    15,   303,   205,
     153,   142,   190,   216,   138,   189,   249,   185,   148,   149,
     150,   151,   191,    20,    25,    44,   251,    31,    45,   252,
      46,   152,   208,   282,    56,    41,    57,   294,   157,   326,
     325,   120,   206,   232,   233,   234,   323,   330,    97,    98,
      56,    41,   238,   239,    40,    41,   154,    42,    43,   177,
     178,   179,   169,   170,   274,    28,   262,   115,   281,   246,
     247,   121,   332,    42,    43,   286,   324,    42,    43,    44,
      73,    74,    45,   332,    33,   335,   289,   290,    35,    42,
      43,    36,   274,   215,   262,    44,   335,    37,    45,    44,
     305,   306,    45,    42,    43,    39,    75,   336,   203,    42,
      43,   177,   178,   179,   169,   170,     1,    53,   336,    54,
     166,   167,   142,   209,   311,   312,   210,    95,    96,    97,
      98,    59,    69,    94,    75,   199,    95,    96,    97,    98,
      70,   168,    72,    79,    80,     4,     5,    82,    86,     6,
       7,   337,     9,   248,    10,    83,    11,   108,   287,     1,
      88,    93,   337,   237,   109,   184,   110,   291,   117,   218,
      63,    64,    65,    66,    67,   271,   272,   273,   119,   125,
     288,   122,   140,   182,     2,   124,   143,     3,     4,     5,
     165,   194,     6,     7,   283,     9,   198,    10,   202,    11,
     195,   223,   204,   271,   272,   273,     1,   158,   159,   160,
     161,   162,   212,   214,   295,   296,   217,   320,     1,   220,
     221,   256,   166,   167,   184,   257,   258,   226,   341,   230,
     235,     2,   231,   236,     3,     4,     5,   304,   250,     6,
       7,     8,     9,   168,    10,   253,    11,     4,     5,   307,
     254,     6,     7,   255,     9,   280,    10,   292,    11,   293,
     297,   300,   177,   178,   179,   169,   170,   327,    95,    96,
      97,    98,   310,   177,   178,   179,   169,   170,   205,     1,
     302,   340,   256,   308,   319,   184,   257,   258,   321,   298,
     322,     1,   343,   331,   256,   166,   167,   184,   257,   258,
     344,   346,    99,   299,   259,   155,   342,     3,   260,   261,
     118,   156,     6,     7,   328,     9,   168,    10,   329,    11,
       4,     5,   164,   211,     6,     7,   139,     9,   339,    10,
       1,    11,   219,   256,   284,   285,   184,   257,   258,    91,
     224,   193,     1,   144,   227,   279,   166,   167,     0,     0,
       0,     0,     0,     0,     0,   259,     1,     0,     3,   260,
     261,     0,   184,     6,     7,     0,     9,   168,    10,     0,
      11,     4,     5,     1,     0,     6,     7,     0,     9,     0,
      10,     2,    11,   192,     3,     4,     5,     1,     0,     6,
       7,     0,     9,     0,    10,     0,    11,     0,     2,     0,
       0,     0,     4,     5,     0,     0,     6,     7,     0,     9,
       0,    10,     2,    11,     0,     0,     4,     5,     0,     0,
       6,     7,     0,     9,     0,    10,     0,    11
};

static const short int yycheck[] =
{
       0,     0,     0,     0,     0,    34,   146,    16,   119,    26,
     120,   125,     3,     0,   125,     3,   125,   323,    34,     4,
       3,   125,     3,     4,    46,    29,    30,    44,    45,     0,
       0,    53,    53,   339,    63,    64,    65,    66,    67,    48,
       3,     4,     3,     3,    29,    26,    27,     3,    77,     3,
      26,    27,    54,    55,    54,    54,    54,    54,    54,   270,
     171,    77,    53,    26,    27,    53,   176,    54,   279,    15,
      53,    88,   186,   183,    83,   186,    57,   186,    95,    96,
      97,    98,   186,    54,    54,    48,   226,     3,    51,   229,
      53,   100,    53,    53,     3,     4,     5,    53,   107,    53,
     311,     5,    48,    21,    22,    23,     5,   318,    49,    50,
       3,     4,    29,    30,     3,     4,   101,    26,    27,   119,
     119,   119,   119,   119,   235,     3,   235,     4,   238,    54,
      55,    35,   322,    26,    27,   245,    35,    26,    27,    48,
       3,     4,    51,   333,     3,   322,     3,     4,    53,    26,
      27,     3,   263,   182,   263,    48,   333,    15,    51,    48,
      54,    55,    51,    26,    27,     3,   195,   322,   153,    26,
      27,   171,   171,   171,   171,   171,     3,     0,   333,    15,
       7,     8,   199,   168,    29,    30,    13,    47,    48,    49,
      50,     3,    53,    44,   223,    55,    47,    48,    49,    50,
      15,    28,    34,     4,    15,    32,    33,    12,    15,    36,
      37,   322,    39,   222,    41,    40,    43,    56,   247,     3,
      53,    55,   333,   208,    54,     9,    55,   256,    54,    13,
      16,    17,    18,    19,    20,   235,   235,   235,    12,    12,
     249,    54,    12,    53,    28,    54,    54,    31,    32,    33,
      54,    15,    36,    37,   239,    39,    54,    41,    58,    43,
      42,    42,    59,   263,   263,   263,     3,    21,    22,    23,
      24,    25,    15,    15,   259,   260,     3,   306,     3,    15,
      15,     6,     7,     8,     9,    10,    11,    44,    13,     3,
      12,    28,    54,    16,    31,    32,    33,   282,    13,    36,
      37,    38,    39,    28,    41,    60,    43,    32,    33,   294,
      60,    36,    37,    60,    39,    54,    41,     3,    43,     3,
       3,    15,   322,   322,   322,   322,   322,   312,    47,    48,
      49,    50,    34,   333,   333,   333,   333,   333,    15,     3,
      15,   326,     6,    15,    54,     9,    10,    11,    54,    13,
      12,     3,    15,    54,     6,     7,     8,     9,    10,    11,
      15,    54,    54,   263,    28,   105,   333,    31,    32,    33,
      69,   105,    36,    37,   316,    39,    28,    41,   316,    43,
      32,    33,   110,   171,    36,    37,    84,    39,   324,    41,
       3,    43,   186,     6,   243,   243,     9,    10,    11,    46,
     196,   133,     3,    93,   199,   236,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,     3,    -1,    31,    32,
      33,    -1,     9,    36,    37,    -1,    39,    28,    41,    -1,
      43,    32,    33,     3,    -1,    36,    37,    -1,    39,    -1,
      41,    28,    43,    13,    31,    32,    33,     3,    -1,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    -1,    28,    -1,
      -1,    -1,    32,    33,    -1,    -1,    36,    37,    -1,    39,
      -1,    41,    28,    43,    -1,    -1,    32,    33,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    28,    31,    32,    33,    36,    37,    38,    39,
      41,    43,    62,    63,    64,    66,    67,    74,    99,   101,
     115,   116,   121,   124,   129,   142,    46,    53,     3,    53,
     147,     3,   147,     3,    53,    53,     3,    15,   137,     3,
       3,     4,    26,    27,    48,    51,    53,    65,   130,   131,
     132,   133,   148,     0,    15,   137,     3,     5,   148,     3,
      93,    94,    95,    16,    17,    18,    19,    20,   147,    53,
      15,   102,    34,     3,     4,    65,    96,    97,    98,     4,
      15,   117,    12,    40,   122,   123,    15,   128,    53,   148,
     148,   132,   137,    55,    44,    47,    48,    49,    50,    64,
      29,    30,    68,    69,    70,    71,    72,    73,    56,    54,
      55,    65,    65,    65,    65,     4,    65,    54,    93,    12,
       5,    35,    54,    98,    54,    12,    66,    99,   101,   115,
     121,   124,   129,   138,   139,   140,   141,   142,   137,   123,
      12,   134,   148,    54,   130,     3,    53,   135,   148,   148,
     148,   148,   137,    53,   147,    70,    72,   137,    21,    22,
      23,    24,    25,   149,    95,    54,     7,     8,    28,    99,
     101,   103,   104,   105,   106,   107,   108,   121,   124,   129,
     140,   102,    53,   100,     9,    74,   118,   119,   120,   140,
     141,   145,    13,   139,    15,    42,   125,   126,    54,    55,
     135,   136,    58,   147,    59,    15,    48,    75,    53,   147,
      13,   104,    15,   102,    15,    65,   102,     3,    13,   119,
      15,    15,    98,    42,   126,   127,    44,   134,    54,    55,
       3,    54,    21,    22,    23,    12,    16,   147,    29,    30,
     109,   110,   111,   112,   113,   114,    54,    55,   137,    57,
      13,   135,   135,    60,    60,    60,     6,    10,    11,    28,
      32,    33,    74,    76,    77,    78,    79,    80,    81,    85,
      86,   121,   124,   129,   140,   143,   144,   145,   146,   149,
      54,   102,    53,   147,   111,   113,   102,    65,   137,     3,
       4,    65,     3,     3,    53,   147,   147,     3,    13,    77,
      15,    75,    15,    75,   147,    54,    55,   147,    15,    82,
      34,    29,    30,    87,    88,    89,    90,    91,    92,    54,
      65,    54,    12,     5,    35,    75,    53,   147,    89,    91,
      75,    54,    78,    83,    84,   105,   106,   140,    82,   100,
     147,    13,    84,    15,    15,    82,    54
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 44 "parser.y"
    { /* for empty put % empty */;}
    break;

  case 3:
#line 45 "parser.y"
    {
        printf("prog accepted:\n");YYACCEPT;
    ;}
    break;

  case 4:
#line 51 "parser.y"
    { ;}
    break;

  case 5:
#line 52 "parser.y"
    { ;}
    break;

  case 6:
#line 53 "parser.y"
    { ;}
    break;

  case 7:
#line 58 "parser.y"
    { ;}
    break;

  case 8:
#line 59 "parser.y"
    { ;}
    break;

  case 9:
#line 60 "parser.y"
    { ;}
    break;

  case 10:
#line 61 "parser.y"
    { ;}
    break;

  case 11:
#line 62 "parser.y"
    { ;}
    break;

  case 12:
#line 63 "parser.y"
    { ;}
    break;

  case 13:
#line 64 "parser.y"
    { ;}
    break;

  case 14:
#line 65 "parser.y"
    { ;}
    break;

  case 15:
#line 66 "parser.y"
    { ;}
    break;

  case 16:
#line 67 "parser.y"
    { ;}
    break;

  case 19:
#line 78 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 22:
#line 87 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 23:
#line 88 "parser.y"
    { ;}
    break;

  case 33:
#line 119 "parser.y"
    {
            printf("Function successfully parsed:\n"); 
        ;}
    break;

  case 34:
#line 122 "parser.y"
    {
            printf("Generic Function successfully parsed:\n"); 
        ;}
    break;

  case 35:
#line 128 "parser.y"
    { ;}
    break;

  case 38:
#line 137 "parser.y"
    {;}
    break;

  case 39:
#line 138 "parser.y"
    {;}
    break;

  case 48:
#line 153 "parser.y"
    {;}
    break;

  case 49:
#line 154 "parser.y"
    {;}
    break;

  case 50:
#line 155 "parser.y"
    {;}
    break;

  case 52:
#line 161 "parser.y"
    { 
            printf("while statement successfully parsed:\n"); 
        ;}
    break;

  case 53:
#line 167 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 54:
#line 170 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 55:
#line 176 "parser.y"
    { ;}
    break;

  case 58:
#line 185 "parser.y"
    {;}
    break;

  case 59:
#line 186 "parser.y"
    {;}
    break;

  case 62:
#line 192 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 65:
#line 201 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 66:
#line 202 "parser.y"
    { ;}
    break;

  case 76:
#line 233 "parser.y"
    { ;}
    break;

  case 77:
#line 234 "parser.y"
    { ;}
    break;

  case 78:
#line 240 "parser.y"
    { ;}
    break;

  case 79:
#line 241 "parser.y"
    { ;}
    break;

  case 80:
#line 247 "parser.y"
    { ;}
    break;

  case 81:
#line 248 "parser.y"
    { ;}
    break;

  case 82:
#line 253 "parser.y"
    { ;}
    break;

  case 83:
#line 254 "parser.y"
    { ;}
    break;

  case 84:
#line 259 "parser.y"
    { ;}
    break;

  case 85:
#line 260 "parser.y"
    { ;}
    break;

  case 86:
#line 266 "parser.y"
    { ;}
    break;

  case 87:
#line 267 "parser.y"
    { ;}
    break;

  case 88:
#line 268 "parser.y"
    { ;}
    break;

  case 89:
#line 275 "parser.y"
    { 
            printf("while statement successfully parsed:\n"); 
        ;}
    break;

  case 93:
#line 289 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 94:
#line 292 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 95:
#line 298 "parser.y"
    { ;}
    break;

  case 98:
#line 307 "parser.y"
    {;}
    break;

  case 99:
#line 308 "parser.y"
    {;}
    break;

  case 106:
#line 321 "parser.y"
    {;}
    break;

  case 107:
#line 322 "parser.y"
    {;}
    break;

  case 108:
#line 323 "parser.y"
    {;}
    break;

  case 109:
#line 328 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 112:
#line 337 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 113:
#line 338 "parser.y"
    { ;}
    break;

  case 123:
#line 371 "parser.y"
    {;}
    break;

  case 124:
#line 372 "parser.y"
    {;}
    break;

  case 125:
#line 373 "parser.y"
    {;}
    break;

  case 126:
#line 380 "parser.y"
    { 
        printf("class statement successfully parsed:\n");
    ;}
    break;

  case 127:
#line 386 "parser.y"
    { ;}
    break;

  case 130:
#line 395 "parser.y"
    {;}
    break;

  case 131:
#line 396 "parser.y"
    {;}
    break;

  case 135:
#line 408 "parser.y"
    { 
                printf("try_except statement successfully parsed:\n"); 
            ;}
    break;

  case 136:
#line 414 "parser.y"
    {;}
    break;

  case 137:
#line 415 "parser.y"
    {;}
    break;

  case 138:
#line 419 "parser.y"
    {;}
    break;

  case 139:
#line 426 "parser.y"
    { 
            printf("match statement successfully parsed:\n"); 
        ;}
    break;

  case 144:
#line 446 "parser.y"
    { ;}
    break;

  case 145:
#line 455 "parser.y"
    { 
                printf("with statement successfully parsed:\n"); 
            ;}
    break;

  case 161:
#line 503 "parser.y"
    { ;}
    break;

  case 164:
#line 512 "parser.y"
    {;}
    break;

  case 165:
#line 513 "parser.y"
    {;}
    break;

  case 166:
#line 518 "parser.y"
    {;}
    break;

  case 167:
#line 525 "parser.y"
    {;}
    break;

  case 168:
#line 529 "parser.y"
    {;}
    break;

  case 169:
#line 530 "parser.y"
    {;}
    break;

  case 170:
#line 531 "parser.y"
    {;}
    break;

  case 171:
#line 533 "parser.y"
    {;}
    break;

  case 172:
#line 534 "parser.y"
    {;}
    break;

  case 173:
#line 535 "parser.y"
    {;}
    break;

  case 174:
#line 539 "parser.y"
    {;}
    break;

  case 175:
#line 540 "parser.y"
    {;}
    break;

  case 176:
#line 544 "parser.y"
    { ;}
    break;

  case 177:
#line 545 "parser.y"
    { ;}
    break;

  case 178:
#line 546 "parser.y"
    { ;}
    break;

  case 179:
#line 550 "parser.y"
    { ;}
    break;

  case 180:
#line 554 "parser.y"
    { ;}
    break;

  case 181:
#line 558 "parser.y"
    { ;}
    break;

  case 182:
#line 562 "parser.y"
    {;}
    break;

  case 183:
#line 563 "parser.y"
    {;}
    break;

  case 184:
#line 564 "parser.y"
    {;}
    break;

  case 185:
#line 565 "parser.y"
    {;}
    break;

  case 186:
#line 566 "parser.y"
    {;}
    break;

  case 187:
#line 567 "parser.y"
    {;}
    break;

  case 188:
#line 571 "parser.y"
    { ;}
    break;

  case 189:
#line 572 "parser.y"
    { ;}
    break;

  case 190:
#line 573 "parser.y"
    { ;}
    break;

  case 191:
#line 574 "parser.y"
    { ;}
    break;

  case 192:
#line 575 "parser.y"
    { ;}
    break;

  case 193:
#line 577 "parser.y"
    { ;}
    break;

  case 194:
#line 578 "parser.y"
    { ;}
    break;

  case 195:
#line 579 "parser.y"
    { ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2135 "parser.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 595 "parser.y"




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
    return 0;
}

void yyerror(const char *msg) {
    printf(" %s \n", msg);
}

