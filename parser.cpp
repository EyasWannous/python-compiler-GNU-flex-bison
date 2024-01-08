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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  347

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
       0,    54,    54,    55,    61,    62,    63,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    81,    82,    88,
      92,    93,    97,    98,   102,   103,   104,   108,   112,   113,
     117,   121,   122,   129,   132,   138,   142,   143,   147,   148,
     149,   153,   154,   155,   156,   160,   161,   162,   163,   164,
     165,   166,   171,   177,   180,   186,   190,   191,   195,   196,
     197,   198,   202,   206,   207,   211,   212,   216,   217,   218,
     222,   226,   227,   231,   235,   236,   243,   244,   250,   251,
     257,   258,   263,   264,   269,   270,   276,   277,   278,   285,
     293,   294,   295,   299,   302,   308,   312,   313,   317,   318,
     319,   323,   324,   328,   329,   330,   331,   332,   333,   338,
     342,   343,   347,   348,   352,   353,   354,   358,   362,   363,
     367,   371,   372,   381,   382,   383,   390,   396,   400,   401,
     405,   406,   407,   408,   412,   418,   424,   425,   429,   436,
     443,   444,   448,   452,   456,   465,   471,   472,   476,   477,
     482,   487,   488,   489,   494,   495,   499,   500,   501,   505,
     506,   513,   517,   518,   522,   523,   528,   535,   539,   540,
     541,   543,   544,   545,   549,   550,   554,   555,   556,   560,
     564,   568,   572,   573,   574,   575,   576,   577,   581,   582,
     583,   584,   585,   587,   588,   589,   590,   594,   595,   596,
     597,   598,   599,   600
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
  "expression", "data_type", YY_NULL
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

#define YYPACT_NINF -307

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-307)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
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

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
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

static const yytype_int16 yycheck[] =
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
static const yytype_uint8 yystos[] =
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
     141,   141,   141,   141,   142,   142,   143,   143,   143,   144,
     145,   146,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,   149,   149,
     149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     1,     1,     1,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4
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
#line 54 "parser.y" /* yacc.c:1646  */
    { /* for empty put % empty */}
#line 1556 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    {
        printf("prog accepted:\n");YYACCEPT;
    }
#line 1564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "parser.y" /* yacc.c:1646  */
    { }
#line 1570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "parser.y" /* yacc.c:1646  */
    { }
#line 1576 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "parser.y" /* yacc.c:1646  */
    { }
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 68 "parser.y" /* yacc.c:1646  */
    { }
#line 1588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 69 "parser.y" /* yacc.c:1646  */
    { }
#line 1594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "parser.y" /* yacc.c:1646  */
    { }
#line 1600 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "parser.y" /* yacc.c:1646  */
    { }
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "parser.y" /* yacc.c:1646  */
    { }
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "parser.y" /* yacc.c:1646  */
    { }
#line 1618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "parser.y" /* yacc.c:1646  */
    { }
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "parser.y" /* yacc.c:1646  */
    { }
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 76 "parser.y" /* yacc.c:1646  */
    { }
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "parser.y" /* yacc.c:1646  */
    { }
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "parser.y" /* yacc.c:1646  */
    { printf("if statement successfully parsed:\n"); }
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "parser.y" /* yacc.c:1646  */
    {/* empty no next elif or else*/}
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "parser.y" /* yacc.c:1646  */
    { }
#line 1660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "parser.y" /* yacc.c:1646  */
    {
            printf("Function successfully parsed:\n"); 
        }
#line 1668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "parser.y" /* yacc.c:1646  */
    {
            printf("Generic Function successfully parsed:\n"); 
        }
#line 1676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "parser.y" /* yacc.c:1646  */
    { }
#line 1682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 147 "parser.y" /* yacc.c:1646  */
    {}
#line 1688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 148 "parser.y" /* yacc.c:1646  */
    {}
#line 1694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "parser.y" /* yacc.c:1646  */
    {}
#line 1700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 164 "parser.y" /* yacc.c:1646  */
    {}
#line 1706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 165 "parser.y" /* yacc.c:1646  */
    {}
#line 1712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 171 "parser.y" /* yacc.c:1646  */
    { 
            printf("while statement successfully parsed:\n"); 
        }
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 177 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 1728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 1736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 186 "parser.y" /* yacc.c:1646  */
    { }
#line 1742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 195 "parser.y" /* yacc.c:1646  */
    {}
#line 1748 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 196 "parser.y" /* yacc.c:1646  */
    {}
#line 1754 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "parser.y" /* yacc.c:1646  */
    { printf("if statement successfully parsed:\n"); }
#line 1760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 211 "parser.y" /* yacc.c:1646  */
    {/* empty no next elif or else*/}
#line 1766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 212 "parser.y" /* yacc.c:1646  */
    { }
#line 1772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 243 "parser.y" /* yacc.c:1646  */
    { }
#line 1778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 244 "parser.y" /* yacc.c:1646  */
    { }
#line 1784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 250 "parser.y" /* yacc.c:1646  */
    { }
#line 1790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 251 "parser.y" /* yacc.c:1646  */
    { }
#line 1796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 257 "parser.y" /* yacc.c:1646  */
    { }
#line 1802 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 258 "parser.y" /* yacc.c:1646  */
    { }
#line 1808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 263 "parser.y" /* yacc.c:1646  */
    { }
#line 1814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 264 "parser.y" /* yacc.c:1646  */
    { }
#line 1820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "parser.y" /* yacc.c:1646  */
    { }
#line 1826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 270 "parser.y" /* yacc.c:1646  */
    { }
#line 1832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 276 "parser.y" /* yacc.c:1646  */
    { }
#line 1838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 277 "parser.y" /* yacc.c:1646  */
    { }
#line 1844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "parser.y" /* yacc.c:1646  */
    { }
#line 1850 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 285 "parser.y" /* yacc.c:1646  */
    { 
            printf("while statement successfully parsed:\n"); 
        }
#line 1858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 299 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 302 "parser.y" /* yacc.c:1646  */
    { 
            printf("for statement successfully parsed:\n"); 
        }
#line 1874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 308 "parser.y" /* yacc.c:1646  */
    { }
#line 1880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 317 "parser.y" /* yacc.c:1646  */
    {}
#line 1886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 318 "parser.y" /* yacc.c:1646  */
    {}
#line 1892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 331 "parser.y" /* yacc.c:1646  */
    {}
#line 1898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 332 "parser.y" /* yacc.c:1646  */
    {}
#line 1904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 333 "parser.y" /* yacc.c:1646  */
    {}
#line 1910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 338 "parser.y" /* yacc.c:1646  */
    { printf("if statement successfully parsed:\n"); }
#line 1916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 347 "parser.y" /* yacc.c:1646  */
    {/* empty no next elif or else*/}
#line 1922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 348 "parser.y" /* yacc.c:1646  */
    { }
#line 1928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 381 "parser.y" /* yacc.c:1646  */
    {}
#line 1934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 382 "parser.y" /* yacc.c:1646  */
    {}
#line 1940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 383 "parser.y" /* yacc.c:1646  */
    {}
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 390 "parser.y" /* yacc.c:1646  */
    { 
        printf("class statement successfully parsed:\n");
    }
#line 1954 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 396 "parser.y" /* yacc.c:1646  */
    { }
#line 1960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 405 "parser.y" /* yacc.c:1646  */
    {}
#line 1966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 406 "parser.y" /* yacc.c:1646  */
    {}
#line 1972 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 418 "parser.y" /* yacc.c:1646  */
    { 
                printf("try_except statement successfully parsed:\n"); 
            }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 424 "parser.y" /* yacc.c:1646  */
    {}
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 425 "parser.y" /* yacc.c:1646  */
    {}
#line 1992 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 429 "parser.y" /* yacc.c:1646  */
    {}
#line 1998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 436 "parser.y" /* yacc.c:1646  */
    { 
            printf("match statement successfully parsed:\n"); 
        }
#line 2006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 456 "parser.y" /* yacc.c:1646  */
    { }
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 465 "parser.y" /* yacc.c:1646  */
    { 
                printf("with statement successfully parsed:\n"); 
            }
#line 2020 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 513 "parser.y" /* yacc.c:1646  */
    { }
#line 2026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 522 "parser.y" /* yacc.c:1646  */
    {}
#line 2032 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 523 "parser.y" /* yacc.c:1646  */
    {}
#line 2038 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 528 "parser.y" /* yacc.c:1646  */
    {}
#line 2044 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 535 "parser.y" /* yacc.c:1646  */
    {}
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 539 "parser.y" /* yacc.c:1646  */
    {}
#line 2056 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 540 "parser.y" /* yacc.c:1646  */
    {}
#line 2062 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 541 "parser.y" /* yacc.c:1646  */
    {}
#line 2068 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 543 "parser.y" /* yacc.c:1646  */
    {}
#line 2074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 544 "parser.y" /* yacc.c:1646  */
    {}
#line 2080 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 545 "parser.y" /* yacc.c:1646  */
    {}
#line 2086 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 549 "parser.y" /* yacc.c:1646  */
    {}
#line 2092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 550 "parser.y" /* yacc.c:1646  */
    {}
#line 2098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 554 "parser.y" /* yacc.c:1646  */
    { }
#line 2104 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 555 "parser.y" /* yacc.c:1646  */
    { }
#line 2110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 556 "parser.y" /* yacc.c:1646  */
    { }
#line 2116 "parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 560 "parser.y" /* yacc.c:1646  */
    { }
#line 2122 "parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 564 "parser.y" /* yacc.c:1646  */
    { }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 568 "parser.y" /* yacc.c:1646  */
    { }
#line 2134 "parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 572 "parser.y" /* yacc.c:1646  */
    {}
#line 2140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 573 "parser.y" /* yacc.c:1646  */
    {}
#line 2146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 574 "parser.y" /* yacc.c:1646  */
    {}
#line 2152 "parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 575 "parser.y" /* yacc.c:1646  */
    {}
#line 2158 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 576 "parser.y" /* yacc.c:1646  */
    {}
#line 2164 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 577 "parser.y" /* yacc.c:1646  */
    {}
#line 2170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 581 "parser.y" /* yacc.c:1646  */
    { }
#line 2176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 582 "parser.y" /* yacc.c:1646  */
    { }
#line 2182 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 583 "parser.y" /* yacc.c:1646  */
    { }
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 584 "parser.y" /* yacc.c:1646  */
    { }
#line 2194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 585 "parser.y" /* yacc.c:1646  */
    { }
#line 2200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 587 "parser.y" /* yacc.c:1646  */
    { }
#line 2206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 588 "parser.y" /* yacc.c:1646  */
    { }
#line 2212 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 589 "parser.y" /* yacc.c:1646  */
    { }
#line 2218 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2222 "parser.cpp" /* yacc.c:1646  */
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
#line 605 "parser.y" /* yacc.c:1906  */




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
