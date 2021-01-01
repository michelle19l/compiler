/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#line 1 "src/main.y" /* yacc.c:339  */

    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 75 "src/main.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "main.tab.h".  */
#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    WHILE = 260,
    FOR = 261,
    RETURN = 262,
    T_CHAR = 263,
    T_INT = 264,
    T_STRING = 265,
    T_BOOL = 266,
    T_INT_POINTER = 267,
    T_CHAR_POINTER = 268,
    T_VOID = 269,
    PRINTF = 270,
    SCANF = 271,
    LOP_ASSIGN = 272,
    ADD_ASSIGN = 273,
    SUB_ASSIGN = 274,
    MOD_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MUL_ASSIGN = 277,
    SEMICOLON = 278,
    COMMA = 279,
    POINT = 280,
    LPAREN = 281,
    RPAREN = 282,
    LBRACK = 283,
    RBRACK = 284,
    LBRACE = 285,
    RBRACE = 286,
    IDENTIFIER = 287,
    INTEGER = 288,
    CHAR = 289,
    BOOL = 290,
    STRING = 291,
    LOP_EQ = 292,
    GREAT = 293,
    LESS = 294,
    GREAT_EQ = 295,
    LESS_EQ = 296,
    NOT_EQ = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301,
    MOD = 302,
    OR = 303,
    AND = 304,
    NOT = 305,
    NEG = 306,
    POS = 307,
    SELF_INC = 308,
    SELF_DEC = 309,
    SELF_INC_R = 310,
    SELF_DEC_R = 311,
    SELF_INC_L = 312,
    SELF_DEC_L = 313,
    GET_ADDRESS = 314,
    GET_VALUE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "src/main.tab.cpp" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    46,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      73,    83,    91,   107,   116,   127,   137,   149,   155,   165,
     169,   175,   188,   194,   200,   208,   218,   222,   228,   236,
     246,   251,   262,   278,   289,   290,   296,   302,   307,   311,
     312,   318,   324,   330,   336,   342,   356,   372,   389,   393,
     397,   398,   402,   406,   410,   420,   427,   434,   441,   448,
     454,   459,   464,   469,   477,   481,   487,   491,   495,   498,
     501,   507,   513,   519,   524,   530,   536,   542,   545,   548,
     551,   556,   557,   558,   559,   560,   561,   562
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "RETURN",
  "T_CHAR", "T_INT", "T_STRING", "T_BOOL", "T_INT_POINTER",
  "T_CHAR_POINTER", "T_VOID", "PRINTF", "SCANF", "LOP_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MOD_ASSIGN", "DIV_ASSIGN", "MUL_ASSIGN",
  "SEMICOLON", "COMMA", "POINT", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING",
  "LOP_EQ", "GREAT", "LESS", "GREAT_EQ", "LESS_EQ", "NOT_EQ", "ADD", "SUB",
  "MUL", "DIV", "MOD", "OR", "AND", "NOT", "NEG", "POS", "SELF_INC",
  "SELF_DEC", "SELF_INC_R", "SELF_DEC_R", "SELF_INC_L", "SELF_DEC_L",
  "GET_ADDRESS", "GET_VALUE", "$accept", "program", "statements",
  "statement", "return", "for", "function_decl", "function_def",
  "function_use", "params", "param", "printf", "scanf", "address_idlist",
  "get_address_id", "while", "block", "if_else", "bool_statements",
  "bool_statement", "declaration", "assigns", "assign", "eq_assigns",
  "eq_assign", "opassign", "idlist", "exprs", "expr", "T", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     184,   -15,     1,    10,    44,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,    16,    36,  -149,    99,    11,    -9,    50,    93,
     184,  -149,    78,  -149,    97,  -149,    98,   100,   121,  -149,
    -149,  -149,   127,   128,   133,    86,    44,    44,   247,    44,
     160,  -149,  -149,  -149,   210,   210,    44,  -149,    19,    95,
      96,   -22,   137,  -149,   152,   210,   210,   210,   210,   210,
     210,    12,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,    -2,   178,  -149,   179,
      23,   219,    68,    44,   181,   176,    76,   174,   210,  -149,
    -149,  -149,    44,    44,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,  -149,   -11,    42,   185,  -149,
     219,   219,   219,   219,   219,   219,  -149,    59,   214,   183,
     207,   180,   180,    -3,    44,   194,  -149,  -149,   174,   191,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,    28,    28,  -149,
    -149,  -149,   210,  -149,  -149,   186,  -149,   180,    65,  -149,
     235,   194,  -149,  -149,   264,  -149,    94,    -1,   122,   219,
     237,   145,  -149,  -149,   221,   180,  -149,   180,   159,   147,
    -149,  -149,  -149,    94,   210,  -149,  -149,   186,  -149,  -149,
    -149,  -149,    94,   180,   161,   219,  -149,  -149,  -149,   180,
    -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    92,    91,    95,    93,    96,
      97,    94,     0,     0,     5,     0,     0,     0,     0,     0,
       2,     3,     0,    15,     0,    13,     0,     0,     0,     9,
      18,     8,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,     0,     0,     0,    78,    20,    48,
      49,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    71,    70,     1,     4,    17,    12,
      14,    10,    11,     6,     7,    16,    75,    56,    63,    57,
       0,    49,     0,     0,     0,     0,     0,    49,     0,    83,
      82,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,     0,    40,
      64,    65,    66,    69,    68,    67,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    44,    79,     0,    46,
      45,    54,    50,    51,    52,    53,    55,    80,    81,    84,
      85,    86,     0,    32,    34,     0,    27,    23,     0,    30,
       0,     0,    62,    74,    43,    39,     0,     0,     0,    77,
       0,     0,    37,    26,     0,    24,    31,     0,     0,     0,
      59,    61,    60,     0,     0,    33,    38,     0,    35,    29,
      25,    42,     0,     0,     0,    76,    36,    58,    22,     0,
      21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   256,   -16,  -149,  -149,  -149,  -149,     6,  -149,
     108,  -149,  -149,  -149,   101,  -149,  -104,  -149,   -34,   153,
     236,   102,    91,  -149,   -28,  -148,   -42,  -149,    -4,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,    25,    47,   148,
     149,    27,    28,   161,   162,    29,    30,    31,    48,    49,
      32,   169,   170,    77,    33,    34,    79,   158,    81,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    85,    80,    82,    67,    86,    26,    78,   172,   107,
     105,    36,    91,   142,   106,    55,   143,   154,   155,   117,
     156,    26,   173,    64,   118,   172,    26,    37,    55,    56,
      57,    58,    59,    60,   172,    87,    38,    61,    67,   116,
      89,    90,    51,   163,   105,    92,    93,    92,    93,   123,
     121,   110,   111,   112,   113,   114,   115,    78,   129,   130,
      26,   180,    52,   181,    62,    63,   120,    92,    93,   144,
      39,    92,    93,   102,   103,   104,    40,    41,    42,   188,
      43,   150,    65,   120,   128,   190,   146,    44,    45,   164,
     157,   152,   165,    66,    46,   122,   137,   138,   139,   140,
     141,    68,     1,   126,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    92,    93,    76,   -19,
      69,    70,    14,    71,    92,    93,   168,   150,   171,    15,
      53,    16,    94,    95,    96,    97,    98,    99,   159,   100,
     101,   102,   103,   104,    72,   171,   174,    17,    18,   175,
      73,    74,    17,    18,   171,     1,    75,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   177,
     185,   182,   178,   108,   183,    14,    55,    56,    57,    58,
      59,    60,    15,   109,    16,   182,    61,     1,   189,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   127,   119,   120,   124,    17,    18,    14,   125,   145,
      15,    55,    62,    63,    15,   151,    16,   100,   101,   102,
     103,   104,     5,     6,     7,     8,     9,    10,    11,     5,
       6,     7,     8,     9,    10,    11,    88,    17,    18,   153,
      93,   147,    40,    41,    42,   160,    43,   131,   132,   133,
     134,   135,   136,    44,    45,     5,     6,     7,     8,     9,
      10,    11,   100,   101,   102,   103,   104,   166,   167,   176,
      83,    54,   179,   187,    84,   184,     0,     0,   186
};

static const yytype_int16 yycheck[] =
{
       4,    38,    36,    37,    20,    39,     0,    35,   156,    51,
      32,    26,    46,    24,    36,    17,    27,   121,   122,    61,
      23,    15,    23,    32,    26,   173,    20,    26,    17,    18,
      19,    20,    21,    22,   182,    39,    26,    26,    54,    27,
      44,    45,    26,   147,    32,    48,    49,    48,    49,    83,
      27,    55,    56,    57,    58,    59,    60,    85,    92,    93,
      54,   165,    26,   167,    53,    54,    24,    48,    49,    27,
      26,    48,    49,    45,    46,    47,    32,    33,    34,   183,
      36,   118,    32,    24,    88,   189,    27,    43,    44,    24,
     124,   119,    27,     0,    50,    27,   100,   101,   102,   103,
     104,    23,     3,    27,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    48,    49,    32,    23,
      23,    23,    23,    23,    48,    49,    32,   164,   156,    30,
      31,    32,    37,    38,    39,    40,    41,    42,   142,    43,
      44,    45,    46,    47,    23,   173,    24,    53,    54,    27,
      23,    23,    53,    54,   182,     3,    23,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    24,
     174,    24,    27,    36,    27,    23,    17,    18,    19,    20,
      21,    22,    30,    31,    32,    24,    26,     3,    27,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    27,    24,    24,    23,    53,    54,    23,    32,    24,
      30,    17,    53,    54,    30,    32,    32,    43,    44,    45,
      46,    47,     8,     9,    10,    11,    12,    13,    14,     8,
       9,    10,    11,    12,    13,    14,    26,    53,    54,    32,
      49,    27,    32,    33,    34,    59,    36,    94,    95,    96,
      97,    98,    99,    43,    44,     8,     9,    10,    11,    12,
      13,    14,    43,    44,    45,    46,    47,    32,     4,    32,
      23,    15,   164,   182,    38,   173,    -1,    -1,   177
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    23,    30,    32,    53,    54,    62,
      63,    64,    65,    66,    67,    68,    69,    72,    73,    76,
      77,    78,    81,    85,    86,    90,    26,    26,    26,    26,
      32,    33,    34,    36,    43,    44,    50,    69,    79,    80,
      89,    26,    26,    31,    63,    17,    18,    19,    20,    21,
      22,    26,    53,    54,    32,    32,     0,    64,    23,    23,
      23,    23,    23,    23,    23,    23,    32,    84,    85,    87,
      79,    89,    79,    23,    81,    90,    79,    89,    26,    89,
      89,    79,    48,    49,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    32,    36,    87,    36,    31,
      89,    89,    89,    89,    89,    89,    27,    87,    26,    24,
      24,    27,    27,    79,    23,    32,    27,    27,    89,    79,
      79,    80,    80,    80,    80,    80,    80,    89,    89,    89,
      89,    89,    24,    27,    27,    24,    27,    27,    70,    71,
      90,    32,    85,    32,    77,    77,    23,    79,    88,    89,
      59,    74,    75,    77,    24,    27,    32,     4,    32,    82,
      83,    85,    86,    23,    24,    27,    32,    24,    27,    71,
      77,    77,    24,    27,    82,    89,    75,    83,    77,    27,
      77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    72,    72,    72,    73,    74,    74,    75,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     1,
       2,     2,     2,     1,     2,     1,     2,     2,     1,     2,
       2,     9,     8,     4,     5,     6,     5,     4,     3,     3,
       1,     2,     4,     6,     4,     6,     3,     1,     2,     5,
       3,     2,     7,     5,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     1,     3,     1,     1,     3,
       3,     3,     2,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
#line 42 "src/main.y" /* yacc.c:1646  */
    {root = new TreeNode(0, NODE_PROG); root->addChild((yyvsp[0]));}
#line 1419 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1425 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]); (yyval)->addSibling((yyvsp[0]));}
#line 1431 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_STMT); (yyval)->stype = STMT_SKIP;}
#line 1437 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1443 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1449 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1455 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1461 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1467 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1473 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1479 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1485 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1491 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1497 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1503 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1509 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1515 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 68 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_RET;
    (yyval)->addChild((yyvsp[0]));
}
#line 1525 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_RET;
    (yyval)->addChild((yyvsp[0]));
}
#line 1535 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_FOR;
    (yyval)->addChild((yyvsp[-6]));
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1548 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 91 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_FOR;
    TreeNode* temp= new TreeNode(lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    (yyval)->addChild(temp);
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1563 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "src/main.y" /* yacc.c:1646  */
    {
    //函数声明
    (yyval)=new TreeNode ((yyvsp[-3])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DECL;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-2]));
    (yyvsp[-2])->var_func=1;
    (yyvsp[-2])->checktype=(yyvsp[-3])->checktype;
}
#line 1577 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 116 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-4])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DECL;
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
    (yyvsp[-3])->var_func=1;
    (yyvsp[-3])->checktype=(yyvsp[-4])->checktype;
}
#line 1591 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 127 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-5])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DEF;
    (yyval)->addChild((yyvsp[-5]));
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
    (yyvsp[-4])->var_func=1;
    (yyvsp[-4])->checktype=(yyvsp[-5])->checktype;
}
#line 1606 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-4])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DEF;
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[0]));
    (yyvsp[-3])->var_func=1;
    (yyvsp[-3])->checktype=(yyvsp[-4])->checktype;
}
#line 1620 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-3])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_USE;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1631 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 155 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_USE;
    (yyval)->addChild((yyvsp[-2]));
}
#line 1641 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 165 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1650 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 169 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 1658 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 175 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =new TreeNode (lineno,NODE_PARAM);
    (yyvsp[0])->checktype=(yyvsp[-1])->checktype;

    (yyval)->addChild((yyvsp[-1]));
    (yyval)->addChild((yyvsp[0]));
    
}
#line 1671 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 188 "src/main.y" /* yacc.c:1646  */
    {//print("123");
    //直接打印字符串
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1682 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1693 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 200 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1703 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 208 "src/main.y" /* yacc.c:1646  */
    {
    //直接打印字符串
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SCF;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1715 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1724 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 222 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 1732 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 228 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_EXPR);
    (yyval)->optype=OP_ADDR;
    (yyval)->addChild((yyvsp[0]));
}
#line 1742 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 236 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval)=node;
}
#line 1754 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 246 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_BLOCK;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1764 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 251 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_BLOCK;
    TreeNode* temp=new TreeNode (lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    (yyval)->addChild(temp);
}
#line 1776 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 262 "src/main.y" /* yacc.c:1646  */
    {//if(..) {..} else{..}
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_IF_ELSE;
    (yyval)->addChild((yyvsp[-4]));//bool表达式
    
    TreeNode * temp=new TreeNode((yyvsp[-2])->lineno,NODE_STMT); //if后执行的语句
    temp->stype=STMT_IF;
    temp->addChild((yyvsp[-2]));
    
    TreeNode * t=new TreeNode ((yyvsp[0])->lineno,NODE_STMT);//else后执行的语句
    t->stype=STMT_ELSE;
    t->addChild((yyvsp[0]));//else后执行的语句
    
    (yyval)->addChild(t);
    (yyval)->addChild(temp);
    }
#line 1797 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 278 "src/main.y" /* yacc.c:1646  */
    {
    //if (..) {..}
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild((yyvsp[-2]));//bool表达式
    node->addChild((yyvsp[0]));
    (yyval)=node;
}
#line 1810 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 289 "src/main.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);}
#line 1816 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 290 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_EXPR);
    (yyval)->optype=OP_AND;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1827 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 296 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_OR;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1838 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 302 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =new TreeNode((yyvsp[0])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NOT;
    (yyval)->addChild((yyvsp[0]));
}
#line 1848 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 307 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1854 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 311 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1860 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 312 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_GREAT;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1871 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 318 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_LESS;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1882 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 324 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_GREAT_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1893 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 330 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_LESS_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1904 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 336 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_EQUAL;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1915 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 342 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NOT_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1926 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 356 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_DEFINE;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;   
    for(TreeNode* t=(yyvsp[0])->child;t!=nullptr;t=t->sibling)
    {
        if(t->nodeType==NODE_VAR)
        {
            t->checktype=(yyvsp[-1])->checktype;
            t->var_func=0;
        }
    }

}
#line 1947 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 372 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)= new TreeNode(lineno, NODE_STMT);
    (yyval)->stype = STMT_DECL;
    (yyval)->addChild((yyvsp[-1]));
    (yyval)->addChild((yyvsp[0]));
    
    (yyvsp[0])->var_func=0;
    for(TreeNode* t=(yyvsp[0]);t!=nullptr;t=t->sibling)
    {
        t->checktype=(yyvsp[-1])->checktype;
    }
    //$2->checktype=$1->checktype;
}
#line 1965 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 389 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1974 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 393 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1980 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 397 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1986 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 398 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1992 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 402 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 2001 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 406 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2007 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 410 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2018 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 420 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_ADD_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2029 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 427 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_SUB_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2040 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 434 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_MUL_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2051 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 441 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_DIV_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2062 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 448 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_MOD_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2073 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 454 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_DEC_L;
    (yyval)->addChild((yyvsp[0]));
}
#line 2083 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 459 "src/main.y" /* yacc.c:1646  */
    {;
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_INC_L;
    (yyval)->addChild((yyvsp[0]));
}
#line 2093 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 464 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_INC_R;
    (yyval)->addChild((yyvsp[0]));
}
#line 2103 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 469 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_DEC_R;
    (yyval)->addChild((yyvsp[0]));
}
#line 2113 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 477 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 2122 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 481 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 2130 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 487 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 2139 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 491 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2145 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 495 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 2153 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 498 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)= (yyvsp[-1]);
}
#line 2161 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 501 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_ADD;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2172 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 507 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_SUB;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2183 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 513 "src/main.y" /* yacc.c:1646  */
    {
    
    (yyval)=new TreeNode((yyvsp[-1])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NEG;
    (yyval)->addChild((yyvsp[0]));
}
#line 2194 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 519 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-1])->lineno,NODE_EXPR);
    (yyval)->optype=OP_POS;
    (yyval)->addChild((yyvsp[0]));
}
#line 2204 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 524 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_MUL;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2215 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 530 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_DIV;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2226 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 536 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_MOD;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2237 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 542 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2245 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 545 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2253 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 548 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =(yyvsp[0]);
}
#line 2261 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 551 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2269 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 556 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_INT;(yyval)->checktype=Integer;}
#line 2275 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 557 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CHAR;(yyval)->checktype=Char;}
#line 2281 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 558 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_BOOL;(yyval)->checktype=Boolean;}
#line 2287 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 559 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_VOID;(yyval)->checktype=Void;}
#line 2293 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 560 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_STRING;(yyval)->checktype=String;}
#line 2299 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 561 "src/main.y" /* yacc.c:1646  */
    {(yyval)=new TreeNode(lineno,NODE_TYPE);(yyval)->type=TYPE_INT_POINTER;}
#line 2305 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 562 "src/main.y" /* yacc.c:1646  */
    {(yyval)=new TreeNode(lineno,NODE_TYPE);(yyval)->type=TYPE_CHAR_POINTER;}
#line 2311 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2315 "src/main.tab.cpp" /* yacc.c:1646  */
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
#line 565 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}