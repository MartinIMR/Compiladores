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
#line 1 "pr.y" /* yacc.c:339  */

#include "def.h"
#include "cadenas.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern int yylex(void);
int yyerror(char *); 
struct simbolo * tabla = NULL;


#line 78 "pr.tab.c" /* yacc.c:339  */

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
   by #include "pr.tab.h".  */
#ifndef YY_YY_PR_TAB_H_INCLUDED
# define YY_YY_PR_TAB_H_INCLUDED
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
    CADENA = 258,
    ENTERO = 259,
    REAL = 260,
    VAR = 261,
    ID = 262,
    POW = 263,
    SI = 264
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "pr.y" /* yacc.c:355  */

 int entero;
 double real;
 char * cadena;
 struct simbolo * sptr;

#line 135 "pr.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 152 "pr.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   264

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      19,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      17,    18,    14,    12,    22,    13,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
      10,    21,    11,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    16,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    44,    47,    48,    49,    50,    51,    52,
      56,    60,    64,    68,    72,    76,    80,    87,   126,   137,
     159,   177,   194,   200,   215,   230,   245,   276,   283,   284,
     292,   296,   297,   298,   299,   308,   318,   327,   336,   345,
     354,   363,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   399,   400,   401,   402,   403,
     404,   405,   406,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CADENA", "ENTERO", "REAL", "VAR", "ID",
  "POW", "SI", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'^'", "'('",
  "')'", "'\\n'", "';'", "'='", "','", "$accept", "entrada", "linea",
  "operacion_variable", "expresion_variable", "expresion_cadena",
  "expresion_real", "expresion_entero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      60,    62,    43,    45,    42,    47,    94,    40,    41,    10,
      59,    61,    44
};
# endif

#define YYPACT_NINF -15

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-15)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    91,   -15,   -15,   -15,   -15,    45,    -3,    -5,    20,
     165,   183,   165,   -15,   -15,     0,     8,   -11,   244,   252,
      30,   -15,    50,   -14,   189,   189,    31,    58,    73,   189,
     165,   189,    58,    73,   163,   290,   297,   -15,   -15,   165,
     189,   138,   -15,   165,   165,   189,   189,   189,   -15,   165,
     165,   189,   189,   189,   -15,   -15,    48,    61,    89,   195,
     206,   -15,   165,   189,    19,    64,   278,   285,     1,   189,
     189,   189,   189,    31,   -15,   -15,   -15,    31,    58,   260,
      58,   268,    94,   138,   138,   138,   100,    31,    58,    73,
      31,    58,    73,   113,   121,   113,   121,   -15,   -15,    10,
      58,    73,   111,    58,    73,   113,   121,   113,   121,   -15,
     -15,   -15,   -15,   -15,   -15,   128,   226,   235,   189,   189,
     189,   189,   189,   189,     1,   103,     1,   -15,   -15,   138,
      76,    76,   211,   138,   138,   138,   138,   -15,   -15,   -15,
     -15,   -15,   304,   311,   318,   325,   332,   339,   346,   353,
     360,   367,   374,   381,     1,     3,    76,    76,   125,   -15,
     127,   129,   132,   136,   142,   152,   160,   170,   172,   178,
     179,   184,   138,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   388
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    28,    65,    42,     0,     0,     0,     0,
       0,     0,     0,     4,     3,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,    31,    59,    71,     0,
       0,     0,    60,    72,     0,     0,     0,    27,     6,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     8,    17,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    64,    73,    29,     9,     0,
      11,     0,     0,     0,     0,     0,    30,    10,    43,    44,
      12,    46,    47,    49,    50,    52,    54,    58,    57,     0,
      45,    66,     0,    48,    67,    51,    68,    55,    53,    56,
      69,    26,    19,    21,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    15,     0,
      71,    72,     0,     0,     0,     0,     0,    14,    16,    23,
      25,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    61,    70,    36,    35,    40,
      39,    34,    37,    38,    41,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -15,   -15,   -15,   181,   -15,    63,   114,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    14,    15,    16,    26,    32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    39,    40,    23,     3,    41,    61,    62,    42,    28,
       9,    36,    24,   124,   125,   133,   134,   135,   126,   136,
      37,    60,    68,    65,    67,   172,    41,    38,    28,   137,
      36,    69,    70,    45,    46,    47,    55,    25,    79,    81,
      86,   118,    89,    92,    94,    96,    98,    41,   101,   104,
     106,   108,   110,     3,     4,     5,    56,    20,     8,     9,
      20,   117,    10,    11,    17,    21,    22,    12,    89,    92,
     101,   104,    45,    46,    47,    34,    71,    72,    51,    52,
      53,   111,   130,   131,   132,    58,   119,    51,    52,    53,
     135,     2,   136,    73,     3,     4,     5,     6,     7,     8,
       9,    68,    77,    10,    11,    41,    87,    90,    12,   112,
      13,   129,    99,   102,   135,    18,   154,   143,   145,   147,
     149,   151,   153,    68,    27,   115,    35,    41,   155,    47,
     138,    77,   156,   157,   158,   159,    59,    53,    64,    66,
      68,   136,     4,    27,    41,    35,    82,   173,   139,   174,
      83,    84,   175,    78,    80,    85,   176,    88,    91,    93,
      95,    97,   177,   100,   103,   105,   107,   109,     3,     4,
       5,   185,   178,     8,     9,    68,   116,    10,    11,    41,
     179,    74,    12,    88,    91,   100,   103,     4,     5,    34,
     180,     8,   181,     4,     5,    29,    30,     8,   182,   183,
      31,    29,    63,    57,   184,     0,    31,    69,    70,    45,
      46,    47,     0,     0,     0,   113,     0,    73,    71,    72,
      51,    52,    53,   133,   134,   135,   114,   136,     0,    76,
       0,     0,   142,   144,   146,   148,   150,   152,    69,    70,
      45,    46,    47,     0,     0,     0,   140,    71,    72,    51,
      52,    53,     0,     0,     0,   141,    43,    44,    45,    46,
      47,     0,     0,    48,    49,    50,    51,    52,    53,     0,
       0,    54,    71,    72,    51,    52,    53,     0,     0,   127,
      71,    72,    51,    52,    53,     0,     0,   128,   120,   121,
      69,    70,    45,    46,    47,   122,   123,    71,    72,    51,
      52,    53,    69,    70,    45,    46,    47,     0,    75,    71,
      72,    51,    52,    53,     0,    76,    69,    70,    45,    46,
      47,     0,   160,    71,    72,    51,    52,    53,     0,   161,
      69,    70,    45,    46,    47,     0,   162,    71,    72,    51,
      52,    53,     0,   163,    69,    70,    45,    46,    47,     0,
     164,    71,    72,    51,    52,    53,     0,   165,    69,    70,
      45,    46,    47,     0,   166,    71,    72,    51,    52,    53,
       0,   167,    69,    70,    45,    46,    47,     0,   168,    71,
      72,    51,    52,    53,     0,   169,    69,    70,    45,    46,
      47,     0,   170,    71,    72,    51,    52,    53,     0,   171,
     133,   134,   135,     0,   136,     0,   163
};

static const yytype_int16 yycheck[] =
{
       1,    12,    13,     6,     3,    16,    20,    21,    19,    10,
       9,    12,    17,    12,    13,    12,    13,    14,    17,    16,
      20,    22,    12,    24,    25,    22,    16,    19,    29,    19,
      31,    12,    13,    14,    15,    16,     6,    17,    39,    40,
      41,    22,    43,    44,    45,    46,    47,    16,    49,    50,
      51,    52,    53,     3,     4,     5,     6,    12,     8,     9,
      12,    62,    12,    13,     1,    20,    21,    17,    69,    70,
      71,    72,    14,    15,    16,    12,    12,    13,    14,    15,
      16,    20,    83,    84,    85,    22,    22,    14,    15,    16,
      14,     0,    16,    30,     3,     4,     5,     6,     7,     8,
       9,    12,    39,    12,    13,    16,    43,    44,    17,    20,
      19,    17,    49,    50,    14,     1,    13,   118,   119,   120,
     121,   122,   123,    12,    10,    62,    12,    16,   129,    16,
      19,    68,   133,   134,   135,   136,    22,    16,    24,    25,
      12,    16,     4,    29,    16,    31,     8,    20,    20,    20,
      12,    13,    20,    39,    40,    17,    20,    43,    44,    45,
      46,    47,    20,    49,    50,    51,    52,    53,     3,     4,
       5,   172,    20,     8,     9,    12,    62,    12,    13,    16,
      20,    18,    17,    69,    70,    71,    72,     4,     5,   126,
      20,     8,    20,     4,     5,    12,    13,     8,    20,    20,
      17,    12,    13,    22,    20,    -1,    17,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    -1,   154,    12,    13,
      14,    15,    16,    12,    13,    14,    20,    16,    -1,    18,
      -1,    -1,   118,   119,   120,   121,   122,   123,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    12,    13,    14,    15,
      16,    -1,    -1,    19,    12,    13,    14,    15,    16,    -1,
      -1,    19,    12,    13,    14,    15,    16,    -1,    -1,    19,
      12,    13,    14,    15,    16,    -1,    -1,    19,    10,    11,
      12,    13,    14,    15,    16,    10,    11,    12,    13,    14,
      15,    16,    12,    13,    14,    15,    16,    -1,    18,    12,
      13,    14,    15,    16,    -1,    18,    12,    13,    14,    15,
      16,    -1,    18,    12,    13,    14,    15,    16,    -1,    18,
      12,    13,    14,    15,    16,    -1,    18,    12,    13,    14,
      15,    16,    -1,    18,    12,    13,    14,    15,    16,    -1,
      18,    12,    13,    14,    15,    16,    -1,    18,    12,    13,
      14,    15,    16,    -1,    18,    12,    13,    14,    15,    16,
      -1,    18,    12,    13,    14,    15,    16,    -1,    18,    12,
      13,    14,    15,    16,    -1,    18,    12,    13,    14,    15,
      16,    -1,    18,    12,    13,    14,    15,    16,    -1,    18,
      12,    13,    14,    -1,    16,    -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,     0,     3,     4,     5,     6,     7,     8,     9,
      12,    13,    17,    19,    25,    26,    27,    28,    29,    30,
      12,    20,    21,     6,    17,    17,    28,    29,    30,    12,
      13,    17,    29,    30,    28,    29,    30,    20,    19,    12,
      13,    16,    19,    12,    13,    14,    15,    16,    19,    12,
      13,    14,    15,    16,    19,     6,     6,    26,    28,    29,
      30,    20,    21,    13,    29,    30,    29,    30,    12,    12,
      13,    12,    13,    28,    18,    18,    18,    28,    29,    30,
      29,    30,     8,    12,    13,    17,    30,    28,    29,    30,
      28,    29,    30,    29,    30,    29,    30,    29,    30,    28,
      29,    30,    28,    29,    30,    29,    30,    29,    30,    29,
      30,    20,    20,    20,    20,    28,    29,    30,    22,    22,
      10,    11,    10,    11,    12,    13,    17,    19,    19,    17,
      30,    30,    30,    12,    13,    14,    16,    19,    19,    20,
      20,    20,    29,    30,    29,    30,    29,    30,    29,    30,
      29,    30,    29,    30,    13,    30,    30,    30,    30,    30,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    22,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    23,    24,    24,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    26,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    30,    30,    30,    30,    30,
      30,    30,    30,    30
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     4,     4,     4,     4,     3,     2,     4,
       4,     4,     3,     5,     5,     5,     4,     2,     1,     3,
       3,     2,     3,     3,     7,     7,     7,     7,     7,     7,
       7,     7,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     7,     7,     7,     3,     1,     3,     3,     3,     3,
       7,     2,     2,     3
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
        case 5:
#line 48 "pr.y" /* yacc.c:1646  */
    { printf("La cadena es:%s\n",(yyvsp[-1].cadena)); free((yyvsp[-1].cadena)); }
#line 1378 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "pr.y" /* yacc.c:1646  */
    { printf("OK\n"); }
#line 1384 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "pr.y" /* yacc.c:1646  */
    { printf("El resultado(real) es:%f\n",(yyvsp[-1].real)); }
#line 1390 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "pr.y" /* yacc.c:1646  */
    { printf("El resultado(entero) es:%d\n",(yyvsp[-1].entero)); }
#line 1396 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "pr.y" /* yacc.c:1646  */
    { 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[-2].cadena),(yyvsp[0].real)); 
	}
#line 1404 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[0].cadena),(yyvsp[-2].real)); 
	}
#line 1412 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "pr.y" /* yacc.c:1646  */
    { 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[-2].cadena),(-(yyvsp[0].real))); 
	}
#line 1420 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[0].cadena),(-(yyvsp[-2].real))); 
	}
#line 1428 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 69 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-3].cadena),(yyvsp[-1].entero)); 
	}
#line 1436 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-1].cadena),(yyvsp[-3].entero)); 
	}
#line 1444 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-3].cadena),(-(yyvsp[-1].entero))); 
	}
#line 1452 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 81 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-1].cadena),(-(yyvsp[-3].entero))); 
	}
#line 1460 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo((yyvsp[-2].cadena));
	  struct simbolo * op2 = buscar_simbolo((yyvsp[0].cadena));
	  if( op1 == NULL || op2 == NULL)
	  {
	     printf("Una de las variables no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	  int t1 = op1->tipo, t2 = op2->tipo;
	    if( t1 == t2 )
	    {
	       switch(t1)
	       {
		 case 0:
		 resultado = agregar_simbolo("Resultado",0);
		 resultado->valor.v_entero = op1->valor.v_entero + op2->valor.v_entero;
		 break;
		 case 1:
		 resultado = agregar_simbolo("Resultado",1);
		 resultado->valor.v_real = op1->valor.v_real + op2->valor.v_real;
		 break;
		 case 2:
		 resultado = agregar_simbolo("Resultado",2);
		 resultado->valor.v_cadena = concatenar(op1->valor.v_cadena,op2->valor.v_cadena);
		 break;
	       }
	       resultado->siguiente = NULL;
	    }else
	    {
		printf("En construccion...\n");
		resultado == NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1502 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-1].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa varible no esta declarada...\n");
	  }else{
	    imprimir_simbolo(encontrado);    
	  }
	  (yyval.sptr) = encontrado;
	}
#line 1517 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo != 2)
	    {
	      printf("La asignacion no se puede realizar...\n");

	    }else
	    {
		if(encontrado->valor.v_cadena != NULL)
		{
		  free(encontrado->valor.v_cadena);
		}
		encontrado->valor.v_cadena = copiar_cadena((yyvsp[-1].cadena));	
            }
	  }
	  (yyval.sptr) = encontrado;
	}
#line 1544 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo != 0)
	    {
	      printf("La asignacion no se puede realizar...\n");

	    }else
	    {
		encontrado->valor.v_entero = (yyvsp[-1].entero);
            }
	  }
	  (yyval.sptr) = encontrado;
	}
#line 1567 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 177 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo != 1)
	    {
	      printf("La asignacion no se puede realizar...\n");
	    }else
	    {
		encontrado->valor.v_real = (yyvsp[-1].real);
            }
	  }
	  (yyval.sptr) = encontrado;
	}
#line 1589 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 194 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-1].cadena),(yyvsp[-2].entero));
	 tabla->siguiente = anterior;
	 (yyval.sptr) = tabla;
	}
#line 1600 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 200 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	 tabla -> siguiente = anterior;
	 if(tabla->tipo != 2)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }else
	 {
	   tabla->valor.v_cadena = (yyvsp[-1].cadena);
	 }
	 (yyval.sptr) = tabla;
	}
#line 1620 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 215 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	 tabla -> siguiente = anterior;
	 if(tabla->tipo != 0)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }else
	 {
	   tabla->valor.v_entero = (yyvsp[-1].entero);
	 }
	 (yyval.sptr) = tabla;
	}
#line 1640 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	 tabla -> siguiente = anterior;
	 if(tabla->tipo != 1)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }else
	 {
	   tabla->valor.v_real = (yyvsp[-1].real);
	 }
	 (yyval.sptr) = tabla;
	}
#line 1660 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    struct simbolo * resultado = (yyvsp[-1].sptr);
	    if(encontrado->tipo != resultado->tipo )
	    {
	      printf("La asignacion no se puede realizar...\n");
	    }else
	    {
		switch(encontrado->tipo)
		{
		  case 0:
		  encontrado->valor.v_entero = resultado->valor.v_entero;
		  break;
		  case 1:
		  encontrado->valor.v_real = resultado->valor.v_real;
		  break;
		  case 2:
		  encontrado->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
		  free(resultado->valor.v_cadena);
		  break;
		}
		free(resultado);
            }
	  }
	  (yyval.sptr) = encontrado;
	}
#line 1696 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 276 "pr.y" /* yacc.c:1646  */
    {
	  imprimir_simbolo((yyvsp[-1].sptr));
	  free((yyvsp[-1].sptr));
	}
#line 1705 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 283 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 1711 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 285 "pr.y" /* yacc.c:1646  */
    { 
	   char * s1 = (yyvsp[-2].cadena);
	   char * s2 = (yyvsp[0].cadena);
	   (yyval.cadena) = concatenar(s1,s2);
	   free(s1);
           free(s2);
	 }
#line 1723 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 293 "pr.y" /* yacc.c:1646  */
    { 
          (yyval.cadena) = potencia_cadena((yyvsp[-2].cadena),(yyvsp[0].entero)); 
	}
#line 1731 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 296 "pr.y" /* yacc.c:1646  */
    {(yyval.cadena) = (yyvsp[0].cadena);}
#line 1737 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 297 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 1743 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 298 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[-1].cadena); }
#line 1749 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 299 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) < (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1763 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 308 "pr.y" /* yacc.c:1646  */
    { 
	 char * resultado;
	 if((yyvsp[-4].real) < (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;

	}
#line 1778 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 318 "pr.y" /* yacc.c:1646  */
    {
	char * resultado;
	 if((yyvsp[-4].real) < (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1792 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 327 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) < (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1806 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 336 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) > (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1820 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 345 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].real) > (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1834 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 354 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].real) > (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1848 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 363 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) > (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 1862 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 374 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 1868 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 375 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) + (yyvsp[0].real); }
#line 1874 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 376 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) + (yyvsp[0].entero); }
#line 1880 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 377 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) + (yyvsp[0].real); }
#line 1886 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 378 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) - (yyvsp[0].real); }
#line 1892 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 379 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) - (yyvsp[0].entero); }
#line 1898 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 380 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) - (yyvsp[0].real); }
#line 1904 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 381 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) * (yyvsp[0].real); }
#line 1910 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 382 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) * (yyvsp[0].entero); }
#line 1916 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 383 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) * (yyvsp[0].real); }
#line 1922 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 384 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) / (yyvsp[0].real); }
#line 1928 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 385 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (double)(yyvsp[-2].entero) / (yyvsp[0].entero); }
#line 1934 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 386 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) / (yyvsp[0].entero); }
#line 1940 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 387 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) / (yyvsp[0].real); }
#line 1946 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 388 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].entero),(yyvsp[0].real)); }
#line 1952 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 389 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].real),(yyvsp[0].entero)); }
#line 1958 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 390 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].real),(yyvsp[0].real)); }
#line 1964 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 391 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 1970 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 392 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (-(yyvsp[0].real)); }
#line 1976 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 393 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-4].entero),(yyvsp[-2].real));  }
#line 1982 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 394 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-4].real),(yyvsp[-2].real));  }
#line 1988 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 395 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-4].real),(yyvsp[-2].entero));  }
#line 1994 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 396 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-1].real); }
#line 2000 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 399 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 2006 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 400 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero); }
#line 2012 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 401 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero); }
#line 2018 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 402 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero); }
#line 2024 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 403 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (int) pow((yyvsp[-2].entero),(yyvsp[0].entero)); }
#line 2030 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 404 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (int) pow((yyvsp[-4].entero),(yyvsp[-2].entero));  }
#line 2036 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 405 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 2042 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 406 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (-(yyvsp[0].entero)); }
#line 2048 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 407 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-1].entero); }
#line 2054 "pr.tab.c" /* yacc.c:1646  */
    break;


#line 2058 "pr.tab.c" /* yacc.c:1646  */
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
#line 410 "pr.y" /* yacc.c:1906  */
 

int
main(void)
{
  yyparse();
}

int
yyerror(char *s)
{
 printf("Error:----%s----\n",s);
}
