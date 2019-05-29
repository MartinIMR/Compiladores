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
struct simbolo * operar_variables(struct simbolo *,struct simbolo *,int,int);

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
#define YYLAST   855

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

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
      17,    18,    14,    12,    20,    13,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
      10,    22,    11,     2,     2,     2,     2,     2,     2,     2,
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
      56,    60,    64,    68,    72,    76,    80,    87,    90,   115,
     140,   171,   193,   216,   245,   275,   302,   331,   357,   384,
     413,   443,   470,   499,   525,   552,   581,   611,   638,   667,
     693,   720,   749,   779,   806,   835,   861,   894,   924,   974,
     982,   992,  1000,  1010,  1027,  1046,  1065,  1076,  1099,  1124,
    1149,  1191,  1232,  1239,  1240,  1248,  1262,  1263,  1264,  1265,
    1277,  1334,  1394,  1403,  1413,  1422,  1431,  1440,  1449,  1458,
    1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1494,  1495,  1496,  1497,  1498,  1499,  1500,
    1501,  1502
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CADENA", "ENTERO", "REAL", "VAR", "ID",
  "POW", "SI", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'^'", "'('",
  "')'", "'\\n'", "','", "';'", "'='", "$accept", "entrada", "linea",
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
      44,    59,    61
};
# endif

#define YYPACT_NINF -29

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-29)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,    65,   -29,   -29,   -29,   -29,   204,     9,     6,    12,
     477,   169,   127,   -29,   -29,    13,    21,   665,   673,   681,
     142,   163,   264,   477,   232,   -29,   279,    23,   356,    82,
      14,   477,    35,   238,   364,    42,   285,   477,   285,   238,
     364,   387,   279,    58,   705,   712,   719,   -29,   -29,   404,
       0,    74,    87,   581,   -29,   420,   436,   491,   511,   285,
     -29,   451,   466,   521,   531,   285,   -29,   -29,    -9,   292,
     341,   -29,    -9,   292,   341,   -29,    -9,   292,   341,    -9,
     292,   341,    85,   232,    90,   232,    -9,   824,    95,   105,
     597,   607,   -29,   279,   102,    -2,   647,   656,    56,   829,
     324,   374,   477,    63,   726,   733,   232,   145,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,    35,   -29,
     111,   113,    30,    99,   -29,   541,   551,   -29,   561,   571,
     -29,   -29,    35,   238,   689,   -29,   238,   697,   -29,   -29,
     -29,   106,   145,   145,   145,   -29,   -29,    35,   238,   364,
     -29,    35,   238,   364,   -29,   121,   122,   -29,   121,   122,
     -29,   -29,   -29,    34,   238,   364,   -29,   144,   238,   364,
     -29,   121,   122,   -29,   121,   122,   -29,   -29,   232,   232,
     -29,   -29,   -29,   -29,   131,   617,   627,   637,   591,   145,
     285,   285,    82,    82,   285,   285,   285,   285,   -29,   -29,
     -29,   145,    10,    10,   185,   145,   145,   145,   145,   -29,
     -29,   -29,   -29,   -29,   -29,   143,   196,   307,   740,   747,
     754,   761,   152,   834,   839,   160,   768,   775,   782,   789,
     796,   803,   810,   817,    84,    10,    10,   167,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   158,   164,   194,   207,
     210,   212,   213,   215,   217,   221,   145,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   493
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    63,   103,    80,    49,     0,     0,     0,
       0,     0,     0,     4,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,    66,    97,   109,     0,     0,     0,     0,    98,
     110,     0,     0,     0,     0,     0,     0,    62,     6,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     8,    18,    21,    23,
      25,    19,    27,    29,    31,    20,    33,    35,    37,    39,
      41,    43,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    50,
       0,    51,     0,     0,    68,     0,     0,   102,     0,     0,
     111,    22,    64,     9,     0,    28,    11,     0,    34,    40,
      46,     0,     0,     0,     0,    65,    24,    10,    81,    82,
      30,    12,    84,    85,    36,    87,    88,    42,    90,    92,
      96,    95,    26,     0,    83,   104,    32,     0,    86,   105,
      38,    89,   106,    44,    93,    91,    94,   107,     0,     0,
      61,    53,    55,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    13,
      15,     0,   109,   110,     0,     0,     0,     0,     0,    14,
      16,    60,    57,    59,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,    48,
      47,    69,   100,   101,    99,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    74,
      73,    78,    77,    72,    75,    76,    79,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -29,   -29,   -29,   -10,   -28,   321,   201,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    14,    15,    16,    95,    39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    98,    43,   106,     4,     5,   135,   107,    35,    34,
     106,    46,    36,   117,   107,    27,    88,    38,   189,    70,
      74,    78,    81,    28,   207,    91,   208,    97,   101,    29,
     105,   102,   120,     3,    47,    34,   131,   105,    82,     9,
      48,    46,    83,    84,    92,    93,   106,    85,   134,   137,
     107,   107,   145,   209,   149,   153,   156,   159,   161,   116,
     165,   169,   172,   175,   177,     2,   192,   193,     3,     4,
       5,     6,     7,     8,     9,   106,   121,    10,    11,   107,
     138,   124,    12,   184,    13,     3,     4,     5,     6,     7,
       8,     9,   187,   139,    10,    11,   205,   206,   207,    12,
     208,    97,   178,   179,   256,   135,   145,   149,   153,   156,
     159,   165,   169,   172,   175,    97,   180,   122,   123,    51,
      52,    53,   188,   201,   149,   153,   181,   165,   169,   198,
       3,     4,     5,    41,   -17,     8,     9,    59,    65,    10,
      11,   202,   203,   204,    42,     3,     4,     5,    67,     4,
      30,     9,   211,   141,    10,    11,   106,   142,   143,    31,
     107,   239,   144,   210,   222,   225,     3,     4,     5,    71,
     246,    30,     9,     4,     5,    10,    11,    35,   247,   257,
      31,    36,    37,   208,     0,   258,    38,   216,   217,   219,
     221,   224,   224,   227,   229,   231,   233,   205,   206,   207,
     234,   208,    18,   130,   235,   236,   237,   238,   205,   206,
     207,    33,   208,    45,   240,   259,    20,    21,    22,    23,
      24,    69,    73,    77,    80,    25,    26,    90,   260,    96,
     100,   261,   104,   262,   263,     3,   264,    33,   265,   104,
      82,     9,   266,    45,    83,    84,     0,     0,     0,    85,
     133,   136,   110,   111,    59,   267,   148,   152,   155,   158,
     160,     0,   164,   168,   171,   174,   176,     3,     4,     5,
      75,     0,    30,     9,     0,     0,    10,    11,     0,     0,
       0,    31,     3,     4,     5,    87,     0,     8,     9,     4,
       5,    10,    11,    35,   186,     0,    42,    36,   117,     0,
       0,     0,    38,    96,   108,   109,   110,   111,    59,   148,
     152,   155,   158,   164,   168,   171,   174,    96,     0,   205,
     206,   207,    17,   208,     0,   241,   148,   152,     0,   164,
     168,    32,     0,    44,   194,   195,   125,   126,    57,    58,
      59,    68,    72,    76,    79,    86,     0,    89,     0,     0,
      99,     0,   103,   112,   113,   114,   115,    65,   118,     3,
       4,     5,    94,    44,    30,     9,     0,     0,    10,    11,
     132,     0,     0,    31,     0,     0,   147,   151,   114,   115,
      65,     0,   163,   167,   196,   197,   128,   129,    63,    64,
      65,   218,   220,   223,   223,   226,   228,   230,   232,    20,
      21,    22,    23,    24,    32,   119,   103,     3,     4,     5,
     131,     0,    30,     9,   185,     0,    10,    11,     0,     0,
       0,    31,     0,     3,     4,     5,   146,   132,    30,     9,
       0,     0,    10,    11,     0,     0,     0,    31,     0,     3,
       4,     5,   150,   132,    30,     9,     0,     0,    10,    11,
       0,     0,     0,    31,     3,     4,     5,   162,     0,    30,
       9,     0,     0,    10,    11,     0,     0,     0,    31,     3,
       4,     5,   166,     0,    30,     9,     0,     0,    10,    11,
       3,     4,     5,    31,     0,    30,     9,     0,     0,    10,
      11,     0,     0,     0,    31,     4,     5,   154,     0,    35,
     118,     0,     0,    36,   117,   205,   206,   207,    38,   208,
       0,   245,     0,    99,    99,     4,     5,   157,     0,    35,
       0,     0,     0,    36,   117,     4,     5,   170,    38,    35,
       0,     0,     0,    36,   117,     4,     5,   173,    38,    35,
       0,     0,     0,    36,   117,     4,     5,   146,    38,    35,
       0,     0,     0,    36,   117,     4,     5,   150,    38,    35,
       0,     0,     0,    36,   117,     4,     5,   162,    38,    35,
       0,     0,     0,    36,   117,     4,     5,   166,    38,    35,
       0,     0,     0,    36,   117,     4,     0,   140,    38,   141,
       0,     0,     0,   142,   143,     4,     0,   215,   144,   141,
       0,     0,     0,   142,   143,     0,     0,     0,   144,   125,
     126,    57,    58,    59,     0,     0,     0,     0,   182,   128,
     129,    63,    64,    65,     0,     0,     0,     0,   183,   122,
     123,    51,    52,    53,     0,     0,     0,     0,   212,   125,
     126,    57,    58,    59,     0,     0,     0,     0,   213,   128,
     129,    63,    64,    65,     0,     0,     0,     0,   214,   108,
     109,   110,   111,    59,     0,     0,     0,   190,   112,   113,
     114,   115,    65,     0,     0,     0,   191,    49,    50,    51,
      52,    53,     0,     0,    54,    55,    56,    57,    58,    59,
       0,     0,    60,    61,    62,    63,    64,    65,     0,     0,
      66,   112,   113,   114,   115,    65,     0,     0,   199,   112,
     113,   114,   115,    65,     0,     0,   200,   122,   123,    51,
      52,    53,     0,   124,   125,   126,    57,    58,    59,     0,
     127,   128,   129,    63,    64,    65,     0,   130,   108,   109,
     110,   111,    59,     0,   127,   112,   113,   114,   115,    65,
       0,   130,   108,   109,   110,   111,    59,     0,   242,   112,
     113,   114,   115,    65,     0,   243,   108,   109,   110,   111,
      59,     0,   244,   112,   113,   114,   115,    65,     0,   245,
     108,   109,   110,   111,    59,     0,   248,   112,   113,   114,
     115,    65,     0,   249,   108,   109,   110,   111,    59,     0,
     250,   112,   113,   114,   115,    65,     0,   251,   108,   109,
     110,   111,    59,     0,   252,   112,   113,   114,   115,    65,
       0,   253,   108,   109,   110,   111,    59,     0,   254,   112,
     113,   114,   115,    65,     0,   255,    20,    21,    22,    23,
      24,   122,   123,    51,    52,    53,   125,   126,    57,    58,
      59,   128,   129,    63,    64,    65
};

static const yytype_int16 yycheck[] =
{
       1,    29,    12,    12,     4,     5,     6,    16,     8,    10,
      12,    12,    12,    13,    16,     6,    26,    17,    20,    20,
      21,    22,    23,    17,    14,    26,    16,    28,    29,    17,
      31,    17,    42,     3,    21,    36,     6,    38,     8,     9,
      19,    42,    12,    13,    21,    22,    12,    17,    49,    50,
      16,    16,    53,    19,    55,    56,    57,    58,    59,    17,
      61,    62,    63,    64,    65,     0,    10,    11,     3,     4,
       5,     6,     7,     8,     9,    12,    18,    12,    13,    16,
       6,    18,    17,    93,    19,     3,     4,     5,     6,     7,
       8,     9,    93,     6,    12,    13,    12,    13,    14,    17,
      16,   102,    17,    13,    20,     6,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    21,    12,    13,    14,
      15,    16,    20,    17,   125,   126,    21,   128,   129,    18,
       3,     4,     5,     6,    21,     8,     9,    16,    16,    12,
      13,   142,   143,   144,    17,     3,     4,     5,     6,     4,
       8,     9,    21,     8,    12,    13,    12,    12,    13,    17,
      16,    18,    17,    19,   192,   193,     3,     4,     5,     6,
      18,     8,     9,     4,     5,    12,    13,     8,    18,    21,
      17,    12,    13,    16,    -1,    21,    17,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    12,    13,    14,
     201,    16,     1,    18,   205,   206,   207,   208,    12,    13,
      14,    10,    16,    12,    18,    21,    12,    13,    14,    15,
      16,    20,    21,    22,    23,    21,    22,    26,    21,    28,
      29,    21,    31,    21,    21,     3,    21,    36,    21,    38,
       8,     9,    21,    42,    12,    13,    -1,    -1,    -1,    17,
      49,    50,    14,    15,    16,   256,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    17,     3,     4,     5,     6,    -1,     8,     9,     4,
       5,    12,    13,     8,    93,    -1,    17,    12,    13,    -1,
      -1,    -1,    17,   102,    12,    13,    14,    15,    16,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,    12,
      13,    14,     1,    16,    -1,    18,   125,   126,    -1,   128,
     129,    10,    -1,    12,    10,    11,    12,    13,    14,    15,
      16,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,    31,    12,    13,    14,    15,    16,    37,     3,
       4,     5,     6,    42,     8,     9,    -1,    -1,    12,    13,
      49,    -1,    -1,    17,    -1,    -1,    55,    56,    14,    15,
      16,    -1,    61,    62,    10,    11,    12,    13,    14,    15,
      16,   190,   191,   192,   193,   194,   195,   196,   197,    12,
      13,    14,    15,    16,    83,    18,    85,     3,     4,     5,
       6,    -1,     8,     9,    93,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,     3,     4,     5,     6,   106,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,     3,
       4,     5,     6,   122,     8,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    17,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    12,    13,
       3,     4,     5,    17,    -1,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    17,     4,     5,     6,    -1,     8,
     179,    -1,    -1,    12,    13,    12,    13,    14,    17,    16,
      -1,    18,    -1,   192,   193,     4,     5,     6,    -1,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,     5,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,    -1,     6,    17,     8,
      -1,    -1,    -1,    12,    13,     4,    -1,     6,    17,     8,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    12,    13,    14,
      15,    16,    -1,    -1,    19,    12,    13,    14,    15,    16,
      -1,    -1,    19,    12,    13,    14,    15,    16,    -1,    -1,
      19,    12,    13,    14,    15,    16,    -1,    -1,    19,    12,
      13,    14,    15,    16,    -1,    -1,    19,    12,    13,    14,
      15,    16,    -1,    18,    12,    13,    14,    15,    16,    -1,
      18,    12,    13,    14,    15,    16,    -1,    18,    12,    13,
      14,    15,    16,    -1,    18,    12,    13,    14,    15,    16,
      -1,    18,    12,    13,    14,    15,    16,    -1,    18,    12,
      13,    14,    15,    16,    -1,    18,    12,    13,    14,    15,
      16,    -1,    18,    12,    13,    14,    15,    16,    -1,    18,
      12,    13,    14,    15,    16,    -1,    18,    12,    13,    14,
      15,    16,    -1,    18,    12,    13,    14,    15,    16,    -1,
      18,    12,    13,    14,    15,    16,    -1,    18,    12,    13,
      14,    15,    16,    -1,    18,    12,    13,    14,    15,    16,
      -1,    18,    12,    13,    14,    15,    16,    -1,    18,    12,
      13,    14,    15,    16,    -1,    18,    12,    13,    14,    15,
      16,    12,    13,    14,    15,    16,    12,    13,    14,    15,
      16,    12,    13,    14,    15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,     0,     3,     4,     5,     6,     7,     8,     9,
      12,    13,    17,    19,    25,    26,    27,    28,    29,    30,
      12,    13,    14,    15,    16,    21,    22,     6,    17,    17,
       8,    17,    28,    29,    30,     8,    12,    13,    17,    29,
      30,     6,    17,    26,    28,    29,    30,    21,    19,    12,
      13,    14,    15,    16,    19,    12,    13,    14,    15,    16,
      19,    12,    13,    14,    15,    16,    19,     6,    28,    29,
      30,     6,    28,    29,    30,     6,    28,    29,    30,    28,
      29,    30,     8,    12,    13,    17,    28,     6,    26,    28,
      29,    30,    21,    22,     6,    28,    29,    30,    27,    28,
      29,    30,    17,    28,    29,    30,    12,    16,    12,    13,
      14,    15,    12,    13,    14,    15,    17,    13,    28,    18,
      26,    18,    12,    13,    18,    12,    13,    18,    12,    13,
      18,     6,    28,    29,    30,     6,    29,    30,     6,     6,
       6,     8,    12,    13,    17,    30,     6,    28,    29,    30,
       6,    28,    29,    30,     6,    29,    30,     6,    29,    30,
      29,    30,     6,    28,    29,    30,     6,    28,    29,    30,
       6,    29,    30,     6,    29,    30,    29,    30,    17,    13,
      21,    21,    21,    21,    26,    28,    29,    30,    20,    20,
      20,    20,    10,    11,    10,    11,    10,    11,    18,    19,
      19,    17,    30,    30,    30,    12,    13,    14,    16,    19,
      19,    21,    21,    21,    21,     6,    30,    30,    29,    30,
      29,    30,    27,    29,    30,    27,    29,    30,    29,    30,
      29,    30,    29,    30,    30,    30,    30,    30,    30,    18,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    20,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    23,    24,    24,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    30,    30,    30,    30,    30,    30,    30,
      30,    30
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     4,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     1,
       3,     3,     2,     4,     4,     4,     3,     5,     5,     5,
       5,     4,     2,     1,     3,     3,     2,     3,     3,     6,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     6,
       6,     6,     3,     1,     3,     3,     3,     3,     6,     2,
       2,     3
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
#line 1504 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "pr.y" /* yacc.c:1646  */
    { printf("OK\n"); }
#line 1510 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "pr.y" /* yacc.c:1646  */
    { printf("El resultado(real) es:%f\n",(yyvsp[-1].real)); }
#line 1516 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "pr.y" /* yacc.c:1646  */
    { printf("El resultado(entero) es:%d\n",(yyvsp[-1].entero)); }
#line 1522 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "pr.y" /* yacc.c:1646  */
    { 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[-2].cadena),(yyvsp[0].real)); 
	}
#line 1530 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[0].cadena),(yyvsp[-2].real)); 
	}
#line 1538 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "pr.y" /* yacc.c:1646  */
    { 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[-2].cadena),(-(yyvsp[0].real))); 
	}
#line 1546 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",(yyvsp[0].cadena),(-(yyvsp[-2].real))); 
	}
#line 1554 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 69 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-3].cadena),(yyvsp[-1].entero)); 
	}
#line 1562 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-1].cadena),(yyvsp[-3].entero)); 
	}
#line 1570 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-3].cadena),(-(yyvsp[-1].entero))); 
	}
#line 1578 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 81 "pr.y" /* yacc.c:1646  */
    {
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",(yyvsp[-1].cadena),(-(yyvsp[-3].entero))); 
	}
#line 1586 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "pr.y" /* yacc.c:1646  */
    {
		(yyval.sptr) = (yyvsp[-1].sptr); 
	 }
#line 1594 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "pr.y" /* yacc.c:1646  */
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
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,suma,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,suma,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,suma,cadena); 
		  break;
		}
	  }
	 (yyval.sptr) = resultado;
	}
#line 1624 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "pr.y" /* yacc.c:1646  */
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
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,resta,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,resta,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,resta,cadena); 
		  break;
		}
	  }
	 (yyval.sptr) = resultado;
	}
#line 1654 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "pr.y" /* yacc.c:1646  */
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
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,multiplicacion,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,multiplicacion,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,multiplicacion,cadena); 
		  break;
		}
	  }
	 (yyval.sptr) = resultado;
	}
#line 1684 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 171 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = concatenar(op->valor.v_cadena,(yyvsp[0].cadena));
		resultado->siguiente == NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1711 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = concatenar(op->valor.v_cadena,(yyvsp[-2].cadena));
		resultado->siguiente == NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1738 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero + (yyvsp[0].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real + (yyvsp[0].real);
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 1772 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 245 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero + (yyvsp[-2].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real + (yyvsp[-2].real);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 1805 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero + (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real + (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1837 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 302 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero + (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real + (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1869 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 331 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = restar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion resta de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1900 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 357 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = restar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion resta de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 1931 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 384 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero - (yyvsp[0].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real - (yyvsp[0].real);
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 1965 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 413 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero - (yyvsp[-2].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real - (yyvsp[-2].real);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 1998 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 443 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero - (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real - (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2030 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 470 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero - (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real - (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2062 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 499 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = multiplicar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion multiplicacion de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2093 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 525 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = multiplicar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion multiplicacion de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2124 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 552 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((op->valor.v_entero) * (yyvsp[0].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) * (yyvsp[0].real);
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 2158 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 581 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((op->valor.v_entero) * (yyvsp[-2].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) * (yyvsp[-2].real);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 2191 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 611 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = ((op->valor.v_entero) * (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) * (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2223 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 638 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = ((op->valor.v_entero) * (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) * (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2255 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 667 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion division de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2286 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 693 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion division de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2317 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 720 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((double)(op->valor.v_entero) / (yyvsp[0].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) / (yyvsp[0].real);
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 2351 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 749 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((double)(op->valor.v_entero) / (yyvsp[-2].real));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) / (yyvsp[-2].real);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 (yyval.sptr) = resultado;
	}
#line 2384 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 779 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero =(int)((double)(op->valor.v_entero) / (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) / (yyvsp[0].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2416 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 806 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero =(int)((double)(op->valor.v_entero) / (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) / (yyvsp[-2].entero));
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2448 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 835 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-2].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion potencia entre cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 (yyval.sptr) = resultado;
	}
#line 2479 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 861 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[0].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != entero )
	    {
		printf("La potencia no puede ser llevada a cabo\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = op->valor.v_entero;
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena((yyvsp[-2].cadena)),(-potencia));
		 
		}else{
		 resultado->valor.v_cadena = potencia_cadena((yyvsp[-2].cadena),potencia);
		}
		resultado->siguiente == NULL;
	    }
	  }
	 free((yyvsp[-2].cadena));
	 (yyval.sptr) = resultado;
	}
#line 2517 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 894 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo((yyvsp[-3].cadena));
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
		if(op->tipo == cadena)
		{
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = (yyvsp[-1].entero);
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena(op->valor.v_cadena),(-potencia));
		}else{
		 resultado->valor.v_cadena = potencia_cadena(op->valor.v_cadena,potencia);
		}
		resultado->siguiente == NULL;
		}else{
		printf("En desarrollo..\n");
		resultado = NULL;
		}
	  }
	 (yyval.sptr) = resultado;
	}
#line 2552 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 924 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo((yyvsp[-3].cadena));
	  struct simbolo * op2 = buscar_simbolo((yyvsp[-1].cadena));
	  if( op1 == NULL || op2 == NULL )
	  {
	     printf("Alguna variable no ha sido declarada...\n");
	     resultado = NULL;
          }else 
	  {	
		if(op1->tipo == cadena)
		{
		
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = 0;
		  if(op2->tipo == cadena)
		  {
			printf("No se puede realizar ese operacion...\n");
			resultado = NULL;
		  }else
		  {
		   	if(op2->tipo == entero)
		   	{
		    	potencia = op2->valor.v_entero;
		   	}else if(op2->tipo == real){
		    	potencia = (int) op2->valor.v_real;
		   	}
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena(op1->valor.v_cadena),(-potencia));
		}else{
		 resultado->valor.v_cadena = potencia_cadena(op1->valor.v_cadena,potencia);
		}
		resultado->siguiente == NULL;

		  }
		}else
		{
		  printf("En desarrollo..\n");
		  resultado = NULL;
		}
	  }
	 (yyval.sptr) = resultado;
	}
#line 2604 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 974 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[0].cadena));
	  if(encontrado == NULL)
	  {
	    printf("La variable no se encuentra declarada...\n");
	  }
	  (yyval.sptr) = encontrado;
        }
#line 2617 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 983 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-1].cadena));
	  if(encontrado == NULL)
	  {
	    printf("La variable no se encuentra declarada...\n");
	  }
	  (yyval.sptr) = encontrado;

	}
#line 2631 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 992 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * recibida = (yyvsp[-1].sptr);
	  if(recibida == NULL)
	  {
	    printf("La operacion no es valida...\n");
	  }
	  (yyval.sptr) = recibida;
	}
#line 2644 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1001 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-1].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else{
	    imprimir_simbolo(encontrado);    
	  }
	}
#line 2658 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1010 "pr.y" /* yacc.c:1646  */
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
		free(encontrado->valor.v_cadena);
		encontrado->valor.v_cadena = (yyvsp[-1].cadena);
            }
	  }
	}
#line 2680 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1027 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo == entero)
	    {
	      encontrado->valor.v_entero = (int) (yyvsp[-1].entero);
	    }else if(encontrado->tipo == real)
	    {
	      encontrado->valor.v_real = (double) (yyvsp[-1].entero);
	    }else
	    {
	     printf("La asignacion no se puede realizar...\n");
            }
	  }
	}
#line 2704 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1046 "pr.y" /* yacc.c:1646  */
    {
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo == entero)
	    {
	      encontrado->valor.v_entero = (int) (yyvsp[-1].real);
	    }else if(encontrado->tipo == real)
	    {
	      encontrado->valor.v_real = (double) (yyvsp[-1].real);
	    }else
	    {
	     printf("La asignacion no se puede realizar...\n");
	    }
	  }
	}
#line 2728 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1065 "pr.y" /* yacc.c:1646  */
    {
	 struct simbolo * nuevo = buscar_simbolo((yyvsp[-1].cadena));
	 if(nuevo == NULL)
	 {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-1].cadena),(yyvsp[-2].entero));
	 tabla->siguiente = anterior; 
         }else{
	  printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }
	}
#line 2744 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1076 "pr.y" /* yacc.c:1646  */
    { 

	 struct simbolo * nuevo = buscar_simbolo((yyvsp[-3].cadena));
	 if(nuevo == NULL)
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
	 }else
	 {
	   printf("No se pudo hacer la declaracion, la variable ya existe...\n");
 	 }

	}
#line 2772 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1099 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * nuevo = buscar_simbolo((yyvsp[-3].cadena));
	 if(nuevo == NULL)
	 {
	  struct simbolo * anterior = tabla;
	  tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	  tabla -> siguiente = anterior;
	  if(tabla->tipo == entero)
	  {
	   tabla->valor.v_entero = (yyvsp[-1].entero);
	  }else if(tabla->tipo == real)
	  {
	   tabla->valor.v_real = (double) (yyvsp[-1].entero);
	  }else{
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	  }
	
	 }else
	 {
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }
	 
	}
#line 2802 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1124 "pr.y" /* yacc.c:1646  */
    { 
	 struct simbolo * nuevo = buscar_simbolo((yyvsp[-3].cadena));
	 if(nuevo == NULL)
	 {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	 tabla -> siguiente = anterior;
	 if(tabla->tipo == real)
	 {
	   tabla->valor.v_real = (yyvsp[-1].real);
	 }else if(tabla->tipo == entero)
	 {
	   tabla->valor.v_entero = (int) (yyvsp[-1].real);
	 }else{
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }

	 }else{
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }

	}
#line 2831 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1149 "pr.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1].sptr) == NULL)
	{
	  printf("No se puede asignar un valor nulo, la declaracion no se realizo...\n");
	}else{
	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    struct simbolo * anterior = tabla;
	    tabla = agregar_simbolo((yyvsp[-3].cadena),(yyvsp[-4].entero));
	    tabla -> siguiente = anterior;
	    struct simbolo * resultado = (yyvsp[-1].sptr);
	    int t1 = tabla->tipo, t2 = resultado->tipo;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			tabla->valor.v_entero = resultado->valor.v_entero;
			break;
			case real:
			tabla->valor.v_real = resultado->valor.v_real;
			break;
			case cadena:
			tabla->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
			free(resultado->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  tabla->valor.v_entero = (int) resultado->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  tabla->valor.v_real = (double) resultado->valor.v_entero;
		}else{
		  printf("Asignacion incompatible, no realizada...\n");
		}
		free(resultado);
	  }else
	  {
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	  }
	}
	}
#line 2878 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1191 "pr.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1].sptr) == NULL)
	{
	  printf("No se puede asignar valor nulo, no se realizo la asignacion...\n");
	}else{

	  struct simbolo * encontrado = buscar_simbolo((yyvsp[-3].cadena));
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\nAsignacion no realizada\n");
	  }else
	  {
		struct simbolo * resultado = (yyvsp[-1].sptr);
		int t1 = encontrado->tipo, t2 = resultado->tipo;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			encontrado->valor.v_entero = resultado->valor.v_entero;
			break;
			case real:
			encontrado->valor.v_real = resultado->valor.v_real;
			break;
			case cadena:
			free(encontrado->valor.v_cadena);
			encontrado->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
			free(resultado->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  encontrado->valor.v_entero = (int) resultado->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  encontrado->valor.v_real = (double) resultado->valor.v_entero;
		}else{
		  printf("Asignacion incompatible, no realizada...\n");
		}
		free(resultado);
	  }
	}
	}
#line 2924 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1232 "pr.y" /* yacc.c:1646  */
    {
	  imprimir_simbolo((yyvsp[-1].sptr));
	  free((yyvsp[-1].sptr));
	}
#line 2933 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1239 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 2939 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1241 "pr.y" /* yacc.c:1646  */
    { 
	   char * s1 = (yyvsp[-2].cadena);
	   char * s2 = (yyvsp[0].cadena);
	   (yyval.cadena) = concatenar(s1,s2);
	   free(s1);
           free(s2);
	 }
#line 2951 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1249 "pr.y" /* yacc.c:1646  */
    { 
	  int potencia = (yyvsp[0].entero);
	  if(potencia ==  0)
	  {
		(yyval.cadena) = "";
	  }else if(potencia < 0)
	  {
		(yyval.cadena) = potencia_cadena(invertir_cadena((yyvsp[-2].cadena)),(-potencia));	
	  }else{
		(yyval.cadena) = potencia_cadena((yyvsp[-2].cadena),potencia);
	  }

	}
#line 2969 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1262 "pr.y" /* yacc.c:1646  */
    {(yyval.cadena) = (yyvsp[0].cadena);}
#line 2975 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1263 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 2981 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1264 "pr.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[-1].cadena); }
#line 2987 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1265 "pr.y" /* yacc.c:1646  */
    {
	  int potencia = (yyvsp[-1].entero);
	  if(potencia ==  0)
	  {
		(yyval.cadena) = "";	
	  }else if(potencia < 0)
	  {
		(yyval.cadena) = potencia_cadena(invertir_cadena((yyvsp[-3].cadena)),(-potencia));	
	  }else{
		(yyval.cadena) = potencia_cadena((yyvsp[-3].cadena),potencia);
	  }
	}
#line 3004 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1277 "pr.y" /* yacc.c:1646  */
    {
		struct simbolo * op1 = (yyvsp[-4].sptr);
		struct simbolo * op2 = (yyvsp[-2].sptr);
		char * resultado;
	if(op1 == NULL || op2 == NULL)
	{
		printf("Alguna de las variables es nula\nNo se puede realizar la comparacion...\n");
		resultado = copiar_cadena("Error");
	}else
	{
		int t1 = op1->tipo,t2 = op2->tipo;
		int l1,l2;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			l1 = op1->valor.v_entero;
			l2 = op2->valor.v_entero;
			break;
			case real:
			l1 = (int)op1->valor.v_real;
			l2 = (int)op2->valor.v_real;
			break;
			case cadena:
			l1 = longitud_cadena(op1->valor.v_cadena); 
			l2 = longitud_cadena(op2->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  l1 = op1->valor.v_entero;  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  l1 = (int)op1->valor.v_real; 
		  l2 = op2->valor.v_entero;
		}else if( t1 == cadena && t2 == real){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == cadena){
		  l1 = (int) op1->valor.v_real;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}else if( t1 == cadena && t2 == entero){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 =  op2->valor.v_entero;
		}else if( t1 == entero && t2 == cadena){
		  l1 = (int) op1->valor.v_entero;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}
		if(l1 < l2)
		{
		resultado = copiar_cadena("true");
		}else{
		resultado = copiar_cadena("false");
		}
	}
	     (yyval.cadena) = resultado;
	}
#line 3066 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1334 "pr.y" /* yacc.c:1646  */
    {
		struct simbolo * op1 = (yyvsp[-4].sptr);
		struct simbolo * op2 = (yyvsp[-2].sptr);
		char * resultado;
	if(op1 == NULL || op2 == NULL)
	{
		printf("Alguna de las variables es nula\nNo se puede realizar la comparacion...\n");
		resultado = copiar_cadena("Error");
	}else
	{
		int t1 = op1->tipo,t2 = op2->tipo;
		int l1,l2;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			l1 = op1->valor.v_entero;
			l2 = op2->valor.v_entero;
			break;
			case real:
			l1 = (int)op1->valor.v_real;
			l2 = (int)op2->valor.v_real;
			break;
			case cadena:
			l1 = longitud_cadena(op1->valor.v_cadena); 
			l2 = longitud_cadena(op2->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  l1 = op1->valor.v_entero;  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  l1 = (int)op1->valor.v_real; 
		  l2 = op2->valor.v_entero;
		}else if( t1 == cadena && t2 == real){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == cadena){
		  l1 = (int) op1->valor.v_real;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}else if( t1 == cadena && t2 == entero){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 =  op2->valor.v_entero;
		}else if( t1 == entero && t2 == cadena){
		  l1 = (int) op1->valor.v_entero;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}
		if(l1 > l2)
		{
		resultado = copiar_cadena("true");
		}else{
		resultado = copiar_cadena("false");
		}
	}
	     (yyval.cadena) = resultado;
	}
#line 3128 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1394 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) < (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3142 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1403 "pr.y" /* yacc.c:1646  */
    { 
	 char * resultado;
	 if((yyvsp[-4].real) < (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;

	}
#line 3157 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1413 "pr.y" /* yacc.c:1646  */
    {
	char * resultado;
	 if((yyvsp[-4].real) < (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3171 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1422 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) < (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3185 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1431 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) > (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3199 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1440 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].real) > (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3213 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1449 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].real) > (yyvsp[-2].real)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3227 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1458 "pr.y" /* yacc.c:1646  */
    {
	 char * resultado;
	 if((yyvsp[-4].entero) > (yyvsp[-2].entero)){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 (yyval.cadena) = resultado;
	}
#line 3241 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1469 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 3247 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1470 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) + (yyvsp[0].real); }
#line 3253 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1471 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) + (yyvsp[0].entero); }
#line 3259 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1472 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) + (yyvsp[0].real); }
#line 3265 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1473 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) - (yyvsp[0].real); }
#line 3271 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1474 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) - (yyvsp[0].entero); }
#line 3277 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1475 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) - (yyvsp[0].real); }
#line 3283 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1476 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) * (yyvsp[0].real); }
#line 3289 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1477 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) * (yyvsp[0].entero); }
#line 3295 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1478 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) * (yyvsp[0].real); }
#line 3301 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1479 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) / (yyvsp[0].real); }
#line 3307 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1480 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (double)(yyvsp[-2].entero) / (yyvsp[0].entero); }
#line 3313 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1481 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].real) / (yyvsp[0].entero); }
#line 3319 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1482 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].entero) / (yyvsp[0].real); }
#line 3325 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1483 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].entero),(yyvsp[0].real)); }
#line 3331 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1484 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].real),(yyvsp[0].entero)); }
#line 3337 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1485 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-2].real),(yyvsp[0].real)); }
#line 3343 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1486 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 3349 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1487 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (-(yyvsp[0].real)); }
#line 3355 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1488 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-3].entero),(yyvsp[-1].real));  }
#line 3361 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1489 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-3].real),(yyvsp[-1].real));  }
#line 3367 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1490 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = pow((yyvsp[-3].real),(yyvsp[-1].entero));  }
#line 3373 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1491 "pr.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-1].real); }
#line 3379 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1494 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 3385 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1495 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero); }
#line 3391 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1496 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero); }
#line 3397 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1497 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero); }
#line 3403 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1498 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (int) pow((yyvsp[-2].entero),(yyvsp[0].entero)); }
#line 3409 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1499 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (int) pow((yyvsp[-3].entero),(yyvsp[-1].entero));  }
#line 3415 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1500 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 3421 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1501 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (-(yyvsp[0].entero)); }
#line 3427 "pr.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1502 "pr.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-1].entero); }
#line 3433 "pr.tab.c" /* yacc.c:1646  */
    break;


#line 3437 "pr.tab.c" /* yacc.c:1646  */
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
#line 1505 "pr.y" /* yacc.c:1906  */
 

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


struct simbolo *
operar_variables(struct simbolo * v1,struct simbolo * v2,int operacion,int tipo_regreso)
{
  struct simbolo * resultado = agregar_simbolo("Resultado",tipo_regreso);
  resultado->siguiente = NULL;
  double td;
  char * tc;
  if(v1->tipo == v2->tipo)
  {
    switch(v1->tipo)
    {
	case entero:
	switch(operacion)
	{
	  case suma:
	  td = v1->valor.v_entero + v2->valor.v_entero;
	  break;
	  case resta:
	  td = v1->valor.v_entero - v2->valor.v_entero;
	  break;
	  case multiplicacion:
	  td = v1->valor.v_entero * v2->valor.v_entero;
	  break;
	  case division:
	  td = (double)(v1->valor.v_entero)/(v2->valor.v_entero);
	  break;
	}
	break;
	case real:
	switch(operacion)
	{
	  case suma:
	  td = v1->valor.v_real + v2->valor.v_real;
	  break;
	  case resta:
	  td = v1->valor.v_real - v2->valor.v_real;
	  break;
	  case multiplicacion:
	  td = v1->valor.v_real * v2->valor.v_real;
	  break;
	  case division:
	  td = (v1->valor.v_real)/(v2->valor.v_real);
	  break;
	}

	break;
	case cadena:
	switch(operacion)
	{
	  case suma:
	  tc = concatenar(v1->valor.v_cadena,v2->valor.v_cadena);
	  break;
	  case resta:
	  printf("Operacion resta de cadenas no esta definida...\n");
	  break;
	  case multiplicacion:
	  printf("Operacion multiplicacion de cadenas no esta definida...\n");
	  break;
	  case division:
	  printf("Operacion division de cadenas no esta definida...\n");
	  break;
	}
      break;
    }
  }

  switch(tipo_regreso)
  {
    case entero:
    resultado->valor.v_entero = (int) td;
    break;
    case real:
    resultado->valor.v_real = (double) td;
    break;
    case cadena:
    resultado->valor.v_cadena = tc;
    break;
  }
  return resultado;

}

