
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
     AND = 301,
     OR = 302,
     TRUE_TOK = 303,
     FALSE_TOK = 304,
     UMINUS = 305
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
#line 181 "parser.tab.c"
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
#line 210 "parser.tab.c"

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNRULES -- Number of states.  */
#define YYNSTATES  394

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
      58,    59,    55,    53,    60,    54,    63,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,     2,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,     2,    62,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    14,    17,    19,
      21,    23,    25,    27,    30,    32,    34,    36,    38,    41,
      43,    45,    47,    49,    53,    56,    61,    62,    64,    67,
      69,    71,    74,    76,    79,    82,    85,    90,    97,   107,
     112,   114,   117,   120,   122,   125,   127,   129,   131,   133,
     135,   137,   139,   141,   143,   145,   147,   151,   158,   164,
     169,   171,   174,   177,   179,   182,   185,   189,   192,   197,
     198,   200,   203,   205,   207,   210,   212,   215,   218,   221,
     226,   227,   229,   231,   235,   237,   241,   242,   244,   246,
     249,   251,   253,   255,   256,   258,   260,   264,   266,   268,
     270,   274,   278,   284,   292,   299,   305,   310,   312,   315,
     318,   320,   323,   325,   327,   329,   331,   333,   335,   337,
     339,   343,   346,   351,   352,   354,   357,   359,   361,   364,
     366,   369,   372,   375,   380,   385,   390,   395,   399,   404,
     406,   409,   412,   414,   417,   419,   421,   425,   427,   430,
     433,   437,   439,   442,   446,   450,   456,   460,   464,   466,
     468,   472,   474,   481,   483,   487,   489,   493,   497,   501,
     503,   505,   509,   514,   516,   519,   522,   524,   526,   528,
     530,   532,   534,   536,   538,   540,   542,   546,   551,   556,
     561,   566,   570,   573,   578,   581,   586,   589,   594,   597,
     600,   603,   605,   609,   613,   617,   621,   625,   629,   631,
     635,   639,   643,   647,   651,   655,   659,   663,   666,   670,
     673,   675,   677,   679,   681,   683,   685,   687,   689,   694,
     699
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    68,    -1,    -1,    69,    -1,    70,    -1,
      69,    15,    70,    -1,    69,    15,    -1,    73,    -1,   109,
      -1,   111,    -1,    81,    -1,   125,    -1,   152,    15,    -1,
     126,    -1,   131,    -1,   134,    -1,   139,    -1,   157,    15,
      -1,    26,    -1,    27,    -1,    48,    -1,    49,    -1,    74,
     147,    75,    -1,    28,   158,    -1,    28,    58,   158,    59,
      -1,    -1,    76,    -1,    78,    77,    -1,    78,    -1,    77,
      -1,    29,   147,    -1,    79,    -1,    78,    79,    -1,    80,
     147,    -1,    30,   158,    -1,    30,    58,   158,    59,    -1,
      31,     3,    58,   100,    59,    82,    -1,    31,     3,    58,
     100,    59,    54,    16,   160,    82,    -1,    15,    12,    83,
      13,    -1,    84,    -1,    83,    84,    -1,   150,    15,    -1,
      86,    -1,    85,    15,    -1,   153,    -1,   155,    -1,   156,
      -1,   154,    -1,    92,    -1,    87,    -1,    88,    -1,   131,
      -1,   139,    -1,   134,    -1,    81,    -1,    32,   158,    89,
      -1,    33,     3,    34,    35,   110,    89,    -1,    33,     3,
      34,     5,    89,    -1,    15,    12,    90,    13,    -1,    91,
      -1,    90,    91,    -1,   150,    15,    -1,   116,    -1,   115,
      15,    -1,    85,    15,    -1,    93,    82,    94,    -1,    28,
     158,    -1,    28,    58,   158,    59,    -1,    -1,    95,    -1,
      97,    96,    -1,    97,    -1,    96,    -1,    29,    82,    -1,
      98,    -1,    97,    98,    -1,    99,    82,    -1,    30,   158,
      -1,    30,    58,   158,    59,    -1,    -1,   101,    -1,   102,
      -1,   101,    60,   102,    -1,     3,    -1,     3,    61,   160,
      -1,    -1,   104,    -1,   105,    -1,   104,   105,    -1,     3,
      -1,    71,    -1,     4,    -1,    -1,   107,    -1,   108,    -1,
     107,    60,   108,    -1,     3,    -1,    71,    -1,     4,    -1,
      32,   158,   112,    -1,    58,    71,    59,    -1,    58,    71,
      60,    71,    59,    -1,    58,    71,    60,    71,    60,    71,
      59,    -1,    33,     3,    34,    35,   110,   112,    -1,    33,
       3,    34,     5,   112,    -1,    15,    12,   113,    13,    -1,
     114,    -1,   113,   114,    -1,   150,    15,    -1,   116,    -1,
     115,    15,    -1,     7,    -1,     8,    -1,   117,    -1,   109,
      -1,   111,    -1,   131,    -1,   139,    -1,   134,    -1,   118,
     112,   119,    -1,    28,   158,    -1,    28,    58,   158,    59,
      -1,    -1,   120,    -1,   122,   121,    -1,   122,    -1,   121,
      -1,    29,   112,    -1,   123,    -1,   122,   123,    -1,   124,
     112,    -1,    30,   158,    -1,    30,    58,   158,    59,    -1,
       3,    58,   106,    59,    -1,    36,    58,   103,    59,    -1,
      37,    58,     4,    59,    -1,    38,     3,   127,    -1,    15,
      12,   128,    13,    -1,   129,    -1,   128,   129,    -1,   150,
      15,    -1,   151,    -1,   130,    15,    -1,    81,    -1,   155,
      -1,    39,   147,   132,    -1,   133,    -1,   132,   133,    -1,
      40,   147,    -1,    41,     3,   138,    -1,   136,    -1,   135,
     136,    -1,    42,   105,   147,    -1,    42,    62,   147,    -1,
      15,    12,   135,   137,    13,    -1,    43,   140,   147,    -1,
     140,    60,   141,    -1,   141,    -1,   142,    -1,    58,   142,
      59,    -1,   143,    -1,     3,    58,   144,    59,    44,   145,
      -1,   159,    -1,   159,    44,   145,    -1,   159,    -1,   144,
      60,   159,    -1,    58,   146,    59,    -1,   145,    63,     3,
      -1,     3,    -1,   145,    -1,   146,    60,   145,    -1,    15,
      12,   148,    13,    -1,   149,    -1,   148,   149,    -1,   150,
      15,    -1,   151,    -1,   152,    -1,   157,    -1,   125,    -1,
      73,    -1,   109,    -1,   111,    -1,   131,    -1,   139,    -1,
     134,    -1,     3,    50,   159,    -1,     3,    53,    50,   159,
      -1,     3,    54,    50,   159,    -1,     3,    55,    50,   159,
      -1,     3,    56,    50,   159,    -1,     3,    50,     5,    -1,
       6,    71,    -1,     6,    71,    60,    71,    -1,     6,     3,
      -1,     6,     3,    60,     3,    -1,     6,     4,    -1,     6,
       4,    60,     4,    -1,    11,     3,    -1,     9,     3,    -1,
      10,     3,    -1,    45,    -1,     3,    16,    71,    -1,     3,
      17,    71,    -1,     3,    18,    71,    -1,     3,    19,    71,
      -1,     3,    20,    71,    -1,     3,    20,     4,    -1,     3,
      -1,   159,    53,   159,    -1,   159,    54,   159,    -1,   159,
      55,   159,    -1,   159,    56,   159,    -1,   159,    46,   159,
      -1,   159,    52,   159,    -1,   159,    47,   159,    -1,   159,
      51,   159,    -1,    51,   159,    -1,    58,   159,    59,    -1,
      54,   159,    -1,    71,    -1,    72,    -1,     4,    -1,     3,
      -1,    21,    -1,    22,    -1,    24,    -1,    23,    -1,    25,
      64,    21,    65,    -1,    25,    64,    22,    65,    -1,    25,
      64,    23,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    71,    72,    78,    79,    80,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    99,
     106,   114,   122,   135,   149,   150,   154,   155,   159,   167,
     168,   172,   181,   188,   192,   202,   203,   210,   220,   233,
     237,   244,   248,   252,   256,   262,   263,   264,   265,   269,
     270,   271,   272,   273,   274,   275,   280,   292,   305,   311,
     315,   322,   326,   327,   328,   329,   333,   347,   348,   352,
     353,   357,   365,   366,   370,   379,   386,   390,   400,   401,
     408,   409,   414,   419,   425,   432,   442,   443,   448,   454,
     460,   467,   469,   479,   480,   485,   491,   497,   504,   506,
     518,   532,   539,   547,   558,   572,   578,   582,   589,   593,
     594,   595,   599,   606,   615,   616,   617,   618,   619,   620,
     625,   639,   640,   644,   645,   649,   657,   658,   662,   671,
     678,   682,   692,   693,   702,   711,   719,   734,   745,   749,
     755,   759,   760,   761,   762,   766,   772,   784,   791,   795,
     808,   824,   831,   835,   845,   855,   871,   883,   887,   897,
     898,   903,   908,   920,   921,   929,   936,   943,   944,   945,
     954,   961,   967,   971,   977,   981,   982,   987,   988,   995,
     999,  1000,  1001,  1003,  1004,  1005,  1009,  1020,  1031,  1042,
    1053,  1064,  1077,  1084,  1092,  1102,  1116,  1126,  1142,  1154,
    1166,  1178,  1187,  1197,  1207,  1217,  1227,  1237,  1249,  1258,
    1265,  1272,  1279,  1286,  1293,  1300,  1307,  1314,  1315,  1316,
    1318,  1320,  1322,  1329,  1338,  1339,  1340,  1341,  1342,  1343,
    1344
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
  "CLASS", "TRY", "EXCEPT", "MATCH", "CASE", "WITH", "AS", "PASS", "AND",
  "OR", "TRUE_TOK", "FALSE_TOK", "'='", "'|'", "'&'", "'+'", "'-'", "'*'",
  "'/'", "UMINUS", "'('", "')'", "','", "':'", "'_'", "'.'", "'['", "']'",
  "$accept", "start", "prog", "statements", "statement", "NUMBER",
  "boolean", "if_stmt", "if_header", "elif_else_", "elif_else",
  "else_stmt", "elif_stmts", "elif_stmt", "elif_header", "function",
  "function_block", "function_stmts", "function_stmt_", "function_sp_stmt",
  "function_compound_stmt", "func_while_stmt", "func_for_stmt",
  "func_for_block", "func_for_stmts", "func_for_stmt_", "func_if_stmt",
  "func_if_header", "func_elif_else_", "func_elif_else", "func_else_stmt",
  "func_elif_stmts", "func_elif_stmt", "func_elif_header", "args", "args_",
  "arg", "argsp", "args_p", "argp", "argsc", "args_c", "argc",
  "while_stmt", "range_args", "for_stmt", "for_block", "for_stmts",
  "for_stmt_", "for_sp_stmt", "for_compound_stmt", "for_if_stmt",
  "for_if_header", "for_elif_else_", "for_elif_else", "for_else_stmt",
  "for_elif_stmts", "for_elif_stmt", "for_elif_header", "function_call",
  "class", "class_block", "class_stmts", "class_stmt_", "class_sp_stmt",
  "try_except_stmt", "except_clauses", "except_clause", "match_stmt",
  "case_statements", "case_statement", "final_case", "match_block",
  "with_statement", "with_statement_body", "with_body",
  "with_stmt_contents", "with_item", "inside_brackets", "target",
  "targets", "block", "stmts", "stmt", "simple_stmt", "compound_stmt",
  "assignment", "return_stmt", "yield_stmt", "global_stmt",
  "nonlocal_stmt", "pass", "relation_stmt", "expression", "data_type", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      61,   124,    38,    43,    45,    42,    47,   305,    40,    41,
      44,    58,    95,    46,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      76,    77,    78,    78,    79,    80,    80,    81,    81,    82,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    87,    88,    88,    89,
      90,    90,    91,    91,    91,    91,    92,    93,    93,    94,
      94,    95,    95,    95,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   110,   110,   110,   111,   111,   112,   113,   113,   114,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     117,   118,   118,   119,   119,   120,   120,   120,   121,   122,
     122,   123,   124,   124,   125,   125,   125,   126,   127,   128,
     128,   129,   129,   129,   129,   130,   131,   132,   132,   133,
     134,   135,   135,   136,   137,   138,   139,   140,   140,   141,
     141,   142,   143,   143,   143,   144,   144,   145,   145,   145,
     146,   146,   147,   148,   148,   149,   149,   150,   150,   150,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   152,
     152,   152,   153,   153,   153,   153,   153,   153,   154,   155,
     156,   157,   158,   158,   158,   158,   158,   158,   158,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     160
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     2,     4,     0,     1,     2,     1,
       1,     2,     1,     2,     2,     2,     4,     6,     9,     4,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     4,
       1,     2,     2,     1,     2,     2,     3,     2,     4,     0,
       1,     2,     1,     1,     2,     1,     2,     2,     2,     4,
       0,     1,     1,     3,     1,     3,     0,     1,     1,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     1,     1,
       3,     3,     5,     7,     6,     5,     4,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     0,     1,     2,     1,     1,     2,     1,
       2,     2,     2,     4,     4,     4,     4,     3,     4,     1,
       2,     2,     1,     2,     1,     1,     3,     1,     2,     2,
       3,     1,     2,     3,     3,     5,     3,     3,     1,     1,
       3,     1,     6,     1,     3,     1,     3,     3,     3,     1,
       1,     3,     4,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     4,
       4,     3,     2,     4,     2,     4,     2,     4,     2,     2,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     2,     4,     5,     8,     0,    11,
       9,    10,    12,    14,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,    93,   208,     0,    24,     0,     0,
       0,    86,     0,     0,     0,     0,     0,   223,   222,    19,
      20,    21,    22,     0,     0,     0,   220,   221,     0,   158,
     159,   161,   163,     1,     7,    26,    13,    18,   223,   191,
       0,   186,     0,     0,     0,     0,    97,    99,    98,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    80,     0,
     100,     0,    90,    92,    91,     0,    87,    88,     0,     0,
     137,     0,     0,   146,   147,     0,   150,     0,   217,   219,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,    23,    27,    30,    29,
      32,     0,     0,   187,   188,   189,   190,   134,     0,   202,
     203,   204,   205,   207,   206,    25,    84,     0,    81,    82,
       0,     0,     0,   135,    89,   136,     0,   180,   181,   182,
     179,   183,   185,   184,     0,   173,     0,   176,   177,   178,
     149,   148,     0,     0,   165,   160,   218,   157,   169,     0,
     164,   213,   215,   216,   214,   209,   210,   211,   212,    31,
       0,    35,    28,    33,    34,    96,     0,     0,     0,   112,
     113,     0,   115,   116,     0,   107,     0,   110,   114,     0,
     117,   119,   118,     0,   105,     0,     0,     0,   144,     0,
     139,     0,     0,   142,   145,   172,   174,   175,     0,     0,
     151,     0,     0,   170,     0,     0,     0,   224,   225,   227,
     226,     0,    85,     0,     0,    37,    83,     0,   121,   106,
     108,   111,   123,   109,     0,   104,   199,   138,   140,   143,
     141,     0,     0,   152,     0,     0,   166,   167,     0,   168,
      36,     0,     0,     0,     0,     0,     0,   120,   124,   127,
     126,   129,     0,   101,     0,   153,     0,   155,   162,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    40,     0,    43,    50,    51,    49,     0,    52,    54,
      53,     0,    45,    48,    46,    47,     0,   122,   128,     0,
     132,   125,   130,   131,     0,   154,   228,   229,   230,   194,
     196,   192,   200,   198,     0,    67,     0,     0,    39,    41,
      44,    69,    42,    38,     0,   102,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,    66,    70,    73,    72,
      75,     0,   133,     0,   195,   197,   193,    68,     0,     0,
       0,    74,     0,    78,    71,    76,    77,   103,     0,     0,
      60,     0,    63,     0,    58,     0,     0,    65,    59,    61,
      64,    62,    57,    79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    56,    57,   157,    18,   126,
     127,   128,   129,   130,   131,    19,   245,   300,   301,   302,
     303,   304,   305,   352,   379,   380,   306,   307,   356,   357,
     358,   359,   360,   361,   147,   148,   149,    95,    96,   261,
      79,    80,    81,   158,   216,   159,    90,   204,   205,   206,
     207,   208,   209,   277,   278,   279,   280,   281,   282,   160,
      23,   100,   219,   220,   221,   161,   103,   104,   162,   229,
     230,   264,   106,   163,    58,    59,    60,    61,   173,   180,
     234,    45,   164,   165,   166,   167,   168,   312,   313,   314,
     315,   169,    37,    62,   242
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -340
static const yytype_int16 yypact[] =
{
     455,   170,    24,    35,    60,    76,    41,    52,   103,   106,
     115,   163,  -340,   123,  -340,   120,  -340,  -340,   106,  -340,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,   134,   145,   129,
     147,   148,   149,   150,    93,   128,    60,  -340,   121,   169,
     175,   138,   199,   195,   203,   176,   207,   171,  -340,  -340,
    -340,  -340,  -340,   192,   192,   227,  -340,  -340,    13,  -340,
    -340,  -340,   535,  -340,   455,    -4,  -340,  -340,  -340,  -340,
     192,   546,   192,   192,   192,   192,  -340,  -340,  -340,   168,
     172,  -340,   112,   112,   112,   112,    15,   174,   231,   225,
    -340,    90,  -340,  -340,  -340,   179,   138,  -340,   180,   230,
    -340,   533,   106,   176,  -340,   232,  -340,   192,  -340,  -340,
     186,   306,   163,  -340,    27,   192,   192,   192,   192,   192,
     192,   192,   192,  -340,   106,    28,  -340,  -340,  -340,    -4,
    -340,   106,   209,   546,   546,   546,   546,  -340,    93,  -340,
    -340,  -340,  -340,  -340,  -340,  -340,   187,   190,   191,  -340,
     482,   169,   200,  -340,  -340,  -340,   498,  -340,  -340,  -340,
    -340,  -340,  -340,  -340,   519,  -340,   252,  -340,  -340,  -340,
    -340,  -340,   228,   -13,   546,  -340,  -340,  -340,  -340,    27,
     206,    48,    48,    48,    48,    -2,    -2,  -340,  -340,  -340,
      60,  -340,  -340,  -340,  -340,  -340,   352,     8,   231,  -340,
    -340,    30,  -340,  -340,   423,  -340,   256,  -340,  -340,   169,
    -340,  -340,  -340,   264,  -340,   112,   169,   277,  -340,   439,
    -340,   267,   268,  -340,  -340,  -340,  -340,  -340,   138,   242,
    -340,   245,   192,   206,    57,   293,   239,  -340,  -340,  -340,
    -340,   235,  -340,   291,   288,  -340,  -340,    60,  -340,  -340,
    -340,  -340,   152,  -340,    98,  -340,  -340,  -340,  -340,  -340,
    -340,   106,    18,  -340,   292,    27,   546,  -340,    27,  -340,
    -340,    91,   304,   352,   247,   169,    31,  -340,  -340,  -340,
     152,  -340,   169,  -340,   112,  -340,   106,  -340,   206,   206,
     246,   253,   259,   159,   323,   325,    32,    60,   327,  -340,
     382,  -340,   318,  -340,  -340,  -340,  -340,   319,  -340,  -340,
    -340,   324,  -340,  -340,  -340,  -340,   319,  -340,  -340,    60,
    -340,  -340,  -340,  -340,   132,  -340,  -340,  -340,  -340,   278,
     282,   294,  -340,  -340,    60,  -340,   329,   314,  -340,  -340,
    -340,   164,  -340,  -340,   296,  -340,   112,   348,   359,   112,
     297,   354,  -340,    95,   319,    34,  -340,  -340,  -340,   164,
    -340,   319,  -340,   305,  -340,  -340,  -340,  -340,   396,   329,
     200,  -340,    60,  -340,  -340,  -340,  -340,  -340,   363,   284,
    -340,   371,  -340,   372,  -340,   329,   330,  -340,  -340,  -340,
    -340,  -340,  -340,  -340
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -340,  -340,  -340,  -340,   326,   -27,  -340,    10,  -340,  -340,
    -340,   265,  -340,   269,  -340,  -141,  -256,  -340,    96,  -339,
    -340,  -340,  -340,  -333,  -340,    21,  -340,  -340,  -340,  -340,
      38,  -340,    42,  -340,  -340,  -340,   210,  -340,  -340,   -35,
    -340,  -340,   271,     3,    46,     4,  -139,  -340,   208,  -336,
    -329,  -340,  -340,  -340,  -340,   131,  -340,   137,  -340,    11,
    -340,  -340,  -340,   201,  -340,     0,  -340,   331,     1,  -340,
     193,  -340,  -340,     2,  -340,   328,   383,  -340,  -340,  -174,
    -340,    -9,  -340,   279,  -132,  -148,    17,  -340,  -340,  -143,
    -340,    20,    12,    54,   173
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      24,    25,    26,    20,    21,   233,    97,    78,   223,    65,
      17,    22,   214,   224,    94,   218,    39,    27,   213,   143,
      28,    92,    93,   243,   222,   124,   125,    35,    44,   378,
     178,    35,   381,    35,    35,    35,   384,    35,    38,   382,
     378,    49,    50,   381,    49,    50,   231,   232,    87,   113,
     382,   341,   392,   121,   122,   139,   140,   141,   142,   144,
     343,   154,   244,    35,    24,    25,    26,    20,    21,    94,
     252,   223,   213,   112,    17,    22,   224,   255,   218,    40,
     286,    27,    36,    71,    28,   179,   190,   222,   247,   319,
     334,   288,   372,   170,   289,   151,    76,    77,   371,    41,
     369,   119,   120,   121,   122,   376,    43,   108,   109,   111,
      42,    78,   290,   291,   292,   189,   267,   268,    46,    49,
      50,    44,   194,    63,   132,   152,   133,   134,   135,   136,
     370,   299,    68,    48,    69,    64,   318,   191,    49,    50,
     311,    92,    93,   323,    82,    83,    84,    85,    86,    66,
     210,   211,   212,   202,   203,    49,    50,   283,   284,   299,
      67,   174,   329,   330,    49,    50,    47,    48,   311,   181,
     182,   183,   184,   185,   186,   187,   188,    51,    52,    88,
      53,   275,   276,    54,    89,    49,    50,    70,   254,    49,
      50,   345,   346,   354,   355,    68,    48,    72,    73,    74,
      75,    94,   236,    98,   210,   211,   212,   202,   203,    91,
      99,    51,    52,   248,    53,   101,   102,    54,    49,    50,
      29,    55,   105,    30,    31,    32,    33,   137,    34,   107,
      47,    48,   138,   145,   146,    94,   383,   150,   153,   155,
      51,    52,   156,    53,   172,   175,    54,   383,   196,   197,
      70,   198,   285,    49,    50,   115,   116,   324,   215,   274,
     117,   118,   119,   120,   121,   122,   331,   227,   176,   235,
     228,   251,   308,   309,   310,    51,    52,   325,    53,   253,
     256,    54,   259,   260,   262,    70,   266,     1,   320,   265,
     293,   199,   200,   217,   294,   295,   269,   388,   270,   271,
     308,   309,   310,   272,   273,   287,   317,     1,   335,   336,
     293,   326,   201,   217,   294,   295,     4,     5,   327,   363,
       6,     7,   366,     9,   328,    10,   332,    11,   333,    12,
     337,   344,   296,   340,   243,     3,   297,   298,   347,   342,
       6,     7,   348,     9,   351,    10,   350,    11,   353,    12,
     114,   364,   115,   116,   349,   362,   367,   117,   118,   119,
     120,   121,   122,   365,   377,   176,   368,   373,   210,   211,
     212,   202,   203,   237,   238,   239,   240,   241,   387,   210,
     211,   212,   202,   203,   386,     1,   390,   391,   293,   393,
     123,   217,   294,   295,   192,   338,   339,   374,   193,     1,
     389,   375,   293,   199,   200,   217,   294,   295,   246,   195,
     296,   321,   250,     3,   297,   298,   385,   322,     6,     7,
     258,     9,   263,    10,   201,    11,     1,    12,     4,     5,
     199,   200,     6,     7,   171,     9,   249,    10,   110,    11,
     177,    12,     1,   226,     0,     0,   316,     0,   217,     0,
       0,   201,   257,     0,     0,     4,     5,     0,     1,     6,
       7,     0,     9,     0,    10,     0,    11,     2,    12,     0,
       3,     4,     5,     0,     0,     6,     7,     0,     9,     0,
      10,     0,    11,     2,    12,     1,     3,     4,     5,   199,
     200,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      12,     1,     0,     0,     0,     0,     0,   217,     0,     0,
     201,     0,     0,     0,     4,     5,     0,     0,     6,     7,
       0,     9,     1,    10,     0,    11,     2,    12,     0,     3,
       4,     5,   225,     0,     6,     7,     1,     9,     0,    10,
       0,    11,     0,    12,     0,     0,     0,     2,     0,     0,
       0,     4,     5,     0,     0,     6,     7,     0,     9,     0,
      10,     2,    11,     0,    12,     4,     5,     0,     0,     6,
       7,     0,     9,     0,    10,     0,    11,     0,    12,   114,
       0,   115,   116,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   115,   116,     0,     0,     0,   117,   118,   119,
     120,   121,   122
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,     0,   179,    41,    34,   156,    18,
       0,     0,   151,   156,    41,   156,     4,     0,   150,     4,
       0,     3,     4,    15,   156,    29,    30,     3,    15,   368,
       3,     3,   368,     3,     3,     3,   369,     3,     3,   368,
     379,    26,    27,   379,    26,    27,    59,    60,    36,    58,
     379,   307,   385,    55,    56,    82,    83,    84,    85,    86,
     316,    96,    54,     3,    64,    64,    64,    64,    64,    96,
     209,   219,   204,    60,    64,    64,   219,   216,   219,     3,
      62,    64,    58,    29,    64,    58,    58,   219,    58,    58,
      58,   265,    58,   102,   268,     5,     3,     4,   354,    58,
       5,    53,    54,    55,    56,   361,     3,    53,    54,    55,
      58,   138,    21,    22,    23,   124,    59,    60,     3,    26,
      27,    15,   131,     0,    70,    35,    72,    73,    74,    75,
      35,   272,     3,     4,     5,    15,   275,   125,    26,    27,
     272,     3,     4,   282,    16,    17,    18,    19,    20,    15,
     150,   150,   150,   150,   150,    26,    27,    59,    60,   300,
      15,   107,     3,     4,    26,    27,     3,     4,   300,   115,
     116,   117,   118,   119,   120,   121,   122,    48,    49,    58,
      51,    29,    30,    54,    15,    26,    27,    58,   215,    26,
      27,    59,    60,    29,    30,     3,     4,    50,    50,    50,
      50,   228,   190,     4,   204,   204,   204,   204,   204,    34,
      15,    48,    49,   201,    51,    12,    40,    54,    26,    27,
      50,    58,    15,    53,    54,    55,    56,    59,    58,    58,
       3,     4,    60,    59,     3,   262,   368,    12,    59,    59,
      48,    49,    12,    51,    12,    59,    54,   379,    61,    59,
      58,    60,   261,    26,    27,    46,    47,   284,    58,   247,
      51,    52,    53,    54,    55,    56,   293,    15,    59,    63,
      42,    15,   272,   272,   272,    48,    49,   286,    51,    15,
       3,    54,    15,    15,    42,    58,   232,     3,   276,    44,
       6,     7,     8,     9,    10,    11,     3,    13,    59,    64,
     300,   300,   300,    12,    16,    13,    59,     3,   296,   297,
       6,    65,    28,     9,    10,    11,    32,    33,    65,   346,
      36,    37,   349,    39,    65,    41,     3,    43,     3,    45,
       3,   319,    28,    15,    15,    31,    32,    33,    60,    15,
      36,    37,    60,    39,    15,    41,   334,    43,    34,    45,
      44,     3,    46,    47,    60,    59,    59,    51,    52,    53,
      54,    55,    56,     4,    59,    59,    12,   355,   368,   368,
     368,   368,   368,    21,    22,    23,    24,    25,    15,   379,
     379,   379,   379,   379,   372,     3,    15,    15,     6,    59,
      64,     9,    10,    11,   129,    13,   300,   359,   129,     3,
     379,   359,     6,     7,     8,     9,    10,    11,   198,   138,
      28,   280,   204,    31,    32,    33,   370,   280,    36,    37,
     219,    39,   229,    41,    28,    43,     3,    45,    32,    33,
       7,     8,    36,    37,   103,    39,    13,    41,    55,    43,
     112,    45,     3,   164,    -1,    -1,   273,    -1,     9,    -1,
      -1,    28,    13,    -1,    -1,    32,    33,    -1,     3,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    28,    45,    -1,
      31,    32,    33,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    28,    45,     3,    31,    32,    33,     7,
       8,    36,    37,    38,    39,    -1,    41,    -1,    43,    -1,
      45,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,
      -1,    39,     3,    41,    -1,    43,    28,    45,    -1,    31,
      32,    33,    13,    -1,    36,    37,     3,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    28,    43,    -1,    45,    32,    33,    -1,    -1,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,    44,
      -1,    46,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    46,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    31,    32,    33,    36,    37,    38,    39,
      41,    43,    45,    67,    68,    69,    70,    73,    74,    81,
     109,   111,   125,   126,   131,   134,   139,   152,   157,    50,
      53,    54,    55,    56,    58,     3,    58,   158,     3,   158,
       3,    58,    58,     3,    15,   147,     3,     3,     4,    26,
      27,    48,    49,    51,    54,    58,    71,    72,   140,   141,
     142,   143,   159,     0,    15,   147,    15,    15,     3,     5,
      58,   159,    50,    50,    50,    50,     3,     4,    71,   106,
     107,   108,    16,    17,    18,    19,    20,   158,    58,    15,
     112,    34,     3,     4,    71,   103,   104,   105,     4,    15,
     127,    12,    40,   132,   133,    15,   138,    58,   159,   159,
     142,   159,    60,   147,    44,    46,    47,    51,    52,    53,
      54,    55,    56,    70,    29,    30,    75,    76,    77,    78,
      79,    80,   159,   159,   159,   159,   159,    59,    60,    71,
      71,    71,    71,     4,    71,    59,     3,   100,   101,   102,
      12,     5,    35,    59,   105,    59,    12,    73,   109,   111,
     125,   131,   134,   139,   148,   149,   150,   151,   152,   157,
     147,   133,    12,   144,   159,    59,    59,   141,     3,    58,
     145,   159,   159,   159,   159,   159,   159,   159,   159,   147,
      58,   158,    77,    79,   147,   108,    61,    59,    60,     7,
       8,    28,   109,   111,   113,   114,   115,   116,   117,   118,
     131,   134,   139,   150,   112,    58,   110,     9,    81,   128,
     129,   130,   150,   151,   155,    13,   149,    15,    42,   135,
     136,    59,    60,   145,   146,    63,   158,    21,    22,    23,
      24,    25,   160,    15,    54,    82,   102,    58,   158,    13,
     114,    15,   112,    15,    71,   112,     3,    13,   129,    15,
      15,   105,    42,   136,   137,    44,   159,    59,    60,     3,
      59,    64,    12,    16,   158,    29,    30,   119,   120,   121,
     122,   123,   124,    59,    60,   147,    62,    13,   145,   145,
      21,    22,    23,     6,    10,    11,    28,    32,    33,    81,
      83,    84,    85,    86,    87,    88,    92,    93,   131,   134,
     139,   150,   153,   154,   155,   156,   160,    59,   112,    58,
     158,   121,   123,   112,    71,   147,    65,    65,    65,     3,
       4,    71,     3,     3,    58,   158,   158,     3,    13,    84,
      15,    82,    15,    82,   158,    59,    60,    60,    60,    60,
     158,    15,    89,    34,    29,    30,    94,    95,    96,    97,
      98,    99,    59,    71,     3,     4,    71,    59,    12,     5,
      35,    82,    58,   158,    96,    98,    82,    59,    85,    90,
      91,   115,   116,   150,    89,   110,   158,    15,    13,    91,
      15,    15,    89,    59
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
#line 63 "parser.y"
    {
                // Assign the root of the AST
                root = (yyval.astNode);
                YYACCEPT;
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    { (yyval.astNode)=NULL; ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {
                (yyval.astNode)=(yyvsp[(1) - (1)].astNode);
        ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { (yyval.astNode)=new StatementsNode("root"); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode) = (yyvsp[(1) - (3)].astNode); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { 
                                std::string nname = "int" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
                        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { 
                                std::string nname = "float" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[(1) - (1)].astNode) = new BoolNode();
                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                (yyvsp[(1) - (1)].astNode)->label = "True";
                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
                        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[(1) - (1)].astNode) = new BoolNode();
                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                (yyvsp[(1) - (1)].astNode)->label = "False";
                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
                        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                if ((yyvsp[(3) - (3)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode)); 
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode)); 
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {
        //printf("Function successfully parsed:\n"); 
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[(2) - (6)].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value);
                if ((yyvsp[(4) - (6)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(4) - (6)].astNode));
                (yyval.astNode)->add((yyvsp[(6) - (6)].astNode));
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {
            //printf("Generic Function successfully parsed:\n");
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[(2) - (9)].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value + "_Generic");
                if ((yyvsp[(4) - (9)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(4) - (9)].astNode));
                (yyval.astNode)->add((yyvsp[(9) - (9)].astNode));
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { 
                                        std::string nname = "stmt" + std::to_string(n_nodes);
                                        ++n_nodes;
                                        (yyval.astNode) = new StatementsNode(nname); 
                                        (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
                                ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { 
                (yyval.astNode) = (yyvsp[(1) - (2)].astNode);         
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { 
                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);        
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { 
                (yyval.astNode) = (yyvsp[(1) - (2)].astNode);            
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(4) - (6)].astNode) = new FunctionCallNode(nname);
                (yyvsp[(4) - (6)].astNode)->add((yyvsp[(5) - (6)].astNode));
                (yyval.astNode) = new ForStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[(4) - (6)].astNode));
                (yyval.astNode)->add((yyvsp[(6) - (6)].astNode));
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { 
            //printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                if ((yyvsp[(3) - (3)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
            ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode)); 
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode)); 
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    { 
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 419 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode) = (yyvsp[(1) - (3)].astNode); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 425 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (1)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (3)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (1)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (1)].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[(1) - (1)].astNode); 
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 480 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 485 "parser.y"
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 491 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode) = (yyvsp[(1) - (3)].astNode); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 497 "parser.y"
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (1)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 504 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (1)].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[(1) - (1)].astNode); 
        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 518 "parser.y"
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 532 "parser.y"
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode)); 
        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[(2) - (5)].astNode)); 
                (yyval.astNode)->add((yyvsp[(4) - (5)].astNode)); 
        ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 547 "parser.y"
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[(2) - (7)].astNode)); 
                (yyval.astNode)->add((yyvsp[(4) - (7)].astNode)); 
                (yyval.astNode)->add((yyvsp[(6) - (7)].astNode)); 
        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 558 "parser.y"
    { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(4) - (6)].astNode) = new FunctionCallNode(nname);
                (yyvsp[(4) - (6)].astNode)->add((yyvsp[(5) - (6)].astNode));
                (yyval.astNode) = new ForStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[(4) - (6)].astNode));
                (yyval.astNode)->add((yyvsp[(6) - (6)].astNode));
        ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 572 "parser.y"
    { 
            printf("for statement successfully parsed:\n"); 
        ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 578 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 582 "parser.y"
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode));
        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 589 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 593 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 594 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 595 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 599 "parser.y"
    {
                std::string nname = "break" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BreakStatementNode(); 
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 606 "parser.y"
    {
                std::string nname = "continue" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ContinueStatementNode(); 
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 615 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 616 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 617 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 618 "parser.y"
    {  (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 619 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 620 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 625 "parser.y"
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                if ((yyvsp[(3) - (3)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
            ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 639 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 640 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 644 "parser.y"
    { (yyval.astNode) = NULL; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 645 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 649 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode)); 
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode)); 
        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 657 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 658 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 662 "parser.y"
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 671 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 678 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 682 "parser.y"
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(1) - (2)].astNode));
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
        ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 692 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (2)].astNode); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 693 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 702 "parser.y"
    {
                std::string name = "_func_call" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[(1) - (4)].astNode));
                (yyval.astNode) = new FunctionCallNode(idFunc->value + name);
                if ((yyvsp[(3) - (4)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(3) - (4)].astNode));
            ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 711 "parser.y"
    {
                std::string name = "print" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                if ((yyvsp[(3) - (4)].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[(3) - (4)].astNode));
            ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 719 "parser.y"
    {
                std::string name = "input" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(3) - (4)].astNode)->name=nname;
                (yyval.astNode)->add((yyvsp[(3) - (4)].astNode));
            ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 734 "parser.y"
    { 
        //printf("class statement successfully parsed:\n");
        std::string name = "class" + std::to_string(n_nodes);
        ++n_nodes;
        IdentifierNode* idclass = dynamic_cast<IdentifierNode*>((yyvsp[(2) - (3)].astNode));
        (yyval.astNode) = new ClassNode(idclass->value);
        (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
    ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 745 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 749 "parser.y"
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
        ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 755 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 759 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 760 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 761 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 762 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 766 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 772 "parser.y"
    { 
                //printf("try_except statement successfully parsed:\n");
                std::string name = "try" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new TryStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
            ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 784 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Except..."; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
            ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 791 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 795 "parser.y"
    {
                std::string nname = "except" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ExceptStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[(2) - (2)].astNode));
            ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 808 "parser.y"
    { 
            //printf("match statement successfully parsed:\n");
            std::string name = "match" + std::to_string(n_nodes);
            ++n_nodes;
            std::string nname = "iden" + std::to_string(n_nodes);
            ++n_nodes;
            (yyvsp[(2) - (3)].astNode)->name=nname;
            (yyval.astNode) = new matchStatementNode();
            (yyval.astNode)->name = name;
            (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
            (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 824 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Case..."; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
            ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 831 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 835 "parser.y"
    {
                std::string nname = "case" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new CaseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
            ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 845 "parser.y"
    {
            std::string nname = "case" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new CaseStatementNode(nname);
            (yyval.astNode)->label = "Default Statement";
            (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 855 "parser.y"
    {
            std::string nname = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            (yyval.astNode)=new BlockNode(nname);
            (yyval.astNode)->label = "Match Block"; 
            (yyval.astNode)->add((yyvsp[(3) - (5)].astNode));
            (yyval.astNode)->add((yyvsp[(4) - (5)].astNode));
        ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 871 "parser.y"
    { 
                    //printf("with statement successfully parsed:\n");
                    std::string nname = "with" + std::to_string(n_nodes);
                    n_nodes;  
                    (yyval.astNode) = new withStatementNode();
                    (yyval.astNode)->name = nname;
                    (yyval.astNode)->add((yyvsp[(2) - (3)].astNode));
                    (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
                ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 883 "parser.y"
    {
                    (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode));
                    (yyval.astNode)=(yyvsp[(1) - (3)].astNode);  
                ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 887 "parser.y"
    {
                        std::string nname = "block" + std::to_string(n_nodes);
                        ++n_nodes; 
                        (yyval.astNode)=new BlockNode(nname);
                        (yyval.astNode)->label = "With Head"; 
                        (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
                ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 897 "parser.y"
    { (yyval.astNode)=(yyvsp[(1) - (1)].astNode); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 898 "parser.y"
    { (yyval.astNode)=(yyvsp[(2) - (3)].astNode); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 903 "parser.y"
    { (yyval.astNode)=(yyvsp[(1) - (1)].astNode); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 908 "parser.y"
    {
            std::string nname = "iden" + std::to_string(n_nodes);
            n_nodes;
            (yyvsp[(1) - (6)].astNode)->name = nname;
            std::string name = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            (yyval.astNode)=new BlockNode(name);
            (yyval.astNode)->label = "With Item"; 
            (yyval.astNode)->add((yyvsp[(1) - (6)].astNode));
            (yyval.astNode)->add((yyvsp[(3) - (6)].astNode));
            (yyval.astNode)->add((yyvsp[(6) - (6)].astNode));
        ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 920 "parser.y"
    { (yyval.astNode)=(yyvsp[(1) - (1)].astNode); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 921 "parser.y"
    {
            (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode));
            (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 929 "parser.y"
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Parameters"; 
                (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
            ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 936 "parser.y"
    {
                (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode));
                (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
            ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 943 "parser.y"
    { (yyval.astNode)=(yyvsp[(2) - (3)].astNode); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 944 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode)=(yyvsp[(1) - (3)].astNode); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 945 "parser.y"
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[(1) - (1)].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 954 "parser.y"
    {
        std::string nname = "block" + std::to_string(n_nodes);
        ++n_nodes; 
        (yyval.astNode)=new BlockNode(nname);
        (yyval.astNode)->label = "Targets"; 
        (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 961 "parser.y"
    { (yyvsp[(1) - (3)].astNode)->add((yyvsp[(3) - (3)].astNode)); (yyval.astNode)=(yyvsp[(1) - (3)].astNode); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 967 "parser.y"
    { (yyval.astNode) = (yyvsp[(3) - (4)].astNode); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 971 "parser.y"
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[(1) - (1)].astNode)); 
    ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 977 "parser.y"
    { (yyvsp[(1) - (2)].astNode)->add((yyvsp[(2) - (2)].astNode)); (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 981 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (2)].astNode); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 982 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 987 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 988 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 995 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 999 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1000 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1001 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1003 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1004 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1005 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1009 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1020 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (4)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1031 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (4)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1042 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (4)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1053 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (4)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
        ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1064 "parser.y"
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[(1) - (3)].astNode));
                (yyval.astNode)->add((yyvsp[(3) - (3)].astNode));
        ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1077 "parser.y"
    {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1084 "parser.y"
    {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1092 "parser.y"
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (2)].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1102 "parser.y"
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (4)].astNode)->name=name;
                (yyvsp[(4) - (4)].astNode)->name=nnname;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1116 "parser.y"
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (2)].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1126 "parser.y"
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (4)].astNode)->name=name;
                (yyvsp[(4) - (4)].astNode)->name=nnname;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[(2) - (4)].astNode));
                (yyval.astNode)->add((yyvsp[(4) - (4)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1142 "parser.y"
    {
                std::string nname = "yield" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (2)].astNode)->name=name;
                (yyval.astNode) = new yieldStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1154 "parser.y"
    {
                std::string nname = "global" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (2)].astNode)->name=name;
                (yyval.astNode) = new globalStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1166 "parser.y"
    {
                std::string nname = "nonlocal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(2) - (2)].astNode)->name=name;
                (yyval.astNode) = new nonLocalStatementNode((yyvsp[(2) - (2)].astNode));
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1178 "parser.y"
    {
                std::string nname = "pass" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new PassStatementNode();
                (yyval.astNode)->name = nname;
        ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1187 "parser.y"
    {
                std::string nname = "gt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1197 "parser.y"
    {
                std::string nname = "lt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1207 "parser.y"
    {
                std::string nname = "gte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">=", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1217 "parser.y"
    {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<=", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1227 "parser.y"
    {
                std::string nname = "equal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("==", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1237 "parser.y"
    {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(3) - (3)].astNode)->name=name;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (3)].astNode)->name=nnname;
                (yyval.astNode) = new BinaryExpressionNode("==", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1249 "parser.y"
    { 
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[(1) - (1)].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
            ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1258 "parser.y"
    {
                std::string nname = "add" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new AdditionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1265 "parser.y"
    {
                std::string nname = "sub" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new SubtractionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1272 "parser.y"
    {
                std::string nname = "multi" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new MultiplicationExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1279 "parser.y"
    {
                std::string nname = "divide" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new DivisionExpressionNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1286 "parser.y"
    {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("AND", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1293 "parser.y"
    {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("AND", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1300 "parser.y"
    {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("OR", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1307 "parser.y"
    {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("OR", (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
                (yyval.astNode)->name=nname;
        ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1314 "parser.y"
    { ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1315 "parser.y"
    { (yyval.astNode) = (yyvsp[(2) - (3)].astNode); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1316 "parser.y"
    { ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1318 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1320 "parser.y"
    { (yyval.astNode) = (yyvsp[(1) - (1)].astNode); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1322 "parser.y"
    {
                                                std::string nname = "string" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode); 
                                        ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1329 "parser.y"
    { 
                                                std::string nname = "iden" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[(1) - (1)].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
                                        ;}
    break;



/* Line 1455 of yacc.c  */
#line 4066 "parser.tab.c"
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
#line 1349 "parser.y"




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
