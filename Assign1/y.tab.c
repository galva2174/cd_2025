/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INCLUDE = 258,               /* T_INCLUDE  */
    T_STDIO = 259,                 /* T_STDIO  */
    T_INT = 260,                   /* T_INT  */
    T_CHAR = 261,                  /* T_CHAR  */
    T_FOR = 262,                   /* T_FOR  */
    T_WHILE = 263,                 /* T_WHILE  */
    T_DO = 264,                    /* T_DO  */
    T_MAIN = 265,                  /* T_MAIN  */
    T_IF = 266,                    /* T_IF  */
    T_ELSE = 267,                  /* T_ELSE  */
    T_RETURN = 268,                /* T_RETURN  */
    T_ID = 269,                    /* T_ID  */
    T_NUM = 270,                   /* T_NUM  */
    T_INC = 271,                   /* T_INC  */
    T_LE = 272,                    /* T_LE  */
    T_GE = 273,                    /* T_GE  */
    T_EQ = 274,                    /* T_EQ  */
    IFX = 275                      /* IFX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INCLUDE 258
#define T_STDIO 259
#define T_INT 260
#define T_CHAR 261
#define T_FOR 262
#define T_WHILE 263
#define T_DO 264
#define T_MAIN 265
#define T_IF 266
#define T_ELSE 267
#define T_RETURN 268
#define T_ID 269
#define T_NUM 270
#define T_INC 271
#define T_LE 272
#define T_GE 273
#define T_EQ 274
#define IFX 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int intval;
    char* strval;
    struct {
        int dims[3];
        int count;
    } array_dims;

#line 188 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INCLUDE = 3,                  /* T_INCLUDE  */
  YYSYMBOL_T_STDIO = 4,                    /* T_STDIO  */
  YYSYMBOL_T_INT = 5,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 6,                     /* T_CHAR  */
  YYSYMBOL_T_FOR = 7,                      /* T_FOR  */
  YYSYMBOL_T_WHILE = 8,                    /* T_WHILE  */
  YYSYMBOL_T_DO = 9,                       /* T_DO  */
  YYSYMBOL_T_MAIN = 10,                    /* T_MAIN  */
  YYSYMBOL_T_IF = 11,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 12,                    /* T_ELSE  */
  YYSYMBOL_T_RETURN = 13,                  /* T_RETURN  */
  YYSYMBOL_T_ID = 14,                      /* T_ID  */
  YYSYMBOL_T_NUM = 15,                     /* T_NUM  */
  YYSYMBOL_T_INC = 16,                     /* T_INC  */
  YYSYMBOL_T_LE = 17,                      /* T_LE  */
  YYSYMBOL_T_GE = 18,                      /* T_GE  */
  YYSYMBOL_T_EQ = 19,                      /* T_EQ  */
  YYSYMBOL_20_ = 20,                       /* '='  */
  YYSYMBOL_21_ = 21,                       /* '<'  */
  YYSYMBOL_22_ = 22,                       /* '>'  */
  YYSYMBOL_23_ = 23,                       /* '+'  */
  YYSYMBOL_24_ = 24,                       /* '-'  */
  YYSYMBOL_25_ = 25,                       /* '*'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_IFX = 27,                       /* IFX  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '{'  */
  YYSYMBOL_31_ = 31,                       /* '}'  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* ','  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Program = 37,                   /* Program  */
  YYSYMBOL_Includes = 38,                  /* Includes  */
  YYSYMBOL_MainFunction = 39,              /* MainFunction  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_CompoundStmt = 41,              /* CompoundStmt  */
  YYSYMBOL_StmtList = 42,                  /* StmtList  */
  YYSYMBOL_Stmt = 43,                      /* Stmt  */
  YYSYMBOL_SimpleStmt = 44,                /* SimpleStmt  */
  YYSYMBOL_Declaration = 45,               /* Declaration  */
  YYSYMBOL_Type = 46,                      /* Type  */
  YYSYMBOL_DeclList = 47,                  /* DeclList  */
  YYSYMBOL_SingleDecl = 48,                /* SingleDecl  */
  YYSYMBOL_ArrayDecl = 49,                 /* ArrayDecl  */
  YYSYMBOL_ArrayInitList = 50,             /* ArrayInitList  */
  YYSYMBOL_Assignment = 51,                /* Assignment  */
  YYSYMBOL_ArrayAccess = 52,               /* ArrayAccess  */
  YYSYMBOL_Expr = 53,                      /* Expr  */
  YYSYMBOL_Term = 54,                      /* Term  */
  YYSYMBOL_IterationStmt = 55,             /* IterationStmt  */
  YYSYMBOL_ForStmt = 56,                   /* ForStmt  */
  YYSYMBOL_ForInit = 57,                   /* ForInit  */
  YYSYMBOL_Condition = 58,                 /* Condition  */
  YYSYMBOL_Update = 59,                    /* Update  */
  YYSYMBOL_WhileStmt = 60,                 /* WhileStmt  */
  YYSYMBOL_DoWhileStmt = 61,               /* DoWhileStmt  */
  YYSYMBOL_SelectionStmt = 62              /* SelectionStmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INCLUDE", "T_STDIO",
  "T_INT", "T_CHAR", "T_FOR", "T_WHILE", "T_DO", "T_MAIN", "T_IF",
  "T_ELSE", "T_RETURN", "T_ID", "T_NUM", "T_INC", "T_LE", "T_GE", "T_EQ",
  "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "IFX", "'('", "')'",
  "'{'", "'}'", "';'", "','", "'['", "']'", "$accept", "Program",
  "Includes", "MainFunction", "$@1", "CompoundStmt", "StmtList", "Stmt",
  "SimpleStmt", "Declaration", "Type", "DeclList", "SingleDecl",
  "ArrayDecl", "ArrayInitList", "Assignment", "ArrayAccess", "Expr",
  "Term", "IterationStmt", "ForStmt", "ForInit", "Condition", "Update",
  "WhileStmt", "DoWhileStmt", "SelectionStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   110,   -39,   -19,   -39,   -39,
     111,   -39,    73,   -39,   -39,   112,   -14,   -18,   -39,   -39,
     -39,   -39,   -38,   -39,   -39,   -39,   -39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     7,    11,    25,    14,    26,    27,    28,
      29,    52,    53,    54,   124,    30,    45,    60,    47,    32,
      33,    59,    61,   115,    34,    35,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    40,    39,    41,    42,    42,
      43,    43,    43,    43,    44,    44,    44,    44,    45,    46,
      46,    47,    47,    48,    48,    48,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    56,    57,    57,    57,    58,
      58,    59,    59,    60,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     6,     3,     2,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     3,     1,     1,     3,     1,     4,     7,    10,     8,
       3,     1,     3,     3,     4,     7,    10,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     1,     1,     2,     1,     9,     1,     4,     0,     1,
       0,     2,     0,     5,     6,     5,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Program: Includes MainFunction  */
#line 47 "parser.y"
       {
           if(syntax_valid) {
               printf("\nSyntax is Valid!\n");
           } else {
               printf("\nSyntax is Invalid! Check errors above.\n");
           }
       }
#line 1328 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 61 "parser.y"
            {
                init_symbol_table();
                enter_scope();
            }
#line 1337 "y.tab.c"
    break;

  case 6: /* MainFunction: T_INT T_MAIN '(' ')' $@1 CompoundStmt  */
#line 66 "parser.y"
            {
                print_symbol_table();
                exit_scope();
                free_symbol_table();
            }
#line 1347 "y.tab.c"
    break;

  case 17: /* SimpleStmt: error  */
#line 89 "parser.y"
                 { 
             syntax_valid = 0;
             YYABORT;
         }
#line 1356 "y.tab.c"
    break;

  case 19: /* Type: T_INT  */
#line 98 "parser.y"
             { current_type = TYPE_INT; }
#line 1362 "y.tab.c"
    break;

  case 20: /* Type: T_CHAR  */
#line 99 "parser.y"
             { current_type = TYPE_CHAR; }
#line 1368 "y.tab.c"
    break;

  case 23: /* SingleDecl: T_ID  */
#line 107 "parser.y"
          {
              if (!add_symbol((yyvsp[0].strval), current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              free((yyvsp[0].strval));
          }
#line 1379 "y.tab.c"
    break;

  case 24: /* SingleDecl: T_ID '=' Expr  */
#line 114 "parser.y"
          {
              if (!add_symbol((yyvsp[-2].strval), current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              Symbol* sym = lookup_symbol((yyvsp[-2].strval));
              if (sym) {
                  // Store the initialization value
                  int value = (yyvsp[0].intval);
                  update_symbol_value((yyvsp[-2].strval), &value);
                  sym->is_initialized = 1;
                  // Update the value string explicitly
                  sprintf(sym->value_str, "%d", value);
              }
              free((yyvsp[-2].strval));
          }
#line 1399 "y.tab.c"
    break;

  case 26: /* ArrayDecl: T_ID '[' T_NUM ']'  */
#line 133 "parser.y"
         {
             int dims[1] = {(yyvsp[-1].intval)};
             if (!add_array_symbol((yyvsp[-3].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[-3].strval));
         }
#line 1412 "y.tab.c"
    break;

  case 27: /* ArrayDecl: T_ID '[' T_NUM ']' '[' T_NUM ']'  */
#line 142 "parser.y"
         {
             int dims[2] = {(yyvsp[-4].intval), (yyvsp[-1].intval)};
             if (!add_array_symbol((yyvsp[-6].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 2)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[-6].strval));
         }
#line 1425 "y.tab.c"
    break;

  case 28: /* ArrayDecl: T_ID '[' T_NUM ']' '[' T_NUM ']' '[' T_NUM ']'  */
#line 151 "parser.y"
         {
             int dims[3] = {(yyvsp[-7].intval), (yyvsp[-4].intval), (yyvsp[-1].intval)};
             if (!add_array_symbol((yyvsp[-9].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 3)) {
                 yyerror("Array already declared in this scope");
             }
             free((yyvsp[-9].strval));
         }
#line 1438 "y.tab.c"
    break;

  case 29: /* ArrayDecl: T_ID '[' T_NUM ']' '=' '{' ArrayInitList '}'  */
#line 160 "parser.y"
         {
             int dims[1] = {(yyvsp[-5].intval)};
             if (!add_array_symbol((yyvsp[-7].strval), current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             Symbol* sym = lookup_symbol((yyvsp[-7].strval));
             if (sym) sym->is_initialized = 1;
             free((yyvsp[-7].strval));
         }
#line 1453 "y.tab.c"
    break;

  case 32: /* Assignment: T_ID '=' Expr  */
#line 177 "parser.y"
         {
             Symbol* sym = lookup_symbol((yyvsp[-2].strval));
             if (!sym) {
                 yyerror("Undefined variable");
             } else {
                 add_symbol_use((yyvsp[-2].strval), line_number);
                 
                 switch(sym->type) {
                     case TYPE_INT: {
                         int value = (yyvsp[0].intval);
                         update_symbol_value((yyvsp[-2].strval), &value);
                         sym->is_initialized = 1;
                         sprintf(sym->value_str, "%d", value);  
                         break;
                     }
                     case TYPE_CHAR: {
                         char value = (char)(yyvsp[0].intval);
                         update_symbol_value((yyvsp[-2].strval), &value);
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
             free((yyvsp[-2].strval));
         }
#line 1489 "y.tab.c"
    break;

  case 34: /* ArrayAccess: T_ID '[' Expr ']'  */
#line 212 "parser.y"
          {
              Symbol* sym = lookup_symbol((yyvsp[-3].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[-3].strval), line_number);
          }
#line 1501 "y.tab.c"
    break;

  case 35: /* ArrayAccess: T_ID '[' Expr ']' '[' Expr ']'  */
#line 220 "parser.y"
          {
              Symbol* sym = lookup_symbol((yyvsp[-6].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[-6].strval), line_number);
          }
#line 1513 "y.tab.c"
    break;

  case 36: /* ArrayAccess: T_ID '[' Expr ']' '[' Expr ']' '[' Expr ']'  */
#line 228 "parser.y"
          {
              Symbol* sym = lookup_symbol((yyvsp[-9].strval));
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use((yyvsp[-9].strval), line_number);
          }
#line 1525 "y.tab.c"
    break;

  case 37: /* Expr: Term  */
#line 237 "parser.y"
                       { (yyval.intval) = (yyvsp[0].intval); }
#line 1531 "y.tab.c"
    break;

  case 38: /* Expr: Expr '+' Expr  */
#line 238 "parser.y"
                       { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 1537 "y.tab.c"
    break;

  case 39: /* Expr: Expr '-' Expr  */
#line 239 "parser.y"
                       { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1543 "y.tab.c"
    break;

  case 40: /* Expr: Expr '*' Expr  */
#line 240 "parser.y"
                       { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1549 "y.tab.c"
    break;

  case 41: /* Expr: Expr '/' Expr  */
#line 241 "parser.y"
                       { 
        if ((yyvsp[0].intval) == 0) {
            yyerror("Division by zero");
            (yyval.intval) = 0;
        } else {
            (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);
        }
    }
#line 1562 "y.tab.c"
    break;

  case 42: /* Expr: Expr T_EQ Expr  */
#line 249 "parser.y"
                       { (yyval.intval) = ((yyvsp[-2].intval) == (yyvsp[0].intval)); }
#line 1568 "y.tab.c"
    break;

  case 43: /* Expr: Expr '<' Expr  */
#line 250 "parser.y"
                       { (yyval.intval) = ((yyvsp[-2].intval) < (yyvsp[0].intval)); }
#line 1574 "y.tab.c"
    break;

  case 44: /* Expr: Expr '>' Expr  */
#line 251 "parser.y"
                       { (yyval.intval) = ((yyvsp[-2].intval) > (yyvsp[0].intval)); }
#line 1580 "y.tab.c"
    break;

  case 45: /* Expr: Expr T_LE Expr  */
#line 252 "parser.y"
                       { (yyval.intval) = ((yyvsp[-2].intval) <= (yyvsp[0].intval)); }
#line 1586 "y.tab.c"
    break;

  case 46: /* Expr: Expr T_GE Expr  */
#line 253 "parser.y"
                       { (yyval.intval) = ((yyvsp[-2].intval) >= (yyvsp[0].intval)); }
#line 1592 "y.tab.c"
    break;

  case 47: /* Expr: '(' Expr ')'  */
#line 254 "parser.y"
                       { (yyval.intval) = (yyvsp[-1].intval); }
#line 1598 "y.tab.c"
    break;

  case 48: /* Term: T_NUM  */
#line 258 "parser.y"
    {
        (yyval.intval) = (yyvsp[0].intval);
    }
#line 1606 "y.tab.c"
    break;

  case 49: /* Term: T_ID  */
#line 262 "parser.y"
    {
        Symbol* sym = lookup_symbol((yyvsp[0].strval));
        if (!sym) {
            yyerror("Undefined variable");
            (yyval.intval) = 0;
        } else {
            add_symbol_use((yyvsp[0].strval), line_number);
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
        free((yyvsp[0].strval));
    }
#line 1632 "y.tab.c"
    break;

  case 50: /* Term: T_INC T_ID  */
#line 284 "parser.y"
    {
        Symbol* sym = lookup_symbol((yyvsp[0].strval));
        if (!sym) {
            yyerror("Undefined variable");
            (yyval.intval) = 0;
        } else {
            add_symbol_use((yyvsp[0].strval), line_number);
            if (sym->type == TYPE_INT) {
                sym->value.int_val++;
                (yyval.intval) = sym->value.int_val;
                sprintf(sym->value_str, "%d", sym->value.int_val);
            } else {
                yyerror("Invalid type for increment");
                (yyval.intval) = 0;
            }
        }
        free((yyvsp[0].strval));
    }
#line 1655 "y.tab.c"
    break;

  case 51: /* Term: ArrayAccess  */
#line 302 "parser.y"
                       { (yyval.intval) = 0; /* Array access value handling */ }
#line 1661 "y.tab.c"
    break;

  case 57: /* ForInit: Type T_ID '=' Expr  */
#line 314 "parser.y"
       {
           if (!add_symbol((yyvsp[-2].strval), current_type, line_number)) {
               yyerror("Variable already declared in this scope");
           }
           Symbol* sym = lookup_symbol((yyvsp[-2].strval));
           if (sym) {
               int value = (yyvsp[0].intval);
               update_symbol_value((yyvsp[-2].strval), &value);
               sym->is_initialized = 1;
           }
           free((yyvsp[-2].strval));
       }
#line 1678 "y.tab.c"
    break;

  case 59: /* Condition: Expr  */
#line 328 "parser.y"
                    { (yyval.intval) = (yyvsp[0].intval); }
#line 1684 "y.tab.c"
    break;

  case 60: /* Condition: %empty  */
#line 329 "parser.y"
                       { (yyval.intval) = 1; }
#line 1690 "y.tab.c"
    break;

  case 61: /* Update: T_INC T_ID  */
#line 333 "parser.y"
      {
          Symbol* sym = lookup_symbol((yyvsp[0].strval));
          if (!sym) {
              yyerror("Undefined variable");
          }
          add_symbol_use((yyvsp[0].strval), line_number);
          free((yyvsp[0].strval));
      }
#line 1703 "y.tab.c"
    break;


#line 1707 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

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
