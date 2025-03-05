
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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

void yyerror(const char *s);
extern int yylex();
extern int line_number;
extern int column;
extern char* yytext;
int syntax_valid = 1;
DataType current_type;


/* Line 189 of yacc.c  */
#line 89 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INCLUDE = 258,
     T_STDIO = 259,
     T_INT = 260,
     T_CHAR = 261,
     T_FOR = 262,
     T_WHILE = 263,
     T_DO = 264,
     T_MAIN = 265,
     T_IF = 266,
     T_ELSE = 267,
     T_RETURN = 268,
     T_ID = 269,
     T_NUM = 270,
     T_INC = 271,
     T_LE = 272,
     T_GE = 273,
     T_EQ = 274,
     IFX = 275
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "parser.y"

    int intval;
    char* strval;
    struct {
        int dims[3];
        int count;
    } array_dims;



/* Line 214 of yacc.c  */
#line 156 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 168 "parser.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    25,    23,    33,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      21,    20,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    11,    18,    22,    25,
      26,    29,    31,    33,    35,    37,    39,    42,    44,    47,
      49,    51,    55,    57,    59,    63,    65,    70,    78,    89,
      98,   102,   104,   108,   112,   117,   125,   136,   138,   142,
     146,   150,   154,   158,   162,   166,   170,   174,   178,   180,
     182,   185,   187,   189,   192,   194,   204,   206,   211,   212,
     214,   215,   218,   219,   225,   232,   238
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    38,    39,    -1,     3,     4,    -1,    -1,
      -1,     5,    10,    28,    29,    40,    41,    -1,    30,    42,
      31,    -1,    42,    43,    -1,    -1,    44,    32,    -1,    41,
      -1,    62,    -1,    55,    -1,    45,    -1,    51,    -1,    13,
      53,    -1,     1,    -1,    46,    47,    -1,     5,    -1,     6,
      -1,    47,    33,    48,    -1,    48,    -1,    14,    -1,    14,
      20,    53,    -1,    49,    -1,    14,    34,    15,    35,    -1,
      14,    34,    15,    35,    34,    15,    35,    -1,    14,    34,
      15,    35,    34,    15,    35,    34,    15,    35,    -1,    14,
      34,    15,    35,    20,    30,    50,    31,    -1,    50,    33,
      15,    -1,    15,    -1,    14,    20,    53,    -1,    52,    20,
      53,    -1,    14,    34,    53,    35,    -1,    14,    34,    53,
      35,    34,    53,    35,    -1,    14,    34,    53,    35,    34,
      53,    35,    34,    53,    35,    -1,    54,    -1,    53,    23,
      53,    -1,    53,    24,    53,    -1,    53,    25,    53,    -1,
      53,    26,    53,    -1,    53,    19,    53,    -1,    53,    21,
      53,    -1,    53,    22,    53,    -1,    53,    17,    53,    -1,
      53,    18,    53,    -1,    28,    53,    29,    -1,    15,    -1,
      14,    -1,    16,    14,    -1,    52,    -1,    60,    -1,    61,
      32,    -1,    56,    -1,     7,    28,    57,    32,    58,    32,
      59,    29,    43,    -1,    51,    -1,    46,    14,    20,    53,
      -1,    -1,    53,    -1,    -1,    16,    14,    -1,    -1,     8,
      28,    58,    29,    43,    -1,     9,    43,     8,    28,    58,
      29,    -1,    11,    28,    58,    29,    43,    -1,    11,    28,
      58,    29,    43,    12,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    56,    57,    61,    60,    73,    76,    77,
      80,    81,    82,    83,    86,    87,    88,    89,    95,    98,
      99,   102,   103,   106,   113,   129,   132,   141,   150,   159,
     172,   173,   176,   208,   211,   219,   227,   237,   238,   239,
     240,   241,   249,   250,   251,   252,   253,   254,   257,   261,
     283,   302,   304,   305,   306,   309,   312,   313,   326,   328,
     329,   332,   341,   344,   347,   350,   351
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INCLUDE", "T_STDIO", "T_INT",
  "T_CHAR", "T_FOR", "T_WHILE", "T_DO", "T_MAIN", "T_IF", "T_ELSE",
  "T_RETURN", "T_ID", "T_NUM", "T_INC", "T_LE", "T_GE", "T_EQ", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "IFX", "'('", "')'", "'{'",
  "'}'", "';'", "','", "'['", "']'", "$accept", "Program", "Includes",
  "MainFunction", "$@1", "CompoundStmt", "StmtList", "Stmt", "SimpleStmt",
  "Declaration", "Type", "DeclList", "SingleDecl", "ArrayDecl",
  "ArrayInitList", "Assignment", "ArrayAccess", "Expr", "Term",
  "IterationStmt", "ForStmt", "ForInit", "Condition", "Update",
  "WhileStmt", "DoWhileStmt", "SelectionStmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      61,    60,    62,    43,    45,    42,    47,   275,    40,    41,
     123,   125,    59,    44,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    40,    39,    41,    42,    42,
      43,    43,    43,    43,    44,    44,    44,    44,    45,    46,
      46,    47,    47,    48,    48,    48,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    56,    57,    57,    57,    58,
      58,    59,    59,    60,    61,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     6,     3,     2,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     3,     1,     1,     3,     1,     4,     7,    10,     8,
       3,     1,     3,     3,     4,     7,    10,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     1,     1,     2,     1,     9,     1,     4,     0,     1,
       0,     2,     0,     5,     6,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     3,     1,     0,     2,     0,     0,
       5,     0,     9,     6,     0,    17,    19,    20,     0,     0,
       0,     0,     0,     0,     7,    11,     8,     0,    14,     0,
      15,     0,    13,    54,    52,     0,    12,    58,    60,     0,
      60,    49,    48,     0,     0,    51,    16,    37,     0,     0,
      10,    23,    18,    22,    25,     0,    53,     0,    56,     0,
      59,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      33,     0,    60,     0,    60,     0,    47,    45,    46,    42,
      43,    44,    38,    39,    40,    41,    34,    24,     0,    21,
       0,     0,    63,     0,    65,     0,    26,    57,    62,    64,
       0,     0,     0,     0,     0,     0,    66,    35,     0,     0,
      61,     0,     0,    31,     0,    27,    55,     0,    29,     0,
       0,    36,    30,     0,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,    11,    25,    14,    26,    27,    28,
      29,    52,    53,    54,   124,    30,    45,    60,    47,    32,
      33,    59,    61,   115,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
       9,    21,    35,    31,   -39,   -39,    33,   -39,    17,    18,
     -39,    27,   -39,   -39,     2,   -39,   -39,   -39,    30,    32,
      67,    37,     6,   -15,   -39,   -39,   -39,    45,   -39,    49,
     -39,    47,   -39,   -39,   -39,    51,   -39,    56,     6,    71,
       6,    50,   -39,    72,     6,   -39,   149,   -39,     6,     6,
     -39,    -6,    52,   -39,   -39,     6,   -39,    74,   -39,    57,
     149,    61,    64,    65,   -39,   136,     6,     6,     6,     6,
       6,     6,     6,     6,     6,   149,    91,     6,    78,    49,
     149,    75,     6,    67,     6,    67,   -39,    16,    16,   159,
      16,    16,    -8,    -8,   -39,   -39,    66,   149,    63,   -39,
       6,    69,   -39,    70,    93,     6,     4,   149,    87,   -39,
      67,   106,    76,    96,   104,    90,   -39,    86,   107,    98,
     -39,    67,     6,   -39,    -4,   100,   -39,   121,   -39,   120,
     122,   -39,   -39,   101,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   110,   -39,   -19,   -39,   -39,
     111,   -39,    73,   -39,   -39,   112,   -14,   -18,   -39,   -39,
     -39,   -39,   -38,   -39,   -39,   -39,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    39,    63,    15,    46,    48,    31,    16,    17,    18,
      19,    20,     1,    21,    77,    22,    23,    73,    74,    49,
      41,    42,    43,    31,   112,     4,    65,   128,    78,   129,
      75,    76,    12,    24,    44,     5,     6,    80,   113,    71,
      72,    73,    74,     8,   101,     9,   103,    10,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    12,    37,    97,
      38,    16,    17,    51,   102,    40,   104,    55,    15,    31,
      23,    31,    16,    17,    18,    19,    20,    50,    21,    62,
      22,    23,   107,    56,    49,    79,    64,   111,    81,    82,
      83,   116,    84,    98,    85,   100,    31,    12,   106,   109,
     105,   108,   126,   114,   127,   110,   118,    31,    66,    67,
      68,   119,    69,    70,    71,    72,    73,    74,   120,   121,
     122,    13,   123,    66,    67,    68,    96,    69,    70,    71,
      72,    73,    74,   125,   130,   132,   134,   133,    66,    67,
      68,   117,    69,    70,    71,    72,    73,    74,    57,    58,
       0,     0,    99,    66,    67,    68,   131,    69,    70,    71,
      72,    73,    74,     0,     0,    86,    66,    67,    68,     0,
      69,    70,    71,    72,    73,    74,    66,    67,     0,     0,
      69,    70,    71,    72,    73,    74
};

static const yytype_int8 yycheck[] =
{
      14,    20,    40,     1,    22,    20,    20,     5,     6,     7,
       8,     9,     3,    11,    20,    13,    14,    25,    26,    34,
      14,    15,    16,    37,    20,     4,    44,    31,    34,    33,
      48,    49,    30,    31,    28,     0,     5,    55,    34,    23,
      24,    25,    26,    10,    82,    28,    84,    29,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    30,    28,    77,
      28,     5,     6,    14,    83,    28,    85,    20,     1,    83,
      14,    85,     5,     6,     7,     8,     9,    32,    11,     8,
      13,    14,   100,    32,    34,    33,    14,   105,    14,    32,
      29,   110,    28,    15,    29,    20,   110,    30,    35,    29,
      34,    32,   121,    16,   122,    12,    30,   121,    17,    18,
      19,    15,    21,    22,    23,    24,    25,    26,    14,    29,
      34,    11,    15,    17,    18,    19,    35,    21,    22,    23,
      24,    25,    26,    35,    34,    15,    35,    15,    17,    18,
      19,    35,    21,    22,    23,    24,    25,    26,    37,    37,
      -1,    -1,    79,    17,    18,    19,    35,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    17,    18,    -1,    -1,
      21,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    37,    38,     4,     0,     5,    39,    10,    28,
      29,    40,    30,    41,    42,     1,     5,     6,     7,     8,
       9,    11,    13,    14,    31,    41,    43,    44,    45,    46,
      51,    52,    55,    56,    60,    61,    62,    28,    28,    43,
      28,    14,    15,    16,    28,    52,    53,    54,    20,    34,
      32,    14,    47,    48,    49,    20,    32,    46,    51,    57,
      53,    58,     8,    58,    14,    53,    17,    18,    19,    21,
      22,    23,    24,    25,    26,    53,    53,    20,    34,    33,
      53,    14,    32,    29,    28,    29,    29,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    35,    53,    15,    48,
      20,    58,    43,    58,    43,    34,    35,    53,    32,    29,
      12,    53,    20,    34,    16,    59,    43,    35,    30,    15,
      14,    29,    34,    15,    50,    35,    43,    53,    31,    33,
      34,    35,    15,    15,    35
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
#line 47 "parser.y"
    {
           if(syntax_valid) {
               printf("\nSyntax is Valid!\n");
           } else {
               printf("\nSyntax is Invalid! Check errors above.\n");
           }
       ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    {
                init_symbol_table();
                enter_scope();
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {
                print_symbol_table();
                exit_scope();
                free_symbol_table();
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { 
             syntax_valid = 0;
             YYABORT;
         ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { current_type = TYPE_INT; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { current_type = TYPE_CHAR; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {
              if (!add_symbol((yyvsp[(1) - (1)].strval), current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              free((yyvsp[(1) - (1)].strval));
          ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {
              if (!add_symbol((yyvsp[(1) - (3)].strval), current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              Symbol* sym = lookup_symbol((yyvsp[(1) - (3)].strval));
              if (sym) {
                  // Store the initialization value
                  int value = (yyvsp[(3) - (3)].intval);
                  update_symbol_value((yyvsp[(1) - (3)].strval), &value);
                  sym->is_initialized = 1;
                  // Update the value string explicitly
                  sprintf(sym->value_str, "%d", value);
              }
              free((yyvsp[(1) - (3)].strval));
          ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {
             int dims[1] = {(yyvsp[(3) - (4)].intval)};
             if (!add_array_symbol((yyvsp[(1) - (4)].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[(1) - (4)].strval));
         ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {
             int dims[2] = {(yyvsp[(3) - (7)].intval), (yyvsp[(6) - (7)].intval)};
             if (!add_array_symbol((yyvsp[(1) - (7)].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 2)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[(1) - (7)].strval));
         ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {
             int dims[3] = {(yyvsp[(3) - (10)].intval), (yyvsp[(6) - (10)].intval), (yyvsp[(9) - (10)].intval)};
             if (!add_array_symbol((yyvsp[(1) - (10)].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 3)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[(1) - (10)].strval));
         ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {
             int dims[1] = {(yyvsp[(3) - (8)].intval)};
             if (!add_array_symbol((yyvsp[(1) - (8)].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             Symbol* sym = lookup_symbol((yyvsp[(1) - (8)].strval));
             if (sym) sym->is_initialized = 1;
             free((yyvsp[(1) - (8)].strval));
         ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {
             Symbol* sym = lookup_symbol((yyvsp[(1) - (3)].strval));
             if (!sym) {
                 yyerror("Undefined variable");
             } else {
                 add_symbol_use((yyvsp[(1) - (3)].strval), line_number);
                 
                 switch(sym->type) {
                     case TYPE_INT: {
                         int value = (yyvsp[(3) - (3)].intval);
                         update_symbol_value((yyvsp[(1) - (3)].strval), &value);
                         sym->is_initialized = 1;
                         sprintf(sym->value_str, "%d", value);  
                         break;
                     }
                     case TYPE_CHAR: {
                         char value = (char)(yyvsp[(3) - (3)].intval);
                         update_symbol_value((yyvsp[(1) - (3)].strval), &value);
                         sym->is_initialized = 1;
                         break;
                     }
                     case TYPE_INT_ARRAY:
                     case TYPE_CHAR_ARRAY:
                         yyerror("Cannot assign scalar value to array");
                         break;
                     default:
                         yyerror("Invalid type for assignment");
                 }
             }
             free((yyvsp[(1) - (3)].strval));
         ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
              Symbol* sym = lookup_symbol((yyvsp[(1) - (4)].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[(1) - (4)].strval), line_number);
          ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {
              Symbol* sym = lookup_symbol((yyvsp[(1) - (7)].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[(1) - (7)].strval), line_number);
          ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {
              Symbol* sym = lookup_symbol((yyvsp[(1) - (10)].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[(1) - (10)].strval), line_number);
          ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + (yyvsp[(3) - (3)].intval);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) - (yyvsp[(3) - (3)].intval); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) * (yyvsp[(3) - (3)].intval); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    { 
        if ((yyvsp[(3) - (3)].intval) == 0) {
            yyerror("Division by zero");
            (yyval.intval) = 0;
        } else {
            (yyval.intval) = (yyvsp[(1) - (3)].intval) / (yyvsp[(3) - (3)].intval);
        }
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { (yyval.intval) = ((yyvsp[(1) - (3)].intval) == (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    { (yyval.intval) = ((yyvsp[(1) - (3)].intval) < (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { (yyval.intval) = ((yyvsp[(1) - (3)].intval) > (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { (yyval.intval) = ((yyvsp[(1) - (3)].intval) <= (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { (yyval.intval) = ((yyvsp[(1) - (3)].intval) >= (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {
        (yyval.intval) = (yyvsp[(1) - (1)].intval);
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {
        Symbol* sym = lookup_symbol((yyvsp[(1) - (1)].strval));
        if (!sym) {
            yyerror("Undefined variable");
            (yyval.intval) = 0;
        } else {
            add_symbol_use((yyvsp[(1) - (1)].strval), line_number);
            switch(sym->type) {
                case TYPE_INT:
                    (yyval.intval) = sym->value.int_val;
                    break;
                case TYPE_CHAR:
                    (yyval.intval) = (int)sym->value.char_val;
                    break;
                default:
                    yyerror("Invalid type in expression");
                    (yyval.intval) = 0;
            }
        }
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {
        Symbol* sym = lookup_symbol((yyvsp[(2) - (2)].strval));
        if (!sym) {
            yyerror("Undefined variable");
            (yyval.intval) = 0;
        } else {
            add_symbol_use((yyvsp[(2) - (2)].strval), line_number);
            if (sym->type == TYPE_INT) {
                sym->value.int_val++;
                (yyval.intval) = sym->value.int_val;
                sprintf(sym->value_str, "%d", sym->value.int_val);
            } else {
                yyerror("Invalid type for increment");
                (yyval.intval) = 0;
            }
        }
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { (yyval.intval) = 0; /* Array access value handling */ ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {
           if (!add_symbol((yyvsp[(2) - (4)].strval), current_type, line_number)) {
               yyerror("Variable already declared in this scope");
           }
           Symbol* sym = lookup_symbol((yyvsp[(2) - (4)].strval));
           if (sym) {
               int value = (yyvsp[(4) - (4)].intval);
               update_symbol_value((yyvsp[(2) - (4)].strval), &value);
               sym->is_initialized = 1;
           }
           free((yyvsp[(2) - (4)].strval));
       ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    {
          Symbol* sym = lookup_symbol((yyvsp[(2) - (2)].strval));
          if (!sym) {
              yyerror("Undefined variable");
          }
          add_symbol_use((yyvsp[(2) - (2)].strval), line_number);
          free((yyvsp[(2) - (2)].strval));
      ;}
    break;



/* Line 1455 of yacc.c  */
#line 1907 "parser.tab.c"
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
#line 354 "parser.y"


void yyerror(const char *s) {
    syntax_valid = 0;
    fprintf(stderr, "\nError at line %d, column %d: %s\n", line_number, column, s);
    fprintf(stderr, "Near token: '%s'\n", yytext);
    exit(1);
}

int main() {
    printf("Starting syntax analysis...\n");
    int result = yyparse();
    return result;
}

