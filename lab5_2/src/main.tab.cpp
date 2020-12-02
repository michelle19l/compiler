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
    PRINTF = 269,
    SCANF = 270,
    LOP_ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    MOD_ASSIGN = 274,
    DIV_ASSIGN = 275,
    MUL_ASSIGN = 276,
    SEMICOLON = 277,
    COMMA = 278,
    POINT = 279,
    LPAREN = 280,
    RPAREN = 281,
    LBRACK = 282,
    RBRACK = 283,
    LBRACE = 284,
    RBRACE = 285,
    IDENTIFIER = 286,
    INTEGER = 287,
    CHAR = 288,
    BOOL = 289,
    STRING = 290,
    LOP_EQ = 291,
    GREAT = 292,
    LESS = 293,
    GREAT_EQ = 294,
    LESS_EQ = 295,
    NOT_EQ = 296,
    ADD = 297,
    SUB = 298,
    MUL = 299,
    DIV = 300,
    MOD = 301,
    OR = 302,
    AND = 303,
    NOT = 304,
    NEG = 305,
    POS = 306,
    SELF_INC = 307,
    SELF_DEC = 308,
    SELF_INC_R = 309,
    SELF_DEC_R = 310,
    SELF_INC_L = 311,
    SELF_DEC_L = 312,
    GET_ADDRESS = 313,
    GET_VALUE = 314
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

#line 186 "src/main.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    46,    47,    51,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      71,    76,    86,    94,   110,   117,   126,   136,   142,   150,
     154,   160,   171,   178,   184,   192,   202,   206,   212,   220,
     230,   235,   246,   262,   275,   276,   282,   288,   293,   297,
     298,   304,   310,   316,   322,   328,   342,   349,   359,   363,
     367,   368,   372,   376,   380,   390,   397,   404,   411,   418,
     424,   429,   434,   439,   447,   451,   457,   461,   465,   468,
     474,   480,   486,   491,   497,   503,   509,   512,   515,   518,
     523,   524,   525,   526,   527,   528
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "RETURN",
  "T_CHAR", "T_INT", "T_STRING", "T_BOOL", "T_INT_POINTER",
  "T_CHAR_POINTER", "PRINTF", "SCANF", "LOP_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MOD_ASSIGN", "DIV_ASSIGN", "MUL_ASSIGN", "SEMICOLON",
  "COMMA", "POINT", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE",
  "RBRACE", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING", "LOP_EQ",
  "GREAT", "LESS", "GREAT_EQ", "LESS_EQ", "NOT_EQ", "ADD", "SUB", "MUL",
  "DIV", "MOD", "OR", "AND", "NOT", "NEG", "POS", "SELF_INC", "SELF_DEC",
  "SELF_INC_R", "SELF_DEC_R", "SELF_INC_L", "SELF_DEC_L", "GET_ADDRESS",
  "GET_VALUE", "$accept", "program", "statements", "statement", "return",
  "for", "function_decl", "function_def", "function_use", "params",
  "param", "printf", "scanf", "address_idlist", "get_address_id", "while",
  "block", "if_else", "bool_statements", "bool_statement", "declaration",
  "assigns", "assign", "eq_assigns", "eq_assign", "opassign", "idlist",
  "exprs", "expr", "T", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -147

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-147)))

#define YYTABLE_NINF -21

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     165,   -22,   -15,     0,   110,  -147,  -147,  -147,  -147,  -147,
    -147,     2,    13,  -147,   103,    12,   -10,    16,    61,   250,
    -147,    48,  -147,    85,  -147,   102,   104,   108,  -147,  -147,
    -147,   127,   129,   136,    31,   110,   110,   286,   110,  -147,
    -147,  -147,  -147,   244,   244,   110,     9,   145,    59,   -24,
      84,  -147,   192,   244,   244,   244,   244,   244,   244,    -7,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,   -11,   115,  -147,   138,    40,   195,
      43,   110,   193,   185,    45,   120,   244,  -147,  -147,  -147,
     110,   110,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,  -147,    -3,    49,   144,  -147,   195,   195,
     195,   195,   195,   195,  -147,    53,   280,   194,   211,   217,
     217,    26,   110,   231,  -147,  -147,   120,   200,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,   175,   175,  -147,  -147,  -147,
     244,  -147,  -147,   191,  -147,  -147,    97,  -147,   219,   231,
    -147,  -147,   103,   262,  -147,    69,    37,   105,   195,   223,
     114,  -147,   180,   217,  -147,   221,   217,    25,   124,  -147,
    -147,  -147,    69,   244,  -147,  -147,   191,  -147,  -147,  -147,
    -147,  -147,    69,   217,   134,   195,  -147,  -147,  -147,   217,
    -147
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    91,    90,    93,    92,    94,
      95,     0,     0,     7,     0,     0,     0,     0,     0,     2,
       3,     0,    17,     0,    15,     0,     0,     0,    11,     6,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,     0,     0,     0,    21,    48,    49,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    71,    70,     1,     4,    19,    14,    16,    12,
      13,     8,     9,    18,    75,    56,    63,    57,     0,    49,
       0,     0,     0,     0,     0,    49,     0,    82,    81,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,     5,    64,    65,
      66,    69,    68,    67,    28,     0,     0,     0,     0,     0,
       0,     0,     0,    75,    44,    78,     0,    46,    45,    54,
      50,    51,    52,    53,    55,    79,    80,    83,    84,    85,
       0,    32,    34,     0,    27,    24,     0,    30,     0,     0,
      62,    74,     0,    43,    39,     0,     0,     0,    77,     0,
       0,    37,     0,    25,    31,     0,     0,     0,     0,    59,
      61,    60,     0,     0,    33,    38,     0,    35,    29,    26,
      40,    42,     0,     0,     0,    76,    36,    58,    23,     0,
      22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,   -13,   -17,  -147,  -147,  -147,  -147,  -147,  -147,
     106,  -147,  -147,  -147,    91,  -147,  -103,  -147,   -23,   116,
     233,    99,    96,  -147,   -28,  -146,   -41,  -147,    -4,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,   146,
     147,    26,    27,   160,   161,    28,    29,    30,    46,    47,
      31,   168,   169,    75,    32,    33,    77,   157,    79,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    52,    65,    35,    83,    53,    76,   103,   105,   171,
      36,   104,    78,    80,   116,    84,   153,   154,   115,   114,
     140,    62,    89,   141,   103,    37,   171,    49,    53,    54,
      55,    56,    57,    58,    85,    65,   171,    59,    50,    87,
      88,    53,    54,    55,    56,    57,    58,    63,   155,   108,
     109,   110,   111,   112,   113,    76,    90,    91,   121,   172,
     179,    64,    74,   181,    60,    61,   119,   127,   128,   120,
      66,   124,   118,    90,    91,   142,   118,    60,    61,   144,
     188,   -20,   126,   148,    90,    91,   190,    90,    91,   150,
      90,    91,    90,    91,   135,   136,   137,   138,   139,   156,
     167,    98,    99,   100,   101,   102,     1,    67,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   106,
     162,    16,    17,   163,    68,    13,    69,   170,   173,   148,
      70,   174,    14,    51,    15,    38,   158,   176,   117,   165,
     177,    39,    40,    41,   170,    42,   125,   182,    65,    71,
     183,    72,    43,    44,   170,    16,    17,   182,    73,    45,
     189,   118,    98,    99,   100,   101,   102,   143,     1,   185,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    92,    93,    94,    95,    96,    97,    13,     5,     6,
       7,     8,     9,    10,    14,     1,    15,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   129,   130,
     131,   132,   133,   134,    13,   122,   123,    16,    17,   100,
     101,   102,   107,    15,     1,   149,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    98,    99,   100,
     101,   102,   151,    13,    16,    17,   152,    53,    91,   159,
     164,   180,    15,     1,   175,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   166,   186,   178,    86,
      82,   184,    13,    16,    17,    39,    40,    41,   187,    42,
       0,    15,     0,     0,     0,     0,    43,    44,     5,     6,
       7,     8,     9,    10,     5,     6,     7,     8,     9,    10,
       0,     0,    16,    17,     0,     0,   145,     0,    81
};

static const yytype_int16 yycheck[] =
{
       4,    14,    19,    25,    37,    16,    34,    31,    49,   155,
      25,    35,    35,    36,    25,    38,   119,   120,    59,    26,
      23,    31,    45,    26,    31,    25,   172,    25,    16,    17,
      18,    19,    20,    21,    38,    52,   182,    25,    25,    43,
      44,    16,    17,    18,    19,    20,    21,    31,    22,    53,
      54,    55,    56,    57,    58,    83,    47,    48,    81,    22,
     163,     0,    31,   166,    52,    53,    26,    90,    91,    26,
      22,    26,    23,    47,    48,    26,    23,    52,    53,    26,
     183,    22,    86,   116,    47,    48,   189,    47,    48,   117,
      47,    48,    47,    48,    98,    99,   100,   101,   102,   122,
      31,    42,    43,    44,    45,    46,     3,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    35,
      23,    52,    53,    26,    22,    22,    22,   155,    23,   162,
      22,    26,    29,    30,    31,    25,   140,    23,    23,   152,
      26,    31,    32,    33,   172,    35,    26,    23,   165,    22,
      26,    22,    42,    43,   182,    52,    53,    23,    22,    49,
      26,    23,    42,    43,    44,    45,    46,    23,     3,   173,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    36,    37,    38,    39,    40,    41,    22,     8,     9,
      10,    11,    12,    13,    29,     3,    31,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    92,    93,
      94,    95,    96,    97,    22,    22,    31,    52,    53,    44,
      45,    46,    30,    31,     3,    31,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    42,    43,    44,
      45,    46,    31,    22,    52,    53,    29,    16,    48,    58,
      31,    30,    31,     3,    31,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     4,   176,   162,    25,
      37,   172,    22,    52,    53,    31,    32,    33,   182,    35,
      -1,    31,    -1,    -1,    -1,    -1,    42,    43,     8,     9,
      10,    11,    12,    13,     8,     9,    10,    11,    12,    13,
      -1,    -1,    52,    53,    -1,    -1,    26,    -1,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    22,    29,    31,    52,    53,    61,    62,
      63,    64,    65,    66,    67,    68,    71,    72,    75,    76,
      77,    80,    84,    85,    89,    25,    25,    25,    25,    31,
      32,    33,    35,    42,    43,    49,    78,    79,    88,    25,
      25,    30,    62,    16,    17,    18,    19,    20,    21,    25,
      52,    53,    31,    31,     0,    63,    22,    22,    22,    22,
      22,    22,    22,    22,    31,    83,    84,    86,    78,    88,
      78,    22,    80,    89,    78,    88,    25,    88,    88,    78,
      47,    48,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    31,    35,    86,    35,    30,    88,    88,
      88,    88,    88,    88,    26,    86,    25,    23,    23,    26,
      26,    78,    22,    31,    26,    26,    88,    78,    78,    79,
      79,    79,    79,    79,    79,    88,    88,    88,    88,    88,
      23,    26,    26,    23,    26,    26,    69,    70,    89,    31,
      84,    31,    29,    76,    76,    22,    78,    87,    88,    58,
      73,    74,    23,    26,    31,    62,     4,    31,    81,    82,
      84,    85,    22,    23,    26,    31,    23,    26,    70,    76,
      30,    76,    23,    26,    81,    88,    74,    82,    76,    26,
      76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    68,    68,    69,
      69,    70,    71,    71,    71,    72,    73,    73,    74,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     9,     8,     4,     5,     6,     4,     3,     3,
       1,     2,     4,     6,     4,     6,     3,     1,     2,     5,
       3,     2,     7,     5,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     1,     3,     1,     3,     3,
       3,     2,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 1423 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1429 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]); (yyval)->addSibling((yyvsp[0]));}
#line 1435 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);
    //作用域
}
#line 1444 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1450 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_STMT); (yyval)->stype = STMT_SKIP;}
#line 1456 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1462 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1468 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1474 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1480 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1486 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1492 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1498 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1504 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1510 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1516 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1522 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1528 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_RET;
    (yyval)->addChild((yyvsp[0]));
}
#line 1538 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_RET;
    (yyval)->addChild((yyvsp[0]));
}
#line 1548 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_FOR;
    (yyval)->addChild((yyvsp[-6]));
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1561 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 94 "src/main.y" /* yacc.c:1646  */
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
#line 1576 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "src/main.y" /* yacc.c:1646  */
    {
    //函数声明
    (yyval)=new TreeNode ((yyvsp[-3])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DECL;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-2]));
}
#line 1588 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 117 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-4])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DECL;
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-3]));
    cout<<"params";(yyval)->addChild((yyvsp[-1]));
}
#line 1600 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-5])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_DEF;
    (yyval)->addChild((yyvsp[-5]));
    (yyval)->addChild((yyvsp[-4]));
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1613 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-3])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_USE;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1624 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 142 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_FUNC_USE;
    (yyval)->addChild((yyvsp[-2]));
}
#line 1634 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 150 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1643 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 1651 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 160 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =new TreeNode (lineno,NODE_PARAM);
    (yyval)->addChild((yyvsp[-1]));
    (yyval)->addChild((yyvsp[0]));
   
}
#line 1662 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "src/main.y" /* yacc.c:1646  */
    {//print("123");
    //直接打印字符串
    //cout<<"打印字符串"<<endl;
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1674 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1685 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 184 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_PRT;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1695 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 192 "src/main.y" /* yacc.c:1646  */
    {
    //直接打印字符串
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SCF;
    (yyval)->addChild((yyvsp[-3]));
    (yyval)->addChild((yyvsp[-1]));
}
#line 1707 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 202 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1716 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 206 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 1724 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 212 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_EXPR);
    (yyval)->optype=OP_ADDR;
    (yyval)->addChild((yyvsp[0]));
}
#line 1734 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 220 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval)=node;
}
#line 1746 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 230 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_BLOCK;
    (yyval)->addChild((yyvsp[-1]));
}
#line 1756 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 235 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_BLOCK;
    TreeNode* temp=new TreeNode (lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    (yyval)->addChild(temp);
}
#line 1768 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 246 "src/main.y" /* yacc.c:1646  */
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
#line 1789 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 262 "src/main.y" /* yacc.c:1646  */
    {
    //if (..) {..}
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild((yyvsp[-2]));//bool表达式
    TreeNode* temp=new TreeNode(lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    node->addChild(temp);//if后执行的语句
    (yyval)=node;
}
#line 1804 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 275 "src/main.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);}
#line 1810 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 276 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode(lineno,NODE_EXPR);
    (yyval)->optype=OP_AND;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1821 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 282 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode ((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_OR;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1832 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 288 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =new TreeNode((yyvsp[0])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NOT;
    (yyval)->addChild((yyvsp[0]));
}
#line 1842 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 293 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1848 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 297 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1854 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 298 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_GREAT;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1865 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 304 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_LESS;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1876 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 310 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_GREAT_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1887 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 316 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_LESS_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1898 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 322 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_EQUAL;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1909 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 328 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NOT_EQ;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1920 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 342 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_DEFINE;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;   
}
#line 1932 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 349 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)= new TreeNode(lineno, NODE_STMT);
    (yyval)->stype = STMT_DECL;
    (yyval)->addChild((yyvsp[-1]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1943 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 359 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1952 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 363 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1958 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 367 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1964 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 368 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1970 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 372 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 1979 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 376 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1985 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 380 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 1996 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 390 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_ADD_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2007 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 397 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_SUB_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2018 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 404 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_MUL_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2029 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 411 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_DIV_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2040 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 418 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode((yyvsp[-2])->lineno,NODE_STMT);
    (yyval)->stype=STMT_MOD_ASSIGN;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2051 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 424 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_DEC_L;
    (yyval)->addChild((yyvsp[0]));
}
#line 2061 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 429 "src/main.y" /* yacc.c:1646  */
    {;
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_INC_L;
    (yyval)->addChild((yyvsp[0]));
}
#line 2071 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 434 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_INC_R;
    (yyval)->addChild((yyvsp[0]));
}
#line 2081 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 439 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = new TreeNode(lineno,NODE_STMT);
    (yyval)->stype=STMT_SELF_DEC_R;
    (yyval)->addChild((yyvsp[0]));
}
#line 2091 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 447 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 2100 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 451 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
}
#line 2108 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 457 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-2]);
    (yyval)->addSibling((yyvsp[0]));
}
#line 2117 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 461 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2123 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 465 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)= (yyvsp[-1]);
}
#line 2131 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 468 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_ADD;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2142 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 474 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_SUB;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2153 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 480 "src/main.y" /* yacc.c:1646  */
    {
    cout<<"负数"<<endl;
    (yyval)=new TreeNode((yyvsp[-1])->lineno,NODE_EXPR);
    (yyval)->optype=OP_NEG;
    (yyval)->addChild((yyvsp[0]));
}
#line 2164 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 486 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-1])->lineno,NODE_EXPR);
    (yyval)->optype=OP_POS;
    (yyval)->addChild((yyvsp[0]));
}
#line 2174 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 491 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_MUL;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2185 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 497 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_DIV;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2196 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 503 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=new TreeNode((yyvsp[-2])->lineno,NODE_EXPR);
    (yyval)->optype=OP_MOD;
    (yyval)->addChild((yyvsp[-2]));
    (yyval)->addChild((yyvsp[0]));
}
#line 2207 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 509 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2215 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 512 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2223 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 515 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) =(yyvsp[0]);
}
#line 2231 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 518 "src/main.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
}
#line 2239 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 523 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_INT;}
#line 2245 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 524 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CHAR;}
#line 2251 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 525 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_BOOL;}
#line 2257 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 526 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_STRING;}
#line 2263 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 527 "src/main.y" /* yacc.c:1646  */
    {(yyval)=new TreeNode(lineno,NODE_TYPE);(yyval)->type=TYPE_INT_POINTER;}
#line 2269 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 528 "src/main.y" /* yacc.c:1646  */
    {(yyval)=new TreeNode(lineno,NODE_TYPE);(yyval)->type=TYPE_CHAR_POINTER;}
#line 2275 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2279 "src/main.tab.cpp" /* yacc.c:1646  */
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
#line 531 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
