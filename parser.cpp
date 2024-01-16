/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
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
#line 1 "parser.y" /* yacc.c:355  */

        #include "astNodes.hpp"
        #include <iostream>
        #include <string>

#line 103 "parser.cpp" /* yacc.c:355  */

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
#line 7 "parser.y" /* yacc.c:355  */

        char *strval;
        int intval;
        float flval;
        AstNode* astNode;

#line 173 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 14 "parser.y" /* yacc.c:358  */

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

#line 203 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
     898,   903,   908,   929,   936,   943,   944,   945,   954,   961,
     967,   971,   977,   981,   982,   987,   988,   995,   999,  1000,
    1001,  1003,  1004,  1005,  1009,  1020,  1031,  1042,  1053,  1064,
    1077,  1084,  1092,  1102,  1116,  1126,  1142,  1154,  1166,  1178,
    1187,  1197,  1207,  1217,  1227,  1237,  1249,  1258,  1265,  1272,
    1279,  1286,  1293,  1300,  1307,  1314,  1315,  1316,  1318,  1320,
    1322,  1329,  1338,  1339,  1340,  1341,  1342,  1343,  1344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "nonlocal_stmt", "pass", "relation_stmt", "expression", "data_type", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -336

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-336)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     130,   183,    20,    10,    16,    37,   -30,    -5,   107,   105,
     122,    28,  -336,   145,  -336,   137,  -336,  -336,   105,  -336,
    -336,  -336,  -336,  -336,  -336,  -336,  -336,   142,   150,    78,
     124,   136,   139,   144,   152,   238,    16,  -336,   114,   165,
     162,   178,   202,   196,   200,   180,   209,   164,   223,    94,
    -336,  -336,  -336,  -336,   130,    93,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,  -336,    86,    86,    86,  -336,  -336,
     485,    86,    86,    86,    86,  -336,  -336,  -336,   181,   185,
    -336,    91,    91,    91,    91,     8,   190,   256,   263,  -336,
       6,  -336,  -336,  -336,   224,   178,  -336,   226,   274,  -336,
     484,   105,   180,  -336,   275,  -336,    86,   229,    28,  -336,
    -336,   105,    29,  -336,  -336,  -336,    93,  -336,   105,  -336,
    -336,   280,    86,    86,    86,    86,    86,    86,    86,    86,
     485,   485,   485,   485,  -336,   152,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,   231,   234,   235,  -336,   431,   165,   236,
    -336,  -336,  -336,   452,  -336,  -336,  -336,  -336,  -336,  -336,
    -336,   466,  -336,   281,  -336,  -336,  -336,  -336,  -336,   258,
      79,   485,  -336,  -336,  -336,    16,  -336,  -336,  -336,  -336,
    -336,   217,   217,   217,   217,   121,   121,  -336,  -336,  -336,
     244,    88,   256,  -336,  -336,    30,  -336,  -336,   392,  -336,
     286,  -336,  -336,   165,  -336,  -336,  -336,   287,  -336,    91,
     165,   302,  -336,   413,  -336,   291,   294,  -336,  -336,  -336,
    -336,  -336,   178,   269,  -336,   273,    86,   254,  -336,  -336,
    -336,  -336,   260,  -336,   316,   313,  -336,  -336,    16,  -336,
    -336,  -336,  -336,   154,  -336,   157,  -336,  -336,  -336,  -336,
    -336,  -336,   105,    23,  -336,   317,    44,   485,  -336,   207,
     312,   244,   278,   165,    48,  -336,  -336,  -336,   154,  -336,
     165,  -336,    91,  -336,   105,  -336,  -336,    44,   279,   276,
     282,   285,   205,   343,   349,    49,    16,   351,  -336,   182,
    -336,   341,  -336,  -336,  -336,  -336,   344,  -336,  -336,  -336,
     345,  -336,  -336,  -336,  -336,   344,  -336,  -336,    16,  -336,
    -336,  -336,  -336,   184,  -336,   279,   188,   355,  -336,  -336,
    -336,   301,   303,   309,  -336,  -336,    16,  -336,   356,   336,
    -336,  -336,  -336,   222,  -336,  -336,   314,  -336,    91,  -336,
      44,  -336,   369,   370,    91,   323,   371,  -336,   106,   344,
      57,  -336,  -336,  -336,   222,  -336,   344,  -336,   331,   279,
    -336,  -336,  -336,  -336,   378,   356,   236,  -336,    16,  -336,
    -336,  -336,  -336,  -336,   376,   271,  -336,   377,  -336,   379,
    -336,   356,   334,  -336,  -336,  -336,  -336,  -336,  -336,  -336
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   199,     0,     2,     4,     5,     8,     0,    11,
       9,    10,    12,    14,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,    93,   206,     0,    24,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   159,   161,     1,     7,    26,    13,    18,   221,   220,
     189,    19,    20,    21,    22,     0,     0,     0,   218,   219,
     184,     0,     0,     0,     0,    97,    99,    98,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    80,     0,   100,
       0,    90,    92,    91,     0,    87,    88,     0,     0,   137,
       0,     0,   146,   147,     0,   150,     0,     0,     0,   156,
       6,     0,     0,    23,    27,    30,    29,    32,     0,   215,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,   187,   188,   134,     0,   200,   201,   202,   203,
     205,   204,    25,    84,     0,    81,    82,     0,     0,     0,
     135,    89,   136,     0,   178,   179,   180,   177,   181,   183,
     182,     0,   171,     0,   174,   175,   176,   149,   148,     0,
       0,   163,   160,   157,    31,     0,    35,    28,    33,    34,
     216,   211,   213,   214,   212,   207,   208,   209,   210,    96,
       0,     0,     0,   112,   113,     0,   115,   116,     0,   107,
       0,   110,   114,     0,   117,   119,   118,     0,   105,     0,
       0,     0,   144,     0,   139,     0,     0,   142,   145,   170,
     172,   173,     0,     0,   151,     0,     0,     0,   222,   223,
     225,   224,     0,    85,     0,     0,    37,    83,     0,   121,
     106,   108,   111,   123,   109,     0,   104,   197,   138,   140,
     143,   141,     0,     0,   152,     0,     0,   164,    36,     0,
       0,     0,     0,     0,     0,   120,   124,   127,   126,   129,
       0,   101,     0,   153,     0,   155,   167,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      40,     0,    43,    50,    51,    49,     0,    52,    54,    53,
       0,    45,    48,    46,    47,     0,   122,   128,     0,   132,
     125,   130,   131,     0,   154,   168,     0,     0,   226,   227,
     228,   192,   194,   190,   198,   196,     0,    67,     0,     0,
      39,    41,    44,    69,    42,    38,     0,   102,     0,   165,
       0,   166,     0,     0,     0,     0,     0,    56,     0,     0,
       0,    66,    70,    73,    72,    75,     0,   133,     0,   169,
     193,   195,   191,    68,     0,     0,     0,    74,     0,    78,
      71,    76,    77,   103,     0,     0,    60,     0,    63,     0,
      58,     0,     0,    65,    59,    61,    64,    62,    57,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -336,  -336,  -336,  -336,   342,   -19,  -336,     5,  -336,  -336,
    -336,   288,  -336,   292,  -336,  -146,  -276,  -336,   108,  -245,
    -336,  -336,  -336,  -335,  -336,    26,  -336,  -336,  -336,  -336,
      53,  -336,    55,  -336,  -336,  -336,   206,  -336,  -336,   -24,
    -336,  -336,   267,     3,    46,     4,  -142,  -336,   215,  -211,
    -205,  -336,  -336,  -336,  -336,   135,  -336,   159,  -336,    21,
    -336,  -336,  -336,   219,  -336,     0,  -336,   328,     1,  -336,
     195,  -336,  -336,     2,  -336,   332,   388,  -336,  -336,  -268,
    -336,   -10,  -336,   290,  -129,  -143,    25,  -336,  -336,  -139,
    -336,    92,    12,   -29,   186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    68,    69,   154,    18,   113,
     114,   115,   116,   117,   118,    19,   236,   289,   290,   291,
     292,   293,   294,   347,   375,   376,   295,   296,   351,   352,
     353,   354,   355,   356,   144,   145,   146,    94,    95,   252,
      78,    79,    80,   155,   210,   156,    89,   198,   199,   200,
     201,   202,   203,   265,   266,   267,   268,   269,   270,   157,
      23,    99,   213,   214,   215,   158,   102,   103,   159,   223,
     224,   255,   105,   160,    49,    50,    51,    52,   170,   278,
     316,    45,   161,   162,   163,   164,   165,   301,   302,   303,
     304,   166,    37,    70,   233
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      24,    25,    26,    20,    21,    17,   208,   212,    55,   315,
     217,   148,   140,    38,   218,    77,    39,    96,   207,    35,
     333,    22,    93,    35,   216,    27,    91,    92,    41,   335,
     380,    47,    35,    35,    61,    62,   119,   120,   121,   109,
      40,   149,   130,   131,   132,   133,   388,   276,    86,    61,
      62,    35,    35,    42,    24,    25,    26,    20,    21,    17,
      35,   243,   136,   137,   138,   139,   141,   212,   246,   207,
     217,   151,   359,   367,   218,    22,    93,   171,    36,    27,
     372,    58,    59,    60,   216,   274,    48,   175,   238,    58,
      59,   167,    28,   181,   182,   183,   184,   185,   186,   187,
     188,   174,   277,   234,    61,    62,   308,   326,   179,    44,
      43,   365,    61,    62,   288,   368,    77,    61,    62,   374,
      44,   307,   111,   112,   176,    46,    63,    64,   312,    65,
     374,   300,    66,     1,    63,    64,    67,    65,   225,   226,
      66,   366,   235,   288,    67,    53,    28,   204,   205,   206,
     196,   197,    54,   377,   108,    75,    76,    56,     2,   378,
     300,     3,     4,     5,   377,    57,     6,     7,     8,     9,
     378,    10,    87,    11,    71,    12,   128,   129,    61,    62,
      88,    91,    92,   263,   264,     1,    72,   227,   282,    73,
     245,   211,   283,   284,    74,   330,    90,   257,   204,   205,
     206,   196,   197,    93,    61,    62,    97,   239,   321,   322,
     285,    98,   100,     3,   286,   287,   271,   272,     6,     7,
     101,     9,   106,    10,   104,    11,    47,    12,   279,   280,
     281,    61,    62,    29,    93,   379,    30,    31,    32,    33,
     134,    34,   273,   337,   338,   135,   379,   339,   340,   142,
     262,   349,   350,   313,    81,    82,    83,    84,    85,   143,
     297,   298,   299,   323,   314,   228,   229,   230,   231,   232,
     126,   127,   128,   129,     1,   147,   309,   282,   193,   194,
     211,   283,   284,   150,   384,   152,   153,   169,   172,   297,
     298,   299,   190,   191,   209,   192,   221,   327,   328,   195,
     222,   242,   244,     4,     5,   247,   250,     6,     7,   251,
       9,   253,    10,   258,    11,     1,    12,   256,   282,   358,
     336,   211,   283,   284,   259,   362,   122,   123,   260,   261,
     275,   124,   125,   126,   127,   128,   129,   306,   345,   180,
     285,   318,   317,     3,   286,   287,   324,   319,     6,     7,
     320,     9,   325,    10,   329,    11,   332,    12,   341,   234,
     334,   342,   369,   343,   204,   205,   206,   196,   197,   344,
     348,   346,   360,   357,   361,   204,   205,   206,   196,   197,
     382,     1,   363,   364,   282,   193,   194,   211,   283,   284,
     373,   383,   386,   389,   387,     1,   110,   331,   237,   193,
     194,   385,   189,   310,   177,   240,   195,   370,   178,   371,
       4,     5,   381,   241,     6,     7,     1,     9,   254,    10,
     195,    11,   211,    12,     4,     5,   248,   311,     6,     7,
     168,     9,   249,    10,     1,    11,   107,    12,   193,   194,
     173,     2,     0,     0,     3,     4,     5,   305,     0,     6,
       7,   220,     9,     0,    10,     1,    11,     0,    12,   195,
       0,   211,     0,     4,     5,     0,     0,     6,     7,     1,
       9,     0,    10,     0,    11,     0,    12,     0,     0,   219,
       2,     0,     0,     3,     4,     5,     0,     1,     6,     7,
       0,     9,     0,    10,     2,    11,     0,    12,     4,     5,
       0,     0,     6,     7,     0,     9,     0,    10,     0,    11,
       0,    12,     2,     0,     0,     0,     4,     5,     0,     0,
       6,     7,     0,     9,     0,    10,     0,    11,     0,    12,
       0,   122,   123,     0,     0,     0,   124,   125,   126,   127,
     128,   129
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,     0,     0,   148,   153,    18,   277,
     153,     5,     4,     3,   153,    34,     4,    41,   147,     3,
     296,     0,    41,     3,   153,     0,     3,     4,    58,   305,
     365,     3,     3,     3,    26,    27,    65,    66,    67,    49,
       3,    35,    71,    72,    73,    74,   381,     3,    36,    26,
      27,     3,     3,    58,    54,    54,    54,    54,    54,    54,
       3,   203,    81,    82,    83,    84,    85,   213,   210,   198,
     213,    95,   340,   349,   213,    54,    95,   106,    58,    54,
     356,     3,     4,     5,   213,    62,    58,    58,    58,     3,
       4,   101,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   111,    58,    15,    26,    27,    58,    58,   118,    15,
       3,     5,    26,    27,   260,    58,   135,    26,    27,   364,
      15,   263,    29,    30,   112,     3,    48,    49,   270,    51,
     375,   260,    54,     3,    48,    49,    58,    51,    59,    60,
      54,    35,    54,   289,    58,     0,    54,   147,   147,   147,
     147,   147,    15,   364,    60,     3,     4,    15,    28,   364,
     289,    31,    32,    33,   375,    15,    36,    37,    38,    39,
     375,    41,    58,    43,    50,    45,    55,    56,    26,    27,
      15,     3,     4,    29,    30,     3,    50,   175,     6,    50,
     209,     9,    10,    11,    50,    13,    34,   226,   198,   198,
     198,   198,   198,   222,    26,    27,     4,   195,     3,     4,
      28,    15,    12,    31,    32,    33,    59,    60,    36,    37,
      40,    39,    58,    41,    15,    43,     3,    45,    21,    22,
      23,    26,    27,    50,   253,   364,    53,    54,    55,    56,
      59,    58,   252,    59,    60,    60,   375,    59,    60,    59,
     238,    29,    30,   272,    16,    17,    18,    19,    20,     3,
     260,   260,   260,   282,   274,    21,    22,    23,    24,    25,
      53,    54,    55,    56,     3,    12,   264,     6,     7,     8,
       9,    10,    11,    59,    13,    59,    12,    12,    59,   289,
     289,   289,    61,    59,    58,    60,    15,   285,   286,    28,
      42,    15,    15,    32,    33,     3,    15,    36,    37,    15,
      39,    42,    41,    59,    43,     3,    45,    44,     6,   338,
     308,     9,    10,    11,    64,   344,    46,    47,    12,    16,
      13,    51,    52,    53,    54,    55,    56,    59,   326,    59,
      28,    65,    63,    31,    32,    33,     3,    65,    36,    37,
      65,    39,     3,    41,     3,    43,    15,    45,     3,    15,
      15,    60,   350,    60,   364,   364,   364,   364,   364,    60,
      34,    15,     3,    59,     4,   375,   375,   375,   375,   375,
     368,     3,    59,    12,     6,     7,     8,     9,    10,    11,
      59,    15,    15,    59,    15,     3,    54,   289,   192,     7,
       8,   375,   135,   268,   116,    13,    28,   354,   116,   354,
      32,    33,   366,   198,    36,    37,     3,    39,   223,    41,
      28,    43,     9,    45,    32,    33,    13,   268,    36,    37,
     102,    39,   213,    41,     3,    43,    48,    45,     7,     8,
     108,    28,    -1,    -1,    31,    32,    33,   261,    -1,    36,
      37,   161,    39,    -1,    41,     3,    43,    -1,    45,    28,
      -1,     9,    -1,    32,    33,    -1,    -1,    36,    37,     3,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    -1,    13,
      28,    -1,    -1,    31,    32,    33,    -1,     3,    36,    37,
      -1,    39,    -1,    41,    28,    43,    -1,    45,    32,    33,
      -1,    -1,    36,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    46,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    31,    32,    33,    36,    37,    38,    39,
      41,    43,    45,    67,    68,    69,    70,    73,    74,    81,
     109,   111,   125,   126,   131,   134,   139,   152,   157,    50,
      53,    54,    55,    56,    58,     3,    58,   158,     3,   158,
       3,    58,    58,     3,    15,   147,     3,     3,    58,   140,
     141,   142,   143,     0,    15,   147,    15,    15,     3,     4,
       5,    26,    27,    48,    49,    51,    54,    58,    71,    72,
     159,    50,    50,    50,    50,     3,     4,    71,   106,   107,
     108,    16,    17,    18,    19,    20,   158,    58,    15,   112,
      34,     3,     4,    71,   103,   104,   105,     4,    15,   127,
      12,    40,   132,   133,    15,   138,    58,   142,    60,   147,
      70,    29,    30,    75,    76,    77,    78,    79,    80,   159,
     159,   159,    46,    47,    51,    52,    53,    54,    55,    56,
     159,   159,   159,   159,    59,    60,    71,    71,    71,    71,
       4,    71,    59,     3,   100,   101,   102,    12,     5,    35,
      59,   105,    59,    12,    73,   109,   111,   125,   131,   134,
     139,   148,   149,   150,   151,   152,   157,   147,   133,    12,
     144,   159,    59,   141,   147,    58,   158,    77,    79,   147,
      59,   159,   159,   159,   159,   159,   159,   159,   159,   108,
      61,    59,    60,     7,     8,    28,   109,   111,   113,   114,
     115,   116,   117,   118,   131,   134,   139,   150,   112,    58,
     110,     9,    81,   128,   129,   130,   150,   151,   155,    13,
     149,    15,    42,   135,   136,    59,    60,   158,    21,    22,
      23,    24,    25,   160,    15,    54,    82,   102,    58,   158,
      13,   114,    15,   112,    15,    71,   112,     3,    13,   129,
      15,    15,   105,    42,   136,   137,    44,   159,    59,    64,
      12,    16,   158,    29,    30,   119,   120,   121,   122,   123,
     124,    59,    60,   147,    62,    13,     3,    58,   145,    21,
      22,    23,     6,    10,    11,    28,    32,    33,    81,    83,
      84,    85,    86,    87,    88,    92,    93,   131,   134,   139,
     150,   153,   154,   155,   156,   160,    59,   112,    58,   158,
     121,   123,   112,    71,   147,   145,   146,    63,    65,    65,
      65,     3,     4,    71,     3,     3,    58,   158,   158,     3,
      13,    84,    15,    82,    15,    82,   158,    59,    60,    59,
      60,     3,    60,    60,    60,   158,    15,    89,    34,    29,
      30,    94,    95,    96,    97,    98,    99,    59,    71,   145,
       3,     4,    71,    59,    12,     5,    35,    82,    58,   158,
      96,    98,    82,    59,    85,    90,    91,   115,   116,   150,
      89,   110,   158,    15,    13,    91,    15,    15,    89,    59
};

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
     141,   142,   143,   144,   144,   145,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   155,   156,   157,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       3,     1,     6,     1,     3,     3,     3,     1,     1,     3,
       4,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     3,
       2,     4,     2,     4,     2,     4,     2,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 63 "parser.y" /* yacc.c:1646  */
    {
                // Assign the root of the AST
                root = (yyval.astNode);
                YYACCEPT;
        }
#line 1597 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 71 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=NULL; }
#line 1603 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "parser.y" /* yacc.c:1646  */
    {
                (yyval.astNode)=(yyvsp[0].astNode);
        }
#line 1611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=new StatementsNode("root"); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 1623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "parser.y" /* yacc.c:1646  */
    { }
#line 1629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1635 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1641 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1659 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1671 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1695 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "parser.y" /* yacc.c:1646  */
    { 
                                std::string nname = "int" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "parser.y" /* yacc.c:1646  */
    { 
                                std::string nname = "float" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1717 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "parser.y" /* yacc.c:1646  */
    {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode) = new BoolNode();
                                (yyvsp[0].astNode)->name=nname;
                                (yyvsp[0].astNode)->label = "True";
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1730 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 122 "parser.y" /* yacc.c:1646  */
    {
                                std::string nname = "bool" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode) = new BoolNode();
                                (yyvsp[0].astNode)->name=nname;
                                (yyvsp[0].astNode)->label = "False";
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                if ((yyvsp[0].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 1777 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 159 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 1796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1802 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 172 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1819 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 181 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1837 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 192 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1861 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 210 "parser.y" /* yacc.c:1646  */
    {
        //printf("Function successfully parsed:\n"); 
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-4].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value);
                if ((yyvsp[-2].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1876 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 220 "parser.y" /* yacc.c:1646  */
    {
            //printf("Generic Function successfully parsed:\n");
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-7].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value + "_Generic");
                if ((yyvsp[-5].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1891 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1897 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 237 "parser.y" /* yacc.c:1646  */
    { 
                                        std::string nname = "stmt" + std::to_string(n_nodes);
                                        ++n_nodes;
                                        (yyval.astNode) = new StatementsNode(nname); 
                                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                                }
#line 1908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 248 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[-1].astNode);         
            }
#line 1922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 252 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[0].astNode);        
            }
#line 1930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 256 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[-1].astNode);            
            }
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1992 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 280 "parser.y" /* yacc.c:1646  */
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 292 "parser.y" /* yacc.c:1646  */
    { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode) = new FunctionCallNode(nname);
                (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = new ForStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 305 "parser.y" /* yacc.c:1646  */
    { 
            //printf("for statement successfully parsed:\n"); 
        }
#line 2044 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 315 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2061 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2067 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2073 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2079 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2085 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2091 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 333 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                if ((yyvsp[0].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2125 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2131 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 357 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 370 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2167 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 379 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2179 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2185 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 390 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2197 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2203 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2209 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2215 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2221 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 414 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2231 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 2237 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 425 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 2248 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 432 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[-2].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[-2].astNode);
    }
#line 2259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 442 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2265 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2271 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 448 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2281 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2287 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 460 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 2298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 467 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 469 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[0].astNode); 
        }
#line 2315 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2321 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2327 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 485 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2337 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 2343 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 497 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 504 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2360 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 506 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[0].astNode); 
        }
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 518 "parser.y" /* yacc.c:1646  */
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2385 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 532 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 539 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-3].astNode)); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 547 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-5].astNode)); 
                (yyval.astNode)->add((yyvsp[-3].astNode)); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2421 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 558 "parser.y" /* yacc.c:1646  */
    { 
            //printf("for statement successfully parsed:\n");
                std::string name = "for" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "range" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode) = new FunctionCallNode(nname);
                (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = new ForStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2439 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 572 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 2447 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 578 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2453 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 582 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 589 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 593 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2476 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 594 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 595 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 599 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "break" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BreakStatementNode(); 
                (yyval.astNode)->name = nname;
        }
#line 2499 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 606 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "continue" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ContinueStatementNode(); 
                (yyval.astNode)->name = nname;
        }
#line 2510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 615 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 616 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 617 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 618 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 619 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 620 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 625 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                if ((yyvsp[0].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2562 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 639 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 640 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 644 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 645 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 649 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 657 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 658 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 662 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 671 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 678 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 682 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 692 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2658 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 693 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 702 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "_func_call" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode));
                (yyval.astNode) = new FunctionCallNode(idFunc->value + name);
                if ((yyvsp[-1].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 711 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "print" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                if ((yyvsp[-1].astNode) != NULL)
                    (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 719 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "input" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-1].astNode)->name=nname;
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2703 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 734 "parser.y" /* yacc.c:1646  */
    { 
        //printf("class statement successfully parsed:\n");
        std::string name = "class" + std::to_string(n_nodes);
        ++n_nodes;
        IdentifierNode* idclass = dynamic_cast<IdentifierNode*>((yyvsp[-1].astNode));
        (yyval.astNode) = new ClassNode(idclass->value);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 745 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2722 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 749 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 755 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2739 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 759 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2745 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 760 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 761 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 762 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2763 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 766 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 772 "parser.y" /* yacc.c:1646  */
    { 
                //printf("try_except statement successfully parsed:\n");
                std::string name = "try" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new TryStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 784 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Except..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2795 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 791 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2801 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 795 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "except" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ExceptStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2813 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 808 "parser.y" /* yacc.c:1646  */
    { 
            //printf("match statement successfully parsed:\n");
            std::string name = "match" + std::to_string(n_nodes);
            ++n_nodes;
            std::string nname = "iden" + std::to_string(n_nodes);
            ++n_nodes;
            (yyvsp[-1].astNode)->name=nname;
            (yyval.astNode) = new matchStatementNode();
            (yyval.astNode)->name = name;
            (yyval.astNode)->add((yyvsp[-1].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 824 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Case..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 831 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 835 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "case" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new CaseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 845 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "case" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new CaseStatementNode(nname);
            (yyval.astNode)->label = "Default Statement";
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 855 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            (yyval.astNode)=new BlockNode(nname);
            (yyval.astNode)->label = "Match Block"; 
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 2885 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 871 "parser.y" /* yacc.c:1646  */
    { 
                    //printf("with statement successfully parsed:\n");
                    std::string nname = "with" + std::to_string(n_nodes);
                    n_nodes;  
                    (yyval.astNode) = new withStatementNode();
                    (yyval.astNode)->name = nname;
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 2899 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 883 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                    (yyval.astNode)=(yyvsp[-2].astNode);  
                }
#line 2908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 887 "parser.y" /* yacc.c:1646  */
    {
                        std::string nname = "block" + std::to_string(n_nodes);
                        ++n_nodes; 
                        (yyval.astNode)=new BlockNode(nname);
                        (yyval.astNode)->label = "With Head"; 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                }
#line 2920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 897 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=(yyvsp[0].astNode); }
#line 2926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 898 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=(yyvsp[-1].astNode); }
#line 2932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 903 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=(yyvsp[0].astNode); }
#line 2938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 908 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "iden" + std::to_string(n_nodes);
            n_nodes;
            (yyvsp[-5].astNode)->name = nname;
            std::string name = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            (yyval.astNode)=new BlockNode(name);
            (yyval.astNode)->label = "With Item"; 
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2955 "parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 929 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Parameters"; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2967 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 936 "parser.y" /* yacc.c:1646  */
    {
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 2976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 943 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=(yyvsp[-1].astNode); }
#line 2982 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 944 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode)=(yyvsp[-2].astNode); }
#line 2988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 945 "parser.y" /* yacc.c:1646  */
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 2999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 954 "parser.y" /* yacc.c:1646  */
    {
        std::string nname = "block" + std::to_string(n_nodes);
        ++n_nodes; 
        (yyval.astNode)=new BlockNode(nname);
        (yyval.astNode)->label = "Targets"; 
        (yyval.astNode)->add((yyvsp[0].astNode)); 
    }
#line 3011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 961 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode)=(yyvsp[-2].astNode); }
#line 3017 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 967 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 3023 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 971 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
    }
#line 3034 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 977 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 3040 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 981 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 3046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 982 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 987 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 988 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 995 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 999 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1000 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1001 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3088 "parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1003 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1004 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1005 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1009 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3121 "parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1020 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-3].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1031 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-3].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3151 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1042 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-3].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1053 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-3].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3181 "parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1064 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "assignment" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=nname;
                (yyval.astNode) = new assignmentStatement(name);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3196 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1077 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3207 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1084 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3219 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1092 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3233 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1102 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyvsp[0].astNode)->name=nnname;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1116 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3265 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1126 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                std::string nnname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyvsp[0].astNode)->name=nnname;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1142 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "yield" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new yieldStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3297 "parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1154 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "global" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new globalStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3311 "parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1166 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "nonlocal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new nonLocalStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3325 "parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1178 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "pass" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new PassStatementNode();
                (yyval.astNode)->name = nname;
        }
#line 3336 "parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1187 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "gt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3350 "parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1197 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "lt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3364 "parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1207 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "gte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1217 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3392 "parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1227 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "equal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3406 "parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1237 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                std::string nnname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=nnname;
                (yyval.astNode) = new BinaryExpressionNode("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3423 "parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1249 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1258 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "add" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new AdditionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3445 "parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1265 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "sub" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new SubtractionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1272 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "multi" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new MultiplicationExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3467 "parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1279 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "divide" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new DivisionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3478 "parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1286 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("AND", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3489 "parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1293 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "and" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("AND", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1300 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("OR", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3511 "parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1307 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "or" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BinaryExpressionNode("OR", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1314 "parser.y" /* yacc.c:1646  */
    { }
#line 3528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1315 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 3534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1316 "parser.y" /* yacc.c:1646  */
    { }
#line 3540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1318 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1320 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1322 "parser.y" /* yacc.c:1646  */
    {
                                                std::string nname = "string" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[0].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[0].astNode); 
                                        }
#line 3563 "parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1329 "parser.y" /* yacc.c:1646  */
    { 
                                                std::string nname = "iden" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[0].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[0].astNode);
                                        }
#line 3574 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3578 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1349 "parser.y" /* yacc.c:1906  */




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
