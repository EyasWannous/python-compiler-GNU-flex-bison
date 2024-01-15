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
    UMINUS = 301
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

#line 169 "parser.cpp" /* yacc.c:355  */
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

#line 199 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    70,    71,    77,    78,    79,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    98,
     105,   116,   129,   130,   134,   135,   139,   147,   148,   152,
     161,   168,   172,   182,   183,   190,   199,   211,   215,   222,
     226,   230,   234,   240,   241,   242,   243,   247,   248,   249,
     250,   251,   252,   253,   258,   270,   283,   289,   293,   300,
     304,   305,   306,   307,   311,   324,   325,   329,   330,   334,
     342,   343,   347,   356,   363,   367,   377,   378,   385,   386,
     391,   396,   402,   409,   419,   420,   425,   431,   437,   444,
     446,   456,   457,   462,   468,   474,   481,   483,   495,   509,
     516,   524,   535,   549,   555,   559,   566,   570,   571,   572,
     576,   583,   592,   593,   594,   595,   596,   597,   602,   615,
     616,   620,   621,   625,   633,   634,   638,   647,   654,   658,
     668,   669,   678,   686,   693,   708,   719,   723,   729,   733,
     734,   735,   736,   740,   746,   758,   765,   769,   782,   798,
     805,   809,   819,   829,   845,   851,   852,   856,   857,   862,
     867,   868,   869,   874,   875,   879,   880,   881,   885,   886,
     892,   896,   902,   906,   907,   912,   913,   920,   924,   925,
     926,   928,   929,   930,   934,   945,   956,   967,   978,   989,
    1002,  1009,  1019,  1031,  1043,  1055,  1067,  1076,  1086,  1096,
    1106,  1116,  1126,  1141,  1148,  1155,  1162,  1169,  1171,  1173,
    1175,  1182,  1191,  1192,  1193,  1194,  1195,  1196,  1197
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
  "CLASS", "TRY", "EXCEPT", "MATCH", "CASE", "WITH", "AS", "PASS", "'='",
  "'+'", "'-'", "'*'", "'/'", "'|'", "UMINUS", "'('", "')'", "','", "':'",
  "'_'", "'.'", "'['", "']'", "$accept", "start", "prog", "statements",
  "statement", "NUMBER", "if_stmt", "if_header", "elif_else_", "elif_else",
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
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,   124,   301,    40,    41,    44,    58,    95,    46,    91,
      93
};
# endif

#define YYPACT_NINF -332

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-332)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     440,   293,    27,    25,    37,    40,    -6,    33,    92,   112,
     108,   110,  -332,   132,  -332,   124,  -332,  -332,   112,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,   138,   147,   125,
     122,   135,   140,   150,   153,   347,    37,  -332,   145,   188,
     170,   156,   202,   192,   197,   179,   196,   168,  -332,  -332,
    -332,   121,   121,   151,  -332,   112,   167,  -332,  -332,   218,
    -332,   440,     5,  -332,  -332,  -332,  -332,   181,   121,   121,
     121,   121,  -332,  -332,  -332,   180,   178,  -332,    83,    83,
      83,    83,    15,   183,   235,   229,  -332,    96,  -332,  -332,
    -332,   191,   156,  -332,   193,   237,  -332,   493,   112,   179,
    -332,   241,  -332,   121,  -332,  -332,   200,  -332,   110,    36,
     121,   121,   121,   121,  -332,   112,    43,  -332,  -332,  -332,
       5,  -332,   112,   181,   181,   181,   181,  -332,   153,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,   199,   206,   201,  -332,
     288,   188,   210,  -332,  -332,  -332,   461,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,   477,  -332,   255,  -332,  -332,  -332,
    -332,  -332,   232,   217,   177,  -332,  -332,  -332,    36,   220,
     117,   117,  -332,  -332,  -332,    37,  -332,  -332,  -332,  -332,
    -332,    94,    10,   235,  -332,  -332,    49,  -332,  -332,   408,
    -332,   267,  -332,  -332,   188,  -332,  -332,  -332,   268,  -332,
      83,   188,   278,  -332,   424,  -332,   269,   273,  -332,  -332,
    -332,  -332,  -332,   156,   247,  -332,   246,   121,   220,    91,
     289,   239,  -332,  -332,  -332,  -332,   245,  -332,   294,   292,
    -332,  -332,    37,  -332,  -332,  -332,  -332,   141,  -332,   120,
    -332,  -332,  -332,  -332,  -332,  -332,   112,    81,  -332,   297,
      36,  -332,  -332,    36,  -332,  -332,    77,   381,    94,   258,
     188,    50,  -332,  -332,  -332,   141,  -332,   188,  -332,    83,
    -332,   112,  -332,   220,   220,   253,   254,   257,   161,   312,
     315,    53,    37,   316,  -332,   266,  -332,   307,  -332,  -332,
    -332,  -332,   313,  -332,  -332,  -332,   317,  -332,  -332,  -332,
    -332,   313,  -332,  -332,    37,  -332,  -332,  -332,  -332,   130,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,    37,
    -332,   319,   296,  -332,  -332,  -332,   171,  -332,  -332,   281,
    -332,    83,   282,   325,  -332,    99,   313,    67,  -332,  -332,
    -332,   171,  -332,   313,  -332,   290,  -332,   365,   319,   210,
    -332,    37,  -332,  -332,  -332,  -332,  -332,   330,   207,  -332,
     337,  -332,   338,  -332,   319,   300,  -332,  -332,  -332,  -332,
    -332,  -332,  -332
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     2,     4,     5,     8,     0,    11,
       9,    10,    12,    14,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,    22,     0,     0,
       0,    84,     0,     0,     0,     0,     0,   211,   210,    19,
      20,     0,     0,     0,   209,     0,   156,   157,   159,   161,
       1,     7,    24,    13,    18,   211,   189,   184,     0,     0,
       0,     0,    95,    97,    96,     0,    92,    93,     0,     0,
       0,     0,     0,     0,    78,     0,    98,     0,    88,    90,
      89,     0,    85,    86,     0,     0,   135,     0,     0,   144,
     145,     0,   148,     0,   208,   207,     0,   154,     0,     0,
       0,     0,     0,     0,     6,     0,     0,    21,    25,    28,
      27,    30,     0,   185,   186,   187,   188,   132,     0,   197,
     198,   199,   200,   202,   201,    23,    82,     0,    79,    80,
       0,     0,     0,   133,    87,   134,     0,   178,   179,   180,
     177,   181,   183,   182,     0,   171,     0,   174,   175,   176,
     147,   146,     0,     0,   163,   158,   155,   167,     0,   162,
     203,   204,   205,   206,    29,     0,    33,    26,    31,    32,
      94,     0,     0,     0,   110,   111,     0,   113,   114,     0,
     105,     0,   108,   112,     0,   115,   117,   116,     0,   103,
       0,     0,     0,   142,     0,   137,     0,     0,   140,   143,
     170,   172,   173,     0,     0,   149,     0,     0,   168,     0,
       0,     0,   212,   213,   215,   214,     0,    83,     0,     0,
      35,    81,     0,   119,   104,   106,   109,   121,   107,     0,
     102,   194,   136,   138,   141,   139,     0,     0,   150,     0,
       0,   164,   165,     0,   166,    34,     0,     0,     0,     0,
       0,     0,   118,   122,   125,   124,   127,     0,    99,     0,
     151,     0,   153,   160,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    38,     0,    41,    48,
      49,    47,     0,    50,    52,    51,     0,    43,    46,    44,
      45,     0,   120,   126,     0,   130,   123,   128,   129,     0,
     152,   216,   217,   218,   191,   192,   190,   195,   193,     0,
      65,     0,     0,    37,    39,    42,    67,    40,    36,     0,
     100,     0,     0,     0,    54,     0,     0,     0,    64,    68,
      71,    70,    73,     0,   131,     0,    66,     0,     0,     0,
      72,     0,    76,    69,    74,    75,   101,     0,     0,    58,
       0,    61,     0,    56,     0,     0,    63,    57,    59,    62,
      60,    55,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,  -332,  -332,   308,    -5,    17,  -332,  -332,  -332,
     259,  -332,   260,  -332,  -136,  -277,  -332,    70,  -331,  -332,
    -332,  -332,  -326,  -332,    -1,  -332,  -332,  -332,  -332,    41,
    -332,    42,  -332,  -332,  -332,   194,  -332,  -332,   -35,  -332,
    -332,   250,     3,    32,     4,  -134,  -332,   205,  -321,  -314,
    -332,  -332,  -332,  -332,   123,  -332,   131,  -332,    18,  -332,
    -332,  -332,   182,  -332,     0,  -332,   286,     1,  -332,   175,
    -332,  -332,     2,   287,  -332,   346,  -332,   186,  -156,  -332,
     -10,  -332,   251,  -135,  -133,    20,  -332,  -332,  -132,  -332,
      21,    19,   -20,   142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    54,   147,    18,   117,   118,
     119,   120,   121,   122,    19,   230,   285,   286,   287,   288,
     289,   290,   334,   358,   359,   291,   292,   338,   339,   340,
     341,   342,   343,   137,   138,   139,    91,    92,   246,    75,
      76,    77,   148,   201,   149,    86,   189,   190,   191,   192,
     193,   194,   262,   263,   264,   265,   266,   267,   150,    23,
      96,   204,   205,   206,   151,    99,   100,   152,   214,   215,
     249,   102,   153,    55,    56,    57,    58,   163,   169,   219,
      45,   154,   155,   156,   157,   158,   297,   298,   299,   300,
     159,    37,    59,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      24,    25,    26,    20,    21,   198,    93,   199,    62,    67,
     203,   207,   218,   208,   209,   326,   357,    17,    22,   133,
      27,    28,   363,    39,   328,   228,   360,   357,    38,    74,
      35,   104,   105,   361,   115,   116,    90,   360,   371,   167,
      35,    49,    50,    40,   361,   107,    35,    41,   123,   124,
     125,   126,    35,    35,   198,    83,    35,   144,   229,   350,
     237,    24,    25,    26,    20,    21,   355,   240,   203,   207,
      35,   208,   209,   129,   130,   131,   132,   134,    17,    22,
      36,    27,    28,   164,    88,    89,    42,    90,   160,   168,
     170,   171,   172,   173,   273,    43,   175,   274,   275,   276,
     277,   141,   232,   304,   348,   174,   319,    49,    50,    49,
      50,    46,   179,    47,    48,   222,   223,   224,   225,   226,
     351,   284,   296,    74,    65,    48,   303,    44,    65,    48,
      66,   142,    60,   308,   349,   176,    49,    50,   271,    61,
     195,   196,   197,   187,   188,   252,   253,    49,    50,   284,
     296,    49,    50,    63,    47,    48,    72,    73,    51,    88,
      89,    52,    64,    53,   314,   315,   112,   113,    68,    51,
     260,   261,    52,    51,   268,   269,    52,    49,    50,    49,
      50,    69,    49,    50,   330,   331,    70,    49,    50,   195,
     196,   197,   187,   188,   221,   239,    71,   164,    84,    51,
     336,   337,    52,    85,    87,   233,    94,    95,    90,    97,
       1,   101,   362,   278,   184,   185,   202,   279,   280,    98,
     367,   103,   108,   362,   110,   111,   112,   113,   110,   111,
     112,   113,   217,   128,   127,   186,   270,   135,   136,     4,
       5,   140,    90,     6,     7,   143,     9,   145,    10,   146,
      11,   259,    12,   162,   165,   181,   183,   293,   294,   295,
     182,   310,   109,   200,   309,   110,   111,   112,   113,     1,
     212,   216,   278,   316,   213,   202,   279,   280,   220,   323,
     305,   241,   236,   238,   244,   293,   294,   295,   245,   247,
     250,     1,   254,   255,   281,   184,   185,     3,   282,   283,
     320,   321,     6,     7,   256,     9,   257,    10,   258,    11,
     272,    12,   302,   311,   312,   317,   186,   313,   318,   322,
       4,     5,   325,   329,     6,     7,   345,     9,   228,    10,
     335,    11,   327,    12,   333,   344,   346,   347,   332,    29,
      30,    31,    32,    33,   356,   366,    34,   195,   196,   197,
     187,   188,   369,   370,   372,   324,   352,   368,   195,   196,
     197,   187,   188,    78,    79,    80,    81,    82,     1,   114,
     365,   278,   184,   185,   202,   279,   280,   231,   180,   177,
     178,   364,   353,   354,     1,   161,   243,   278,   306,   248,
     202,   279,   280,   186,   235,   166,   307,     4,     5,   106,
     301,     6,     7,   251,     9,   211,    10,     0,    11,   281,
      12,     1,     3,   282,   283,   184,   185,     6,     7,     0,
       9,   234,    10,     0,    11,     0,    12,     1,     0,     0,
       0,     0,     0,   202,     0,     0,   186,   242,     0,     0,
       4,     5,     0,     1,     6,     7,     0,     9,     0,    10,
       0,    11,     2,    12,     0,     3,     4,     5,     0,     0,
       6,     7,     0,     9,     1,    10,     0,    11,     2,    12,
     202,     3,     4,     5,     0,     0,     6,     7,     8,     9,
       1,    10,     0,    11,     0,    12,     0,     0,     0,     2,
     210,     0,     3,     4,     5,     0,     1,     6,     7,     0,
       9,     0,    10,     0,    11,     2,    12,     0,     0,     4,
       5,     0,     0,     6,     7,     0,     9,     0,    10,     0,
      11,     2,    12,     0,     0,     4,     5,     0,     0,     6,
       7,     0,     9,     0,    10,     0,    11,     0,    12
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,     0,   140,    41,   141,    18,    29,
     146,   146,   168,   146,   146,   292,   347,     0,     0,     4,
       0,     0,   348,     4,   301,    15,   347,   358,     3,    34,
       3,    51,    52,   347,    29,    30,    41,   358,   364,     3,
       3,    26,    27,     3,   358,    55,     3,    53,    68,    69,
      70,    71,     3,     3,   189,    36,     3,    92,    48,   336,
     194,    61,    61,    61,    61,    61,   343,   201,   204,   204,
       3,   204,   204,    78,    79,    80,    81,    82,    61,    61,
      53,    61,    61,   103,     3,     4,    53,    92,    98,    53,
     110,   111,   112,   113,   250,     3,    53,   253,    21,    22,
      23,     5,    53,    53,     5,   115,    53,    26,    27,    26,
      27,     3,   122,     3,     4,    21,    22,    23,    24,    25,
      53,   257,   257,   128,     3,     4,   260,    15,     3,     4,
       5,    35,     0,   267,    35,   116,    26,    27,    57,    15,
     140,   140,   140,   140,   140,    54,    55,    26,    27,   285,
     285,    26,    27,    15,     3,     4,     3,     4,    48,     3,
       4,    51,    15,    53,     3,     4,    49,    50,    46,    48,
      29,    30,    51,    48,    54,    55,    51,    26,    27,    26,
      27,    46,    26,    27,    54,    55,    46,    26,    27,   189,
     189,   189,   189,   189,   175,   200,    46,   217,    53,    48,
      29,    30,    51,    15,    34,   186,     4,    15,   213,    12,
       3,    15,   347,     6,     7,     8,     9,    10,    11,    40,
      13,    53,    55,   358,    47,    48,    49,    50,    47,    48,
      49,    50,    55,    55,    54,    28,   246,    54,     3,    32,
      33,    12,   247,    36,    37,    54,    39,    54,    41,    12,
      43,   232,    45,    12,    54,    56,    55,   257,   257,   257,
      54,   271,    44,    53,   269,    47,    48,    49,    50,     3,
      15,    54,     6,   278,    42,     9,    10,    11,    58,    13,
     261,     3,    15,    15,    15,   285,   285,   285,    15,    42,
      44,     3,     3,    54,    28,     7,     8,    31,    32,    33,
     281,   282,    36,    37,    59,    39,    12,    41,    16,    43,
      13,    45,    54,    60,    60,     3,    28,    60,     3,     3,
      32,    33,    15,   304,    36,    37,   331,    39,    15,    41,
      34,    43,    15,    45,    15,    54,    54,    12,   319,    46,
      47,    48,    49,    50,    54,    15,    53,   347,   347,   347,
     347,   347,    15,    15,    54,   285,   337,   358,   358,   358,
     358,   358,   358,    16,    17,    18,    19,    20,     3,    61,
     351,     6,     7,     8,     9,    10,    11,   183,   128,   120,
     120,   349,   341,   341,     3,    99,   204,     6,   265,   214,
       9,    10,    11,    28,   189,   108,   265,    32,    33,    53,
     258,    36,    37,   217,    39,   154,    41,    -1,    43,    28,
      45,     3,    31,    32,    33,     7,     8,    36,    37,    -1,
      39,    13,    41,    -1,    43,    -1,    45,     3,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    28,    13,    -1,    -1,
      32,    33,    -1,     3,    36,    37,    -1,    39,    -1,    41,
      -1,    43,    28,    45,    -1,    31,    32,    33,    -1,    -1,
      36,    37,    -1,    39,     3,    41,    -1,    43,    28,    45,
       9,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
       3,    41,    -1,    43,    -1,    45,    -1,    -1,    -1,    28,
      13,    -1,    31,    32,    33,    -1,     3,    36,    37,    -1,
      39,    -1,    41,    -1,    43,    28,    45,    -1,    -1,    32,
      33,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    28,    45,    -1,    -1,    32,    33,    -1,    -1,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    31,    32,    33,    36,    37,    38,    39,
      41,    43,    45,    62,    63,    64,    65,    67,    68,    75,
     103,   105,   119,   120,   125,   128,   133,   146,   151,    46,
      47,    48,    49,    50,    53,     3,    53,   152,     3,   152,
       3,    53,    53,     3,    15,   141,     3,     3,     4,    26,
      27,    48,    51,    53,    66,   134,   135,   136,   137,   153,
       0,    15,   141,    15,    15,     3,     5,   153,    46,    46,
      46,    46,     3,     4,    66,   100,   101,   102,    16,    17,
      18,    19,    20,   152,    53,    15,   106,    34,     3,     4,
      66,    97,    98,    99,     4,    15,   121,    12,    40,   126,
     127,    15,   132,    53,   153,   153,   136,   141,    55,    44,
      47,    48,    49,    50,    65,    29,    30,    69,    70,    71,
      72,    73,    74,   153,   153,   153,   153,    54,    55,    66,
      66,    66,    66,     4,    66,    54,     3,    94,    95,    96,
      12,     5,    35,    54,    99,    54,    12,    67,   103,   105,
     119,   125,   128,   133,   142,   143,   144,   145,   146,   151,
     141,   127,    12,   138,   153,    54,   134,     3,    53,   139,
     153,   153,   153,   153,   141,    53,   152,    71,    73,   141,
     102,    56,    54,    55,     7,     8,    28,   103,   105,   107,
     108,   109,   110,   111,   112,   125,   128,   133,   144,   106,
      53,   104,     9,    75,   122,   123,   124,   144,   145,   149,
      13,   143,    15,    42,   129,   130,    54,    55,   139,   140,
      58,   152,    21,    22,    23,    24,    25,   154,    15,    48,
      76,    96,    53,   152,    13,   108,    15,   106,    15,    66,
     106,     3,    13,   123,    15,    15,    99,    42,   130,   131,
      44,   138,    54,    55,     3,    54,    59,    12,    16,   152,
      29,    30,   113,   114,   115,   116,   117,   118,    54,    55,
     141,    57,    13,   139,   139,    21,    22,    23,     6,    10,
      11,    28,    32,    33,    75,    77,    78,    79,    80,    81,
      82,    86,    87,   125,   128,   133,   144,   147,   148,   149,
     150,   154,    54,   106,    53,   152,   115,   117,   106,    66,
     141,    60,    60,    60,     3,     4,    66,     3,     3,    53,
     152,   152,     3,    13,    78,    15,    76,    15,    76,   152,
      54,    55,   152,    15,    83,    34,    29,    30,    88,    89,
      90,    91,    92,    93,    54,    66,    54,    12,     5,    35,
      76,    53,   152,    90,    92,    76,    54,    79,    84,    85,
     109,   110,   144,    83,   104,   152,    15,    13,    85,    15,
      15,    83,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      72,    72,    73,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    78,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    81,    82,    82,    83,    84,    84,
      85,    85,    85,    85,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    91,    91,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   102,   103,   104,
     104,   104,   105,   105,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   116,   116,   117,
     118,   118,   119,   119,   119,   120,   121,   122,   122,   123,
     123,   123,   123,   124,   125,   126,   126,   127,   128,   129,
     129,   130,   131,   132,   133,   134,   134,   135,   135,   136,
     137,   137,   137,   138,   138,   139,   139,   139,   140,   140,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   146,   146,   146,
     147,   147,   147,   148,   149,   150,   151,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   154,   154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     3,     2,     4,     0,     1,     2,     1,     1,     2,
       1,     2,     2,     2,     4,     6,     9,     4,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     5,     4,     1,     2,
       2,     1,     2,     2,     3,     2,     4,     0,     1,     2,
       1,     1,     2,     1,     2,     2,     2,     4,     0,     1,
       1,     3,     1,     3,     0,     1,     1,     2,     1,     1,
       1,     0,     1,     1,     3,     1,     1,     1,     3,     3,
       5,     7,     6,     5,     4,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       4,     0,     1,     2,     1,     1,     2,     1,     2,     2,
       2,     4,     4,     4,     4,     3,     4,     1,     2,     2,
       1,     2,     1,     1,     3,     1,     2,     2,     3,     1,
       2,     3,     3,     5,     3,     3,     1,     1,     3,     1,
       6,     1,     3,     1,     3,     3,     3,     1,     1,     3,
       4,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     3,
       2,     2,     2,     2,     2,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
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
#line 62 "parser.y" /* yacc.c:1646  */
    {
                // Assign the root of the AST
                root = (yyval.astNode);
                YYACCEPT;
        }
#line 1584 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=NULL; }
#line 1590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "parser.y" /* yacc.c:1646  */
    {
                (yyval.astNode)=(yyvsp[0].astNode);
        }
#line 1598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode)=new StatementsNode("root"); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 1610 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 79 "parser.y" /* yacc.c:1646  */
    { }
#line 1616 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1628 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1658 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "parser.y" /* yacc.c:1646  */
    { }
#line 1676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "parser.y" /* yacc.c:1646  */
    { 
                                std::string nname = "int" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1693 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "parser.y" /* yacc.c:1646  */
    { 
                                std::string nname = "float" + std::to_string(n_nodes);
                                ++n_nodes;
                                (yyvsp[0].astNode)->name=nname;
                                (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 116 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 1737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 139 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 1756 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1762 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 161 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1797 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1809 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1821 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 190 "parser.y" /* yacc.c:1646  */
    {
        //printf("Function successfully parsed:\n"); 
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-4].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 199 "parser.y" /* yacc.c:1646  */
    {
            //printf("Generic Function successfully parsed:\n");
                std::string name = "func" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-7].astNode));
                (yyval.astNode) = new FunctionNode(idFunc->value + "_Generic");
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 215 "parser.y" /* yacc.c:1646  */
    { 
                                        std::string nname = "stmt" + std::to_string(n_nodes);
                                        ++n_nodes;
                                        (yyval.astNode) = new StatementsNode(nname); 
                                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                                }
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 226 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[-1].astNode);         
            }
#line 1880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 230 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[0].astNode);        
            }
#line 1888 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 234 "parser.y" /* yacc.c:1646  */
    { 
                (yyval.astNode) = (yyvsp[-1].astNode);            
            }
#line 1896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1902 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 251 "parser.y" /* yacc.c:1646  */
    {}
#line 1950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 258 "parser.y" /* yacc.c:1646  */
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 1976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 270 "parser.y" /* yacc.c:1646  */
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
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 283 "parser.y" /* yacc.c:1646  */
    { 
            //printf("for statement successfully parsed:\n"); 
        }
#line 2002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2008 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 293 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2019 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2025 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2031 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2037 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2043 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2049 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 311 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2088 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 334 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2101 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 347 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2142 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 367 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 385 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2178 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 391 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 2194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 402 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 2205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 409 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[-2].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[-2].astNode);
    }
#line 2216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 425 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2244 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 437 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 2255 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 444 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2261 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 446 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[0].astNode); 
        }
#line 2272 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2278 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2284 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 462 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2294 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 2300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 474 "parser.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 2311 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 481 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2317 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 483 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=nname;
                (yyval.astNode) = (yyvsp[0].astNode); 
        }
#line 2328 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 495 "parser.y" /* yacc.c:1646  */
    { 
            //printf("while statement successfully parsed:\n");
                std::string name = "while" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new WhileStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2342 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 509 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2353 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 516 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-3].astNode)); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 524 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "arg" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new Args(nname); 
                (yyval.astNode)->add((yyvsp[-5].astNode)); 
                (yyval.astNode)->add((yyvsp[-3].astNode)); 
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
        }
#line 2378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 535 "parser.y" /* yacc.c:1646  */
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
#line 2396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 549 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 2404 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 555 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2410 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 559 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "stmt" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new StatementsNode(nname); 
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2421 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 566 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2427 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 570 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2433 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 571 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2439 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 572 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2445 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 576 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "break" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new BreakStatementNode(); 
                (yyval.astNode)->name = nname;
        }
#line 2456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 583 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "continue" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ContinueStatementNode(); 
                (yyval.astNode)->name = nname;
        }
#line 2467 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 592 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2473 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 593 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 594 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 595 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = (yyvsp[0].astNode); }
#line 2491 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 596 "parser.y" /* yacc.c:1646  */
    {  /*$$ = $1;*/ }
#line 2497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 597 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 602 "parser.y" /* yacc.c:1646  */
    { 
                //printf("if statement successfully parsed:\n");
                std::string nname = "if" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new IfStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 615 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2524 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 616 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 620 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 2536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 621 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2542 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 625 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..._Else";
                (yyval.astNode)->add((yyvsp[-1].astNode)); 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2555 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 633 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2561 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 634 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2567 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 638 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "else" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2578 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 647 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Elif..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 654 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 658 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "elif" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ElIfStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 668 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 669 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2620 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 678 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "_func_call" + std::to_string(n_nodes);
                ++n_nodes;
                IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode));
                (yyval.astNode) = new FunctionCallNode(idFunc->value + name);
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 686 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "print" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 693 "parser.y" /* yacc.c:1646  */
    {
                std::string name = "input" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new FunctionCallNode(name);
                std::string nname = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-1].astNode)->name=nname;
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 708 "parser.y" /* yacc.c:1646  */
    { 
        //printf("class statement successfully parsed:\n");
        std::string name = "class" + std::to_string(n_nodes);
        ++n_nodes;
        IdentifierNode* idclass = dynamic_cast<IdentifierNode*>((yyvsp[-1].astNode));
        (yyval.astNode) = new ClassNode(idclass->value);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 719 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 723 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
        }
#line 2687 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 729 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2693 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 733 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 734 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2705 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 735 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2711 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 736 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2717 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 740 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2723 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 746 "parser.y" /* yacc.c:1646  */
    { 
                //printf("try_except statement successfully parsed:\n");
                std::string name = "try" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new TryStatementNode();
                (yyval.astNode)->name = name;
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 758 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Except..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 765 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 769 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "except" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ExceptStatementNode();
                (yyval.astNode)->name = nname;
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 782 "parser.y" /* yacc.c:1646  */
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
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 798 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "block" + std::to_string(n_nodes);
                ++n_nodes; 
                (yyval.astNode)=new BlockNode(nname);
                (yyval.astNode)->label = "Case..."; 
                (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 805 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2802 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 809 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "case" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new CaseStatementNode(nname);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 819 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "case" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new CaseStatementNode(nname);
            (yyval.astNode)->label = "Default Statement";
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 2826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 829 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "block" + std::to_string(n_nodes);
            ++n_nodes; 
            (yyval.astNode)=new BlockNode(nname);
            (yyval.astNode)->label = "Match Block"; 
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 2839 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 845 "parser.y" /* yacc.c:1646  */
    { 
                printf("with statement successfully parsed:\n"); 
            }
#line 2847 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 892 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2853 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 896 "parser.y" /* yacc.c:1646  */
    {
            std::string nname = "stmt" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new StatementsNode(nname); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
    }
#line 2864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 902 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 906 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2876 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 907 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 912 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2888 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 913 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2894 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 920 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2900 "parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 924 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 925 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2912 "parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 926 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2918 "parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 928 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2924 "parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 929 "parser.y" /* yacc.c:1646  */
    {}
#line 2930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 930 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 934 "parser.y" /* yacc.c:1646  */
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
#line 2951 "parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 945 "parser.y" /* yacc.c:1646  */
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
#line 2966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 956 "parser.y" /* yacc.c:1646  */
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
#line 2981 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 967 "parser.y" /* yacc.c:1646  */
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
#line 2996 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 978 "parser.y" /* yacc.c:1646  */
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
#line 3011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 989 "parser.y" /* yacc.c:1646  */
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
#line 3026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1002 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyvsp[-1].astNode)->name = nname;
        }
#line 3037 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1009 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1019 "parser.y" /* yacc.c:1646  */
    { 
                std::string nname = "return" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "string" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new ReturnStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3065 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1031 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "yield" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new yieldStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3079 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1043 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "global" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new globalStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3093 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1055 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "nonlocal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[0].astNode)->name=name;
                (yyval.astNode) = new nonLocalStatementNode((yyvsp[0].astNode));
                (yyval.astNode)->name = nname;
        }
#line 3107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1067 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "pass" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new PassStatementNode();
                (yyval.astNode)->name = nname;
        }
#line 3118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1076 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "gt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3132 "parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1086 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "lt" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1096 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "gte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1106 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "lte" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1116 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "equal" + std::to_string(n_nodes);
                ++n_nodes;
                std::string name = "iden" + std::to_string(n_nodes);
                ++n_nodes;
                (yyvsp[-2].astNode)->name=name;
                (yyval.astNode) = new BinaryExpressionNode("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1126 "parser.y" /* yacc.c:1646  */
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
#line 3205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1141 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "add" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new AdditionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1148 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "sub" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new SubtractionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3227 "parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1155 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "multi" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new MultiplicationExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1162 "parser.y" /* yacc.c:1646  */
    {
                std::string nname = "divide" + std::to_string(n_nodes);
                ++n_nodes;
                (yyval.astNode) = new DivisionExpressionNode((yyvsp[-2].astNode), (yyvsp[0].astNode));
                (yyval.astNode)->name=nname;
        }
#line 3249 "parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1169 "parser.y" /* yacc.c:1646  */
    { }
#line 3255 "parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1171 "parser.y" /* yacc.c:1646  */
    { }
#line 3261 "parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1173 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3267 "parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1175 "parser.y" /* yacc.c:1646  */
    {
                                                std::string nname = "string" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[0].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[0].astNode); 
                                        }
#line 3278 "parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1182 "parser.y" /* yacc.c:1646  */
    { 
                                                std::string nname = "iden" + std::to_string(n_nodes);
                                                ++n_nodes;
                                                (yyvsp[0].astNode)->name=nname;
                                                (yyval.astNode) = (yyvsp[0].astNode);
                                        }
#line 3289 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3293 "parser.cpp" /* yacc.c:1646  */
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
#line 1202 "parser.y" /* yacc.c:1906  */




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
