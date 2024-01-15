
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/* Line 189 of yacc.c  */
#line 73 "parser.tab.c"

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

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 1 "parser.y"

        #include "astNodes.hpp"
        #include <iostream>
        #include <string>



/* Line 209 of yacc.c  */
#line 105 "parser.tab.c"

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

/* Line 214 of yacc.c  */
#line 7 "parser.y"

        char *strval;
        int intval;
        float flval;
        AstNode* astNode;



/* Line 214 of yacc.c  */
#line 177 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 14 "parser.y"

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


/* Line 264 of yacc.c  */
#line 206 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNRULES -- Number of states.  */
#define YYNSTATES  359

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
static const yytype_uint16 yyprhs[] =
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
     506,   508,   510,   512,   514,   518,   523,   528,   533,   538,
     542,   545,   548,   551,   554,   557,   560,   564,   568,   572,
     576,   580,   584,   588,   592,   596,   600,   603,   606,   608,
     610,   612,   614,   616,   618,   620,   625,   630
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
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
     129,    -1,   124,    -1,     3,    46,   148,    -1,     3,    47,
      46,   148,    -1,     3,    48,    46,   148,    -1,     3,    49,
      46,   148,    -1,     3,    50,    46,   148,    -1,     3,    46,
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
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    64,    65,    66,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    84,    85,    91,
      95,    96,   100,   101,   105,   106,   107,   111,   115,   116,
     120,   124,   125,   132,   141,   147,   151,   152,   156,   160,
     164,   170,   171,   172,   173,   177,   178,   179,   180,   181,
     182,   183,   188,   194,   197,   203,   207,   208,   212,   213,
     214,   215,   219,   223,   224,   228,   229,   233,   234,   235,
     239,   243,   244,   248,   252,   253,   260,   261,   266,   267,
     273,   280,   290,   291,   296,   297,   303,   304,   305,   312,
     320,   321,   322,   326,   329,   335,   339,   340,   344,   345,
     346,   350,   351,   355,   356,   357,   358,   359,   360,   365,
     369,   370,   374,   375,   379,   380,   381,   385,   389,   390,
     394,   398,   399,   408,   409,   410,   417,   423,   427,   428,
     432,   433,   434,   435,   439,   445,   451,   452,   456,   463,
     470,   471,   475,   479,   483,   492,   498,   499,   503,   504,
     509,   514,   515,   516,   521,   522,   526,   527,   528,   532,
     533,   540,   544,   545,   549,   550,   555,   562,   566,   567,
     568,   570,   571,   572,   576,   584,   592,   600,   608,   616,
     626,   627,   628,   632,   636,   640,   644,   645,   646,   647,
     648,   649,   653,   657,   661,   665,   669,   671,   672,   673,
     674,   678,   679,   680,   681,   682,   683,   684
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
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
static const yytype_uint16 yytoknum[] =
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
static const yytype_uint8 yyr1[] =
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
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   144,   145,   146,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   149,   149,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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
       1,     1,     1,     1,     3,     4,     4,     4,     4,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     7,     0,    10,     8,     9,
      11,    13,    14,    15,    16,    12,     0,     0,     0,     0,
       0,    76,     0,     0,    20,     0,     0,     0,    82,     0,
       0,     0,     0,     0,   200,   199,    17,    18,     0,     0,
       0,   198,     0,   147,   148,   150,   152,     1,     6,    22,
     200,   179,   174,     0,     0,     0,     0,    80,     0,    77,
      78,     0,     0,     0,     0,     0,     0,    76,     0,    89,
       0,    86,    88,    87,     0,    83,    84,     0,     0,   126,
       0,     0,   135,   136,     0,   139,     0,   197,   196,     0,
     145,     0,     0,     0,     0,     0,     0,     5,     0,     0,
      19,    23,    26,    25,    28,     0,   175,   176,   177,   178,
       0,   123,     0,   186,   187,   188,   189,   191,   190,    21,
       0,     0,     0,     0,   124,    85,   125,     0,   168,   169,
     170,   167,   171,   173,   172,     0,   162,     0,   165,   166,
     138,   137,     0,     0,   154,   149,   146,   158,     0,   153,
     192,   193,   194,   195,    27,     0,    31,    24,    29,    30,
     201,   202,   204,   203,     0,    81,    79,     0,   101,   102,
       0,   104,   105,     0,    96,     0,    99,   103,     0,   106,
     108,   107,     0,    94,     0,     0,     0,   133,     0,   128,
       0,     0,   131,   134,   161,   163,   164,     0,     0,   140,
       0,     0,   159,     0,     0,     0,     0,     0,     0,    33,
       0,   110,    95,    97,   100,   112,    98,     0,    93,   184,
     127,   129,   132,   130,     0,     0,   141,     0,     0,   155,
     156,     0,   157,    32,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   113,   116,   115,   118,     0,    90,     0,
     142,     0,   144,   151,   160,   205,   206,   207,     0,     0,
       0,     0,     0,     0,    51,     0,    36,     0,    39,    46,
      47,    45,     0,    48,    50,    49,     0,    41,    44,    42,
      43,     0,   111,   117,     0,   121,   114,   119,   120,     0,
     143,   181,   182,   180,   185,   183,     0,    63,     0,     0,
      35,    37,    40,    65,    38,    34,     0,    91,     0,     0,
       0,    52,     0,     0,     0,    62,    66,    69,    68,    71,
       0,   122,     0,    64,     0,     0,     0,    70,     0,    74,
      67,    72,    73,    92,    61,     0,    56,     0,    59,     0,
      54,     0,     0,    55,    57,    60,    58,    53,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    51,   138,    16,   110,   111,   112,
     113,   114,   115,    17,   219,   275,   276,   277,   278,   279,
     280,   321,   345,   346,   281,   282,   325,   326,   327,   328,
     329,   330,    68,    69,    70,    84,    85,   234,   139,   195,
     140,    79,   183,   184,   185,   186,   187,   188,   252,   253,
     254,   255,   256,   257,   141,    21,    89,   198,   199,   200,
     142,    92,    93,   143,   208,   209,   237,    95,   144,    52,
      53,    54,    55,   153,   159,   213,    42,   145,   146,   147,
     148,   149,   287,   288,   289,   290,    34,    56,   175
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -312
static const yytype_int16 yypact[] =
{
     275,   177,    11,    22,    68,    85,    10,    47,   105,    95,
     136,    50,   154,   148,  -312,  -312,    95,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,   114,   120,   122,   123,
     125,   170,   234,    68,  -312,   121,   161,   147,   134,   187,
     181,   190,   163,   189,   156,  -312,  -312,  -312,   119,   119,
     124,  -312,    95,   158,  -312,  -312,   192,  -312,   275,    -7,
    -312,  -312,   184,   119,   119,   119,   119,   165,   160,   162,
    -312,     5,     5,     5,     5,   103,   183,   170,   231,  -312,
      60,  -312,  -312,  -312,   191,   134,  -312,   207,   232,  -312,
     287,    95,   163,  -312,   250,  -312,   119,  -312,  -312,   209,
    -312,    50,    27,   119,   119,   119,   119,  -312,    95,    30,
    -312,  -312,  -312,    -7,  -312,    95,   184,   184,   184,   184,
     235,  -312,   170,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     211,   438,   161,   193,  -312,  -312,  -312,   452,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,   469,  -312,   258,  -312,  -312,
    -312,  -312,   237,   226,   151,  -312,  -312,  -312,    27,   223,
      63,    63,  -312,  -312,  -312,    68,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   224,  -312,  -312,    51,  -312,  -312,
      33,  -312,  -312,   411,  -312,   267,  -312,  -312,   161,  -312,
    -312,  -312,   269,  -312,     5,   161,   282,  -312,   179,  -312,
     276,   277,  -312,  -312,  -312,  -312,  -312,   134,   253,  -312,
     252,   119,   223,    71,   296,   247,     6,   293,   294,  -312,
      68,  -312,  -312,  -312,  -312,   118,  -312,   135,  -312,  -312,
    -312,  -312,  -312,  -312,    95,    12,  -312,   304,    27,  -312,
    -312,    27,  -312,  -312,   262,   265,   271,   399,   235,   273,
     161,    34,  -312,  -312,  -312,   118,  -312,   161,  -312,     5,
    -312,    95,  -312,   223,   223,  -312,  -312,  -312,   152,   326,
     329,    44,    68,   330,  -312,   348,  -312,   325,  -312,  -312,
    -312,  -312,   327,  -312,  -312,  -312,   328,  -312,  -312,  -312,
    -312,   327,  -312,  -312,    68,  -312,  -312,  -312,  -312,   139,
    -312,  -312,  -312,  -312,  -312,  -312,    68,  -312,   335,   307,
    -312,  -312,  -312,   128,  -312,  -312,   290,  -312,     5,   298,
     343,  -312,    79,   327,    53,  -312,  -312,  -312,   128,  -312,
     327,  -312,   302,  -312,   360,   335,   193,  -312,    68,  -312,
    -312,  -312,  -312,  -312,  -312,   261,  -312,   345,  -312,   347,
    -312,   335,   310,  -312,  -312,  -312,  -312,  -312,  -312
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -312,   314,   -30,    17,  -312,  -312,  -312,   260,
    -312,   264,  -312,  -131,  -171,  -312,    90,  -240,  -312,  -312,
    -312,  -311,  -312,    29,  -312,  -312,  -312,  -312,    54,  -312,
      55,  -312,   301,  -312,   268,  -312,  -312,   -12,     3,    39,
       4,  -114,  -312,   203,  -230,  -192,  -312,  -312,  -312,  -312,
     140,  -312,   143,  -312,    20,  -312,  -312,  -312,   196,  -312,
       0,  -312,   308,     1,  -312,   198,  -312,  -312,     2,   303,
    -312,   357,  -312,   200,  -145,  -312,    -6,  -312,   270,  -126,
    -130,    21,  -312,  -312,  -128,  -312,    15,   -14,   164
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      22,    23,    24,    18,    19,   192,   197,   202,    83,   203,
      59,   201,    62,   212,    32,    81,    82,    15,   193,    36,
      20,    25,   108,   109,   350,    35,    86,   244,   245,   246,
     157,    46,    47,    32,    97,    98,    32,    32,    46,    47,
     357,   123,   124,   125,   126,   128,   100,    32,    76,   116,
     117,   118,   119,    44,    45,    83,    32,   192,    22,    23,
      24,    18,    19,    38,    33,   132,   217,   197,   202,   261,
     203,    32,   201,   135,   225,    15,    46,    47,    20,    25,
     158,   228,   154,   165,   335,   150,   220,   294,    37,   160,
     161,   162,   163,   263,   344,   133,   264,   306,    48,   218,
      39,    49,   164,    50,   347,   344,   338,   127,    40,   169,
      41,   313,   105,   106,   336,   347,   274,    60,    45,    61,
     315,   286,    60,    45,   166,   240,   241,    44,    45,    46,
      47,   189,   190,   191,   181,   182,   293,    81,    82,    43,
      46,    47,   348,   298,   274,    46,    47,   250,   251,   286,
      46,    47,   337,   348,    57,   301,   302,   323,   324,   342,
      46,    47,    48,    58,   227,    49,    63,    48,    64,    65,
      49,    66,    48,    67,    77,    49,    78,    83,    46,    47,
     215,    80,     1,   189,   190,   191,   181,   182,   196,   258,
     259,    87,   230,   317,   318,   221,    88,   154,   103,   104,
     105,   106,    90,    91,    94,    83,   211,     2,   349,    96,
       3,     4,     5,   101,   121,     6,     7,   122,     9,   349,
      10,   120,    11,    26,    27,    28,    29,    30,   260,   299,
      31,   103,   104,   105,   106,   249,   102,   129,   303,   103,
     104,   105,   106,   131,   137,   134,   194,   283,   284,   285,
      71,    72,    73,    74,    75,   300,   170,   171,   172,   173,
     174,   136,   152,   155,     1,   177,   295,   268,   178,   179,
     196,   269,   270,   206,   353,   283,   284,   285,     1,   207,
     210,   214,   224,   216,   226,   229,   307,   308,   332,   180,
       1,   232,   233,     4,     5,   235,   238,     6,     7,   242,
       9,   243,    10,     2,    11,   247,     3,     4,     5,   316,
     248,     6,     7,     8,     9,     2,    10,   262,    11,     4,
       5,   319,   265,     6,     7,   266,     9,   292,    10,   304,
      11,   267,   305,   309,   189,   190,   191,   181,   182,   339,
     312,   322,   217,   314,   331,   189,   190,   191,   181,   182,
     320,     1,   333,   352,   268,   334,   343,   196,   269,   270,
     355,   310,   356,     1,   358,   311,   268,   178,   179,   196,
     269,   270,   107,   167,   354,   351,   271,   168,   130,     3,
     272,   273,   340,   341,     6,     7,   223,     9,   180,    10,
     176,    11,     4,     5,   231,   296,     6,     7,   297,     9,
     151,    10,     1,    11,   156,   268,   236,    99,   196,   269,
     270,   239,   291,     0,     1,   205,     0,     0,   178,   179,
       0,     0,     0,     0,   222,     0,     0,   271,     0,     0,
       3,   272,   273,     0,     0,     6,     7,     0,     9,   180,
      10,     1,    11,     4,     5,   178,   179,     6,     7,     0,
       9,     0,    10,     0,    11,     1,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,   180,     0,     0,     0,
       4,     5,     1,     0,     6,     7,     0,     9,     0,    10,
       2,    11,   204,     3,     4,     5,     0,     0,     6,     7,
       0,     9,     0,    10,     0,    11,     0,     2,     0,     0,
       0,     4,     5,     0,     0,     6,     7,     0,     9,     0,
      10,     0,    11
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,     0,   131,   137,   137,    38,   137,
      16,   137,    26,   158,     3,     3,     4,     0,   132,     4,
       0,     0,    29,    30,   335,     3,    38,    21,    22,    23,
       3,    26,    27,     3,    48,    49,     3,     3,    26,    27,
     351,    71,    72,    73,    74,    75,    52,     3,    33,    63,
      64,    65,    66,     3,     4,    85,     3,   183,    58,    58,
      58,    58,    58,    53,    53,     5,    15,   198,   198,    57,
     198,     3,   198,    85,   188,    58,    26,    27,    58,    58,
      53,   195,    96,    53,     5,    91,    53,    53,     3,   103,
     104,   105,   106,   238,   334,    35,   241,    53,    48,    48,
      53,    51,   108,    53,   334,   345,    53,     4,     3,   115,
      15,   282,    49,    50,    35,   345,   247,     3,     4,     5,
     291,   247,     3,     4,   109,    54,    55,     3,     4,    26,
      27,   131,   131,   131,   131,   131,   250,     3,     4,     3,
      26,    27,   334,   257,   275,    26,    27,    29,    30,   275,
      26,    27,   323,   345,     0,     3,     4,    29,    30,   330,
      26,    27,    48,    15,   194,    51,    46,    48,    46,    46,
      51,    46,    48,     3,    53,    51,    15,   207,    26,    27,
     165,    34,     3,   183,   183,   183,   183,   183,     9,    54,
      55,     4,    13,    54,    55,   180,    15,   211,    47,    48,
      49,    50,    12,    40,    15,   235,    55,    28,   334,    53,
      31,    32,    33,    55,    54,    36,    37,    55,    39,   345,
      41,    56,    43,    46,    47,    48,    49,    50,   234,   259,
      53,    47,    48,    49,    50,   220,    44,    54,   268,    47,
      48,    49,    50,    12,    12,    54,    53,   247,   247,   247,
      16,    17,    18,    19,    20,   261,    21,    22,    23,    24,
      25,    54,    12,    54,     3,    54,   251,     6,     7,     8,
       9,    10,    11,    15,    13,   275,   275,   275,     3,    42,
      54,    58,    15,    59,    15,     3,   271,   272,   318,    28,
       3,    15,    15,    32,    33,    42,    44,    36,    37,     3,
      39,    54,    41,    28,    43,    12,    31,    32,    33,   294,
      16,    36,    37,    38,    39,    28,    41,    13,    43,    32,
      33,   306,    60,    36,    37,    60,    39,    54,    41,     3,
      43,    60,     3,     3,   334,   334,   334,   334,   334,   324,
      15,    34,    15,    15,    54,   345,   345,   345,   345,   345,
      15,     3,    54,   338,     6,    12,    54,     9,    10,    11,
      15,    13,    15,     3,    54,   275,     6,     7,     8,     9,
      10,    11,    58,   113,   345,   336,    28,   113,    77,    31,
      32,    33,   328,   328,    36,    37,   183,    39,    28,    41,
     122,    43,    32,    33,   198,   255,    36,    37,   255,    39,
      92,    41,     3,    43,   101,     6,   208,    50,     9,    10,
      11,   211,   248,    -1,     3,   145,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    28,    -1,    -1,
      31,    32,    33,    -1,    -1,    36,    37,    -1,    39,    28,
      41,     3,    43,    32,    33,     7,     8,    36,    37,    -1,
      39,    -1,    41,    -1,    43,     3,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    33,     3,    -1,    36,    37,    -1,    39,    -1,    41,
      28,    43,    13,    31,    32,    33,    -1,    -1,    36,    37,
      -1,    39,    -1,    41,    -1,    43,    -1,    28,    -1,    -1,
      -1,    32,    33,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    31,    32,    33,    36,    37,    38,    39,
      41,    43,    62,    63,    64,    66,    67,    74,    99,   101,
     115,   116,   121,   124,   129,   142,    46,    47,    48,    49,
      50,    53,     3,    53,   147,     3,   147,     3,    53,    53,
       3,    15,   137,     3,     3,     4,    26,    27,    48,    51,
      53,    65,   130,   131,   132,   133,   148,     0,    15,   137,
       3,     5,   148,    46,    46,    46,    46,     3,    93,    94,
      95,    16,    17,    18,    19,    20,   147,    53,    15,   102,
      34,     3,     4,    65,    96,    97,    98,     4,    15,   117,
      12,    40,   122,   123,    15,   128,    53,   148,   148,   132,
     137,    55,    44,    47,    48,    49,    50,    64,    29,    30,
      68,    69,    70,    71,    72,    73,   148,   148,   148,   148,
      56,    54,    55,    65,    65,    65,    65,     4,    65,    54,
      93,    12,     5,    35,    54,    98,    54,    12,    66,    99,
     101,   115,   121,   124,   129,   138,   139,   140,   141,   142,
     137,   123,    12,   134,   148,    54,   130,     3,    53,   135,
     148,   148,   148,   148,   137,    53,   147,    70,    72,   137,
      21,    22,    23,    24,    25,   149,    95,    54,     7,     8,
      28,    99,   101,   103,   104,   105,   106,   107,   108,   121,
     124,   129,   140,   102,    53,   100,     9,    74,   118,   119,
     120,   140,   141,   145,    13,   139,    15,    42,   125,   126,
      54,    55,   135,   136,    58,   147,    59,    15,    48,    75,
      53,   147,    13,   104,    15,   102,    15,    65,   102,     3,
      13,   119,    15,    15,    98,    42,   126,   127,    44,   134,
      54,    55,     3,    54,    21,    22,    23,    12,    16,   147,
      29,    30,   109,   110,   111,   112,   113,   114,    54,    55,
     137,    57,    13,   135,   135,    60,    60,    60,     6,    10,
      11,    28,    32,    33,    74,    76,    77,    78,    79,    80,
      81,    85,    86,   121,   124,   129,   140,   143,   144,   145,
     146,   149,    54,   102,    53,   147,   111,   113,   102,    65,
     137,     3,     4,    65,     3,     3,    53,   147,   147,     3,
      13,    77,    15,    75,    15,    75,   147,    54,    55,   147,
      15,    82,    34,    29,    30,    87,    88,    89,    90,    91,
      92,    54,    65,    54,    12,     5,    35,    75,    53,   147,
      89,    91,    75,    54,    78,    83,    84,   105,   106,   140,
      82,   100,   147,    13,    84,    15,    15,    82,    54
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

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
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { (yyval.astNode)=NULL; ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    {
                root = (yyval.astNode);
                YYACCEPT;
        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode) = (yyvsp[(1) - (3)].astNode); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    { ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    { ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    { ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    { ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    { ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    { ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    { ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {
        //printf("Function successfully parsed:\n"); 
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[(2) - (6)].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value);
                (yyval.astNode)->add((yyvsp[(4) - (6)].astNode));
                (yyval.astNode)->add((yyvsp[(6) - (6)].astNode));
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {
            printf("Generic Function successfully parsed:\n"); 
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    { (yyval.astNode) = new StatementsNode("Statements"); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    { 
                (yyval.astNode) = (yyvsp[(1) - (2)].astNode);         
            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { 
                //$$ = $1;        
            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    { 
                //$$ = $1;            
            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    { 
            printf("while statement successfully parsed:\n"); 
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    { ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    { (yyval.astNode) = new Args("Args"); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode) = (yyvsp[(1) - (3)].astNode); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (1)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (3)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { 
            printf("while statement successfully parsed:\n"); 
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { printf("if statement successfully parsed:\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 374 "parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    { ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    { 
        printf("class statement successfully parsed:\n");
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    { ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    {;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    {;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    { 
                printf("try_except statement successfully parsed:\n"); 
            ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    {;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    {;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { 
            printf("match statement successfully parsed:\n"); 
        ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    { ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { 
                printf("with statement successfully parsed:\n"); 
            ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 540 "parser.y"
    { ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 549 "parser.y"
    {;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 550 "parser.y"
    {;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 555 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 562 "parser.y"
    {;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 566 "parser.y"
    {;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 567 "parser.y"
    {;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 568 "parser.y"
    {;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 570 "parser.y"
    {;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 571 "parser.y"
    {;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 572 "parser.y"
    {;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 576 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 584 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 592 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 600 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 608 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 616 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 626 "parser.y"
    { ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 627 "parser.y"
    { ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 628 "parser.y"
    { ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 632 "parser.y"
    { ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 636 "parser.y"
    { ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 640 "parser.y"
    { ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 644 "parser.y"
    {;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 645 "parser.y"
    {;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 646 "parser.y"
    {;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 647 "parser.y"
    {;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 648 "parser.y"
    {;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 649 "parser.y"
    {;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 653 "parser.y"
    { 
                (yyval.astNode) = new AdditionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 657 "parser.y"
    { 
                (yyval.astNode) = new SubtractionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 661 "parser.y"
    {
                (yyval.astNode) = new MultiplicationExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 665 "parser.y"
    {
                (yyval.astNode) = new DivisionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 669 "parser.y"
    { ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 671 "parser.y"
    { ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 672 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 673 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 674 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2754 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 689 "parser.y"




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
