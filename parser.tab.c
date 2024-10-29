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

#define YYDEBUG 1
// Function prototypes
void yyerror(const char *s);
int yylex();
extern int yylineno; 
extern FILE *yyin;
extern FILE *tokenFile, *parserFile,*outputCPP;
extern FILE *yyout; // Declare yyout

#line 86 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEFT_BRACE = 3,                 /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 4,                /* RIGHT_BRACE  */
  YYSYMBOL_LEFT_PAR = 5,                   /* LEFT_PAR  */
  YYSYMBOL_RIGHT_PAR = 6,                  /* RIGHT_PAR  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_COLON = 8,                      /* COLON  */
  YYSYMBOL_SEMICOLON = 9,                  /* SEMICOLON  */
  YYSYMBOL_QUESTION_MARK = 10,             /* QUESTION_MARK  */
  YYSYMBOL_LESS_THAN = 11,                 /* LESS_THAN  */
  YYSYMBOL_GREATER = 12,                   /* GREATER  */
  YYSYMBOL_DOUBLE_EQUAL = 13,              /* DOUBLE_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 14,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 15,             /* GREATER_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 16,                 /* NOT_EQUAL  */
  YYSYMBOL_SET = 17,                       /* SET  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_LOOP = 20,                      /* LOOP  */
  YYSYMBOL_FINALLY = 21,                   /* FINALLY  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_FUNCTION = 23,                  /* FUNCTION  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
  YYSYMBOL_SIZE = 25,                      /* SIZE  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_FLOAT = 27,                     /* FLOAT  */
  YYSYMBOL_SMALL = 28,                     /* SMALL  */
  YYSYMBOL_BIG = 29,                       /* BIG  */
  YYSYMBOL_VOID = 30,                      /* VOID  */
  YYSYMBOL_LEFT_BRACKET = 31,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 32,             /* RIGHT_BRACKET  */
  YYSYMBOL_RIG_POINTER = 33,               /* RIG_POINTER  */
  YYSYMBOL_LF_POINTER = 34,                /* LF_POINTER  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_SUB = 36,                       /* SUB  */
  YYSYMBOL_MUL = 37,                       /* MUL  */
  YYSYMBOL_DIV = 38,                       /* DIV  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_EQUAL_OPERATOR = 40,            /* EQUAL_OPERATOR  */
  YYSYMBOL_BIT_OR = 41,                    /* BIT_OR  */
  YYSYMBOL_BIT_AND = 42,                   /* BIT_AND  */
  YYSYMBOL_BIT_XOR = 43,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 44,                   /* BIT_NOT  */
  YYSYMBOL_LOG_OR = 45,                    /* LOG_OR  */
  YYSYMBOL_LOG_AND = 46,                   /* LOG_AND  */
  YYSYMBOL_LOG_NOT = 47,                   /* LOG_NOT  */
  YYSYMBOL_IDENTIFIER = 48,                /* IDENTIFIER  */
  YYSYMBOL_INTNUM = 49,                    /* INTNUM  */
  YYSYMBOL_FLOATNUM = 50,                  /* FLOATNUM  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_Start = 52,                     /* Start  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_header = 54,                    /* header  */
  YYSYMBOL_setUp = 55,                     /* setUp  */
  YYSYMBOL_func_declarations = 56,         /* func_declarations  */
  YYSYMBOL_set_statements = 57,            /* set_statements  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_session = 62,                   /* session  */
  YYSYMBOL_subsession = 63,                /* subsession  */
  YYSYMBOL_Variable_Declaration = 64,      /* Variable_Declaration  */
  YYSYMBOL_Type = 65,                      /* Type  */
  YYSYMBOL_IdentifierList = 66,            /* IdentifierList  */
  YYSYMBOL_Identifier = 67,                /* Identifier  */
  YYSYMBOL_Assignment_Statement = 68,      /* Assignment_Statement  */
  YYSYMBOL_rhs = 69,                       /* rhs  */
  YYSYMBOL_lhs = 70,                       /* lhs  */
  YYSYMBOL_func_call = 71,                 /* func_call  */
  YYSYMBOL_func_call_arguments = 72,       /* func_call_arguments  */
  YYSYMBOL_push_pop_statements = 73,       /* push_pop_statements  */
  YYSYMBOL_expression = 74,                /* expression  */
  YYSYMBOL_terminal_expression = 75,       /* terminal_expression  */
  YYSYMBOL_variable = 76,                  /* variable  */
  YYSYMBOL_if_else_statements = 77,        /* if_else_statements  */
  YYSYMBOL_ifelse_statements = 78,         /* ifelse_statements  */
  YYSYMBOL_loop = 79,                      /* loop  */
  YYSYMBOL_final = 80,                     /* final  */
  YYSYMBOL_func_declaration = 81,          /* func_declaration  */
  YYSYMBOL_func_dec_arguments = 82,        /* func_dec_arguments  */
  YYSYMBOL_func_dec_argument = 83          /* func_dec_argument  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    47,    47,    47,    51,    55,    59,    67,    71,    75,
      75,    76,    76,    77,    77,    78,    78,    82,    89,    92,
      98,   104,   110,   115,   121,   129,   138,   139,   140,   143,
     149,   150,   152,   156,   157,   160,   166,   176,   180,   181,
     185,   193,   198,   199,   203,   208,   213,   218,   223,   231,
     232,   236,   241,   247,   253,   259,   265,   271,   277,   283,
     289,   295,   301,   307,   313,   319,   325,   331,   337,   343,
     349,   355,   361,   367,   376,   377,   378,   379,   382,   388,
     397,   403,   408,   412,   420,   424,   428,   440,   453,   457,
     458,   462
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
  "\"end of file\"", "error", "\"invalid token\"", "LEFT_BRACE",
  "RIGHT_BRACE", "LEFT_PAR", "RIGHT_PAR", "COMMA", "COLON", "SEMICOLON",
  "QUESTION_MARK", "LESS_THAN", "GREATER", "DOUBLE_EQUAL", "LESS_EQUAL",
  "GREATER_EQUAL", "NOT_EQUAL", "SET", "IF", "ELSE", "LOOP", "FINALLY",
  "RETURN", "FUNCTION", "PRINT", "SIZE", "INT", "FLOAT", "SMALL", "BIG",
  "VOID", "LEFT_BRACKET", "RIGHT_BRACKET", "RIG_POINTER", "LF_POINTER",
  "ADD", "SUB", "MUL", "DIV", "MOD", "EQUAL_OPERATOR", "BIT_OR", "BIT_AND",
  "BIT_XOR", "BIT_NOT", "LOG_OR", "LOG_AND", "LOG_NOT", "IDENTIFIER",
  "INTNUM", "FLOATNUM", "$accept", "Start", "$@1", "header", "setUp",
  "func_declarations", "set_statements", "$@2", "$@3", "$@4", "$@5",
  "session", "subsession", "Variable_Declaration", "Type",
  "IdentifierList", "Identifier", "Assignment_Statement", "rhs", "lhs",
  "func_call", "func_call_arguments", "push_pop_statements", "expression",
  "terminal_expression", "variable", "if_else_statements",
  "ifelse_statements", "loop", "final", "func_declaration",
  "func_dec_arguments", "func_dec_argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -105,     6,    -9,  -105,   -14,  -105,    18,    42,   -11,    -8,
    -105,   -33,  -105,  -105,  -105,  -105,  -105,  -105,   371,    50,
      18,  -105,  -105,  -105,  -105,   432,    51,    51,    57,    34,
    -105,  -105,   398,    51,    51,    51,    51,     5,  -105,  -105,
    -105,    59,    22,  -105,    62,    95,    97,    98,   508,    68,
    -105,  -105,    32,    32,    78,   102,   458,  -105,    51,   472,
     101,    32,    51,    79,    80,    82,    46,    46,   520,    41,
      51,    51,    85,    89,  -105,    75,  -105,   114,   100,  -105,
    -105,  -105,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    32,    22,
     113,   119,    32,  -105,  -105,  -105,    22,    96,    81,  -105,
      94,   127,   130,   111,    25,    51,    -1,    22,    -2,  -105,
    -105,   508,   -12,   -12,   -12,   -12,   -12,   -12,    46,    46,
    -105,  -105,  -105,   520,   520,   520,    41,    41,  -105,    16,
      32,   142,   201,   125,  -105,  -105,   103,  -105,    51,  -105,
    -105,   122,   123,  -105,  -105,  -105,   146,   155,  -105,  -105,
     157,    84,   151,    51,  -105,  -105,  -105,  -105,  -105,   156,
    -105,  -105,  -105,   159,   235,  -105,   371,   201,    51,  -105,
     269,  -105,   160,  -105,   162,   161,  -105,   303,   150,   165,
    -105,   163,  -105,   337,  -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     8,     1,     0,     2,     6,     0,     0,     0,
      18,     0,     7,     8,    11,     9,    13,    15,     3,     0,
       5,    12,    10,    14,    16,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,     0,    74,    75,    76,
      17,     0,    32,    49,     0,     0,     0,     0,    50,    51,
      23,    24,    90,     0,    74,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    54,    55,
      43,     0,     0,     0,    20,    33,    25,    30,     0,    21,
      22,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    52,    53,    18,    32,     0,     0,    28,
       0,     0,    42,     0,     0,     0,     0,    32,    74,    36,
      38,    39,    71,    70,    61,    69,    68,    67,    62,    63,
      64,    65,    66,    59,    58,    60,    73,    72,    91,     0,
      90,     0,    82,     0,    78,    48,     0,    40,    43,    77,
      47,     0,     0,    34,    35,    31,     0,     0,    88,    29,
       0,     0,     0,     0,    45,    41,    46,    44,    18,     0,
      18,    18,    79,     0,     0,    18,    81,    82,     0,    87,
       0,    80,     0,    86,     0,     0,    18,     0,    85,     0,
      83,     0,    18,     0,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,  -105,   164,  -105,  -105,  -105,  -105,
    -105,  -104,  -105,  -105,   -21,  -101,    77,  -105,  -105,  -105,
     104,    30,  -105,   -25,   106,   -18,  -105,     2,  -105,  -105,
    -105,    40,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    10,     2,     5,     6,     7,    22,    21,    23,
      24,    18,    40,    41,    42,    76,    77,    43,    44,   119,
      45,   111,    46,    47,    48,    57,    50,   162,    51,   190,
      12,   100,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   142,    60,    70,    55,   143,     3,    65,     4,    49,
      70,    64,     8,     9,    49,    19,   155,    14,    15,    98,
      16,    17,   156,    88,    89,    90,    91,    92,    58,    71,
      26,    99,    64,    96,    97,    98,    71,   107,    72,    73,
     106,    11,    30,    31,    49,   112,   113,    53,   153,   154,
      29,    13,    49,    49,    58,    52,    26,   150,    30,    31,
      33,    34,    61,    53,   174,    62,   176,   177,    74,    35,
      75,   180,    36,    54,    38,    39,    29,    55,    90,    91,
      92,   141,   187,    90,    91,    92,    33,    34,   193,   151,
     152,    96,    97,    81,   171,    35,    49,    49,    36,    54,
      38,    39,    78,    58,    79,    26,    80,    81,   -37,    71,
     102,   105,   109,   108,   110,   116,   114,   161,   157,    99,
     115,   117,   139,   112,    49,    29,   140,   146,   144,   145,
      49,    56,    59,   147,   163,    33,    34,   148,   173,    66,
      67,    68,    69,   149,    35,    49,   159,    36,   118,    38,
      39,   164,   161,   182,   166,   167,    49,   168,    49,    49,
      49,   169,    49,   172,    56,   170,   184,   175,   178,    49,
     185,   189,   186,   191,   192,    49,   138,    20,   165,   181,
     158,     0,   120,     0,   121,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    25,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
     160,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,     0,    33,    34,    25,     0,
      26,     0,     0,     0,     0,    35,    27,   179,    36,    37,
      38,    39,     0,     0,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,     0,     0,
      33,    34,    25,     0,    26,     0,     0,     0,     0,    35,
      27,   183,    36,    37,    38,    39,     0,     0,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,     0,    33,    34,    25,     0,    26,     0,
       0,     0,     0,    35,    27,   188,    36,    37,    38,    39,
       0,     0,     0,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,     0,    33,    34,
      25,     0,    26,     0,     0,     0,     0,    35,    27,   194,
      36,    37,    38,    39,     0,     0,     0,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,     0,    33,    34,    25,     0,    26,     0,     0,     0,
       0,    35,    27,     0,    36,    37,    38,    39,     0,     0,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,    25,    32,    26,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,    36,    37,
      38,    39,     0,    29,    30,    31,     0,     0,     0,    53,
      63,     0,     0,    33,    34,    25,     0,    26,     0,     0,
       0,     0,    35,     0,     0,    36,    54,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,   103,    53,     0,     0,     0,    33,    34,    82,
      83,    84,    85,    86,    87,     0,    35,     0,   104,    36,
      54,    38,    39,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,    93,
      94,    95,     0,    96,    97,     0,     0,    88,    89,    90,
      91,    92,     0,    93,    94,    95,     0,    96,    97,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,    93,
      94,    95,     0,    96,    97,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,    96,    97
};

static const yytype_int16 yycheck[] =
{
      18,   105,    27,     5,    25,   106,     0,    32,    17,    27,
       5,    32,    26,    27,    32,    48,   117,    28,    29,     3,
      28,    29,     6,    35,    36,    37,    38,    39,     3,    31,
       5,    52,    53,    45,    46,     3,    31,    62,    33,    34,
      61,    23,    26,    27,    62,    70,    71,    31,    49,    50,
      25,     9,    70,    71,     3,     5,     5,    32,    26,    27,
      35,    36,     5,    31,   168,    31,   170,   171,     9,    44,
      48,   175,    47,    48,    49,    50,    25,    98,    37,    38,
      39,   102,   186,    37,    38,    39,    35,    36,   192,   114,
     115,    45,    46,     9,    10,    44,   114,   115,    47,    48,
      49,    50,    40,     3,     9,     5,     9,     9,    40,    31,
       8,    10,    32,    34,    32,    40,    31,   142,   139,   140,
      31,     7,     9,   148,   142,    25,     7,    33,    32,    48,
     148,    25,    26,     6,     9,    35,    36,     7,   163,    33,
      34,    35,    36,    32,    44,   163,     4,    47,    48,    49,
      50,    48,   177,   178,    32,    32,   174,    11,   176,   177,
     178,     6,   180,    12,    58,     8,     6,    11,     9,   187,
       8,    21,    11,     8,    11,   193,    99,    13,   148,   177,
     140,    -1,    78,    -1,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,     3,    -1,
       5,    -1,    -1,    -1,    -1,    44,    11,    12,    47,    48,
      49,    50,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,     3,    -1,     5,    -1,    -1,    -1,    -1,    44,
      11,    12,    47,    48,    49,    50,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    36,     3,    -1,     5,    -1,
      -1,    -1,    -1,    44,    11,    12,    47,    48,    49,    50,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
       3,    -1,     5,    -1,    -1,    -1,    -1,    44,    11,    12,
      47,    48,    49,    50,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,     3,    -1,     5,    -1,    -1,    -1,
      -1,    44,    11,    -1,    47,    48,    49,    50,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,     3,    31,     5,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    48,
      49,    50,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,     3,    -1,     5,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,     4,    31,    -1,    -1,    -1,    35,    36,    11,
      12,    13,    14,    15,    16,    -1,    44,    -1,     6,    47,
      48,    49,    50,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    45,    46,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    45,    46,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    45,    46,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    54,     0,    17,    55,    56,    57,    26,    27,
      53,    23,    81,     9,    28,    29,    28,    29,    62,    48,
      56,    59,    58,    60,    61,     3,     5,    11,    20,    25,
      26,    27,    31,    35,    36,    44,    47,    48,    49,    50,
      63,    64,    65,    68,    69,    71,    73,    74,    75,    76,
      77,    79,     5,    31,    48,    65,    75,    76,     3,    75,
      74,     5,    31,    32,    65,    74,    75,    75,    75,    75,
       5,    31,    33,    34,     9,    48,    66,    67,    40,     9,
       9,     9,    11,    12,    13,    14,    15,    16,    35,    36,
      37,    38,    39,    41,    42,    43,    45,    46,     3,    65,
      82,    83,     8,     4,     6,    10,    65,    74,    34,    32,
      32,    72,    74,    74,    31,    31,    40,     7,    48,    70,
      71,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    67,     9,
       7,    65,    62,    66,    32,    48,    33,     6,     7,    32,
      32,    74,    74,    49,    50,    66,     6,    65,    82,     4,
      19,    74,    78,     9,    48,    72,    32,    32,    11,     6,
       8,    10,    12,    74,    62,    11,    62,    62,     9,    12,
      62,    78,    74,    12,     6,     8,    11,    62,    12,    21,
      80,     8,    11,    62,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    53,    52,    54,    55,    55,    56,    56,    58,
      57,    59,    57,    60,    57,    61,    57,    62,    62,    63,
      63,    63,    63,    63,    63,    64,    65,    65,    65,    65,
      66,    66,    66,    67,    67,    67,    68,    69,    70,    70,
      71,    72,    72,    72,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    77,
      78,    78,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     1,     2,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     2,     0,     2,
       2,     2,     2,     1,     1,     2,     1,     1,     3,     5,
       1,     3,     0,     1,     3,     3,     3,     1,     1,     1,
       4,     3,     1,     0,     5,     5,     5,     4,     4,     1,
       1,     1,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     4,     4,     6,
       4,     3,     0,    14,     5,     0,    10,     9,     3,     1,
       0,     2
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
  case 2: /* $@1: %empty  */
#line 47 "parser.y"
                   {fprintf(outputCPP, "%sint main(){\n",(yyvsp[0].str_val));}
#line 1363 "parser.tab.c"
    break;

  case 3: /* Start: header setUp $@1 session  */
#line 47 "parser.y"
                                                                      {fprintf(outputCPP, "%s}\n",(yyvsp[0].str_val));}
#line 1369 "parser.tab.c"
    break;

  case 4: /* header: %empty  */
#line 51 "parser.y"
      {fprintf(outputCPP, "#include <bits/stdcpp++>\n");}
#line 1375 "parser.tab.c"
    break;

  case 5: /* setUp: set_statements SEMICOLON func_declarations  */
#line 55 "parser.y"
                                                 { 
          (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
          sprintf((yyval.str_val), "%s%s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
      }
#line 1384 "parser.tab.c"
    break;

  case 6: /* setUp: func_declarations  */
#line 59 "parser.y"
                        {
          (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
          sprintf((yyval.str_val), "%s", (yyvsp[0].str_val));
      }
#line 1393 "parser.tab.c"
    break;

  case 7: /* func_declarations: func_declarations func_declaration  */
#line 67 "parser.y"
                                         { (yyval.str_val) = (char*) malloc(strlen((yyvsp[-1].str_val)) + strlen((yyvsp[0].str_val)) + 2);
      sprintf((yyval.str_val), "%s%s\n", (yyvsp[-1].str_val), (yyvsp[0].str_val));
      free((yyvsp[-1].str_val));
      free((yyvsp[0].str_val)); }
#line 1402 "parser.tab.c"
    break;

  case 8: /* func_declarations: %empty  */
#line 71 "parser.y"
     { (yyval.str_val)=strdup("");}
#line 1408 "parser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 75 "parser.y"
                        { fprintf(outputCPP, "#define int long long\n"); }
#line 1414 "parser.tab.c"
    break;

  case 10: /* set_statements: SET INT BIG $@2  */
#line 75 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1420 "parser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 76 "parser.y"
                        { fprintf(outputCPP, "#define int int\n"); }
#line 1426 "parser.tab.c"
    break;

  case 12: /* set_statements: SET INT SMALL $@3  */
#line 76 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1432 "parser.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 77 "parser.y"
                        { fprintf(outputCPP, "#define float float\n"); }
#line 1438 "parser.tab.c"
    break;

  case 14: /* set_statements: SET FLOAT SMALL $@4  */
#line 77 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1444 "parser.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 78 "parser.y"
                        { fprintf(outputCPP, "#define float double\n"); }
#line 1450 "parser.tab.c"
    break;

  case 16: /* set_statements: SET FLOAT BIG $@5  */
#line 78 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1456 "parser.tab.c"
    break;

  case 17: /* session: session subsession  */
#line 83 "parser.y"
     {
      (yyval.str_val) = (char*) malloc(strlen((yyvsp[-1].str_val)) + strlen((yyvsp[0].str_val)) + 2);
      sprintf((yyval.str_val), "%s%s\n", (yyvsp[-1].str_val), (yyvsp[0].str_val));
      free((yyvsp[-1].str_val));
      free((yyvsp[0].str_val));
    }
#line 1467 "parser.tab.c"
    break;

  case 18: /* session: %empty  */
#line 89 "parser.y"
      { (yyval.str_val)=strdup("");}
#line 1473 "parser.tab.c"
    break;

  case 19: /* subsession: expression SEMICOLON  */
#line 93 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s;\n", (yyvsp[-1].str_val));
    free((yyvsp[-1].str_val));
    }
#line 1483 "parser.tab.c"
    break;

  case 20: /* subsession: Variable_Declaration SEMICOLON  */
#line 99 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s\n", (yyvsp[-1].str_val));
    free((yyvsp[-1].str_val));
    }
#line 1493 "parser.tab.c"
    break;

  case 21: /* subsession: func_call SEMICOLON  */
#line 105 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s\n", (yyvsp[-1].str_val));
    free((yyvsp[-1].str_val));
    }
#line 1503 "parser.tab.c"
    break;

  case 22: /* subsession: push_pop_statements SEMICOLON  */
#line 111 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s\n", "push_pop_statements");
    }
#line 1512 "parser.tab.c"
    break;

  case 23: /* subsession: if_else_statements  */
#line 116 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s\n", (yyvsp[0].str_val));
    free((yyvsp[0].str_val));
    }
#line 1522 "parser.tab.c"
    break;

  case 24: /* subsession: loop  */
#line 122 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s\n", (yyvsp[0].str_val));
    free((yyvsp[0].str_val));
    }
#line 1532 "parser.tab.c"
    break;

  case 25: /* Variable_Declaration: Type IdentifierList  */
#line 130 "parser.y"
    {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "%s %s;", (yyvsp[-1].str_val), (yyvsp[0].str_val));
    }
#line 1541 "parser.tab.c"
    break;

  case 26: /* Type: INT  */
#line 138 "parser.y"
                  { (yyval.str_val) = strdup("int"); }
#line 1547 "parser.tab.c"
    break;

  case 27: /* Type: FLOAT  */
#line 139 "parser.y"
                { (yyval.str_val) = strdup("float"); }
#line 1553 "parser.tab.c"
    break;

  case 28: /* Type: LEFT_BRACKET Type RIGHT_BRACKET  */
#line 140 "parser.y"
                                     {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"vector<%s>", (yyvsp[-1].str_val));
                                            free((yyvsp[-1].str_val));}
#line 1561 "parser.tab.c"
    break;

  case 29: /* Type: LEFT_BRACE Type COLON Type RIGHT_BRACE  */
#line 143 "parser.y"
                                            {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"map<%s,%s>", (yyvsp[-3].str_val),(yyvsp[-1].str_val));
                                            free((yyvsp[-3].str_val));}
#line 1569 "parser.tab.c"
    break;

  case 30: /* IdentifierList: Identifier  */
#line 149 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1575 "parser.tab.c"
    break;

  case 31: /* IdentifierList: Identifier COMMA IdentifierList  */
#line 150 "parser.y"
                                      {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val))+strlen((yyvsp[0].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s, %s", (yyvsp[-2].str_val),(yyvsp[0].str_val));}
#line 1582 "parser.tab.c"
    break;

  case 32: /* IdentifierList: %empty  */
#line 152 "parser.y"
      {(yyval.str_val) = strdup("");}
#line 1588 "parser.tab.c"
    break;

  case 33: /* Identifier: IDENTIFIER  */
#line 156 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1594 "parser.tab.c"
    break;

  case 34: /* Identifier: IDENTIFIER EQUAL_OPERATOR INTNUM  */
#line 157 "parser.y"
                                       {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s = %d", (yyvsp[-2].str_val),(yyvsp[0].int_val));
                                            free((yyvsp[-2].str_val));}
#line 1602 "parser.tab.c"
    break;

  case 35: /* Identifier: IDENTIFIER EQUAL_OPERATOR FLOATNUM  */
#line 160 "parser.y"
                                         {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s = %f", (yyvsp[-2].str_val),(yyvsp[0].float_val));
                                            free((yyvsp[-2].str_val));}
#line 1610 "parser.tab.c"
    break;

  case 36: /* Assignment_Statement: rhs EQUAL_OPERATOR lhs  */
#line 167 "parser.y"
      { 
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 50);
          sprintf((yyval.str_val), "%s = %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val));
          free((yyvsp[0].str_val));
      }
#line 1621 "parser.tab.c"
    break;

  case 37: /* rhs: variable  */
#line 176 "parser.y"
               {(yyval.str_val)= (yyvsp[0].str_val);}
#line 1627 "parser.tab.c"
    break;

  case 38: /* lhs: func_call  */
#line 180 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1633 "parser.tab.c"
    break;

  case 39: /* lhs: terminal_expression  */
#line 181 "parser.y"
                          {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1639 "parser.tab.c"
    break;

  case 40: /* func_call: IDENTIFIER LEFT_PAR func_call_arguments RIGHT_PAR  */
#line 186 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s(%s)", (yyvsp[-3].str_val),(yyvsp[-1].str_val));
    }
#line 1648 "parser.tab.c"
    break;

  case 41: /* func_call_arguments: expression COMMA func_call_arguments  */
#line 194 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s,%s", (yyvsp[-2].str_val),(yyvsp[0].str_val));
    }
#line 1657 "parser.tab.c"
    break;

  case 42: /* func_call_arguments: expression  */
#line 198 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1663 "parser.tab.c"
    break;

  case 43: /* func_call_arguments: %empty  */
#line 199 "parser.y"
      {(yyval.str_val) =strdup("");}
#line 1669 "parser.tab.c"
    break;

  case 44: /* push_pop_statements: IDENTIFIER LF_POINTER LEFT_BRACKET expression RIGHT_BRACKET  */
#line 204 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s.push_back(%s);", (yyvsp[-4].str_val),(yyvsp[-1].str_val));
    }
#line 1678 "parser.tab.c"
    break;

  case 45: /* push_pop_statements: LEFT_BRACKET expression RIGHT_BRACKET RIG_POINTER IDENTIFIER  */
#line 209 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s.insert(%s.begin(), %s);", (yyvsp[0].str_val),(yyvsp[0].str_val),(yyvsp[-3].str_val));
    }
#line 1687 "parser.tab.c"
    break;

  case 46: /* push_pop_statements: IDENTIFIER RIG_POINTER LEFT_BRACKET expression RIGHT_BRACKET  */
#line 214 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s = %s.back();\n %s.pop_back()", (yyvsp[-1].str_val),(yyvsp[-4].str_val),(yyvsp[-4].str_val));
    }
#line 1696 "parser.tab.c"
    break;

  case 47: /* push_pop_statements: IDENTIFIER RIG_POINTER LEFT_BRACKET RIGHT_BRACKET  */
#line 219 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s.pop_back()",(yyvsp[-3].str_val));
    }
#line 1705 "parser.tab.c"
    break;

  case 48: /* push_pop_statements: LEFT_BRACKET RIGHT_BRACKET LF_POINTER IDENTIFIER  */
#line 224 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"%s.erase(%s.begin());",(yyvsp[0].str_val),(yyvsp[0].str_val));
    }
#line 1714 "parser.tab.c"
    break;

  case 49: /* expression: Assignment_Statement  */
#line 231 "parser.y"
                           {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1720 "parser.tab.c"
    break;

  case 50: /* expression: terminal_expression  */
#line 232 "parser.y"
                          {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1726 "parser.tab.c"
    break;

  case 51: /* terminal_expression: variable  */
#line 237 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[0].str_val)) + 1);
          strcpy((yyval.str_val), (yyvsp[0].str_val));
      }
#line 1735 "parser.tab.c"
    break;

  case 52: /* terminal_expression: LEFT_BRACE terminal_expression RIGHT_BRACE  */
#line 242 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 3);
          sprintf((yyval.str_val), "{%s}", (yyvsp[-1].str_val));
          free((yyvsp[-1].str_val));
      }
#line 1745 "parser.tab.c"
    break;

  case 53: /* terminal_expression: LEFT_PAR terminal_expression RIGHT_PAR  */
#line 248 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 3);
          sprintf((yyval.str_val), "(%s)", (yyvsp[-1].str_val));
          free((yyvsp[-1].str_val));
      }
#line 1755 "parser.tab.c"
    break;

  case 54: /* terminal_expression: BIT_NOT terminal_expression  */
#line 254 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "~%s", (yyvsp[0].str_val));
          free((yyvsp[0].str_val));
      }
#line 1765 "parser.tab.c"
    break;

  case 55: /* terminal_expression: LOG_NOT terminal_expression  */
#line 260 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "!%s", (yyvsp[0].str_val));
          free((yyvsp[0].str_val));
      }
#line 1775 "parser.tab.c"
    break;

  case 56: /* terminal_expression: ADD terminal_expression  */
#line 266 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[0].str_val)) + 2);
          sprintf((yyval.str_val), "+%s", (yyvsp[0].str_val));
          free((yyvsp[0].str_val));
      }
#line 1785 "parser.tab.c"
    break;

  case 57: /* terminal_expression: SUB terminal_expression  */
#line 272 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[0].str_val)) + 2);
          sprintf((yyval.str_val), "-%s", (yyvsp[0].str_val));
          free((yyvsp[0].str_val));
      }
#line 1795 "parser.tab.c"
    break;

  case 58: /* terminal_expression: terminal_expression BIT_AND terminal_expression  */
#line 278 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s & %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1805 "parser.tab.c"
    break;

  case 59: /* terminal_expression: terminal_expression BIT_OR terminal_expression  */
#line 284 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s | %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1815 "parser.tab.c"
    break;

  case 60: /* terminal_expression: terminal_expression BIT_XOR terminal_expression  */
#line 290 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s ^ %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1825 "parser.tab.c"
    break;

  case 61: /* terminal_expression: terminal_expression DOUBLE_EQUAL terminal_expression  */
#line 296 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s == %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1835 "parser.tab.c"
    break;

  case 62: /* terminal_expression: terminal_expression ADD terminal_expression  */
#line 302 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s + %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1845 "parser.tab.c"
    break;

  case 63: /* terminal_expression: terminal_expression SUB terminal_expression  */
#line 308 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s - %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1855 "parser.tab.c"
    break;

  case 64: /* terminal_expression: terminal_expression MUL terminal_expression  */
#line 314 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s * %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1865 "parser.tab.c"
    break;

  case 65: /* terminal_expression: terminal_expression DIV terminal_expression  */
#line 320 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s / %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1875 "parser.tab.c"
    break;

  case 66: /* terminal_expression: terminal_expression MOD terminal_expression  */
#line 326 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s %% %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1885 "parser.tab.c"
    break;

  case 67: /* terminal_expression: terminal_expression NOT_EQUAL terminal_expression  */
#line 332 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s != %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1895 "parser.tab.c"
    break;

  case 68: /* terminal_expression: terminal_expression GREATER_EQUAL terminal_expression  */
#line 338 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s >= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1905 "parser.tab.c"
    break;

  case 69: /* terminal_expression: terminal_expression LESS_EQUAL terminal_expression  */
#line 344 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s <= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1915 "parser.tab.c"
    break;

  case 70: /* terminal_expression: terminal_expression GREATER terminal_expression  */
#line 350 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s > %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1925 "parser.tab.c"
    break;

  case 71: /* terminal_expression: terminal_expression LESS_THAN terminal_expression  */
#line 356 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 4);
          sprintf((yyval.str_val), "%s < %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1935 "parser.tab.c"
    break;

  case 72: /* terminal_expression: terminal_expression LOG_AND terminal_expression  */
#line 362 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s && %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1945 "parser.tab.c"
    break;

  case 73: /* terminal_expression: terminal_expression LOG_OR terminal_expression  */
#line 368 "parser.y"
      {
          (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 5);
          sprintf((yyval.str_val), "%s || %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
          free((yyvsp[-2].str_val)); free((yyvsp[0].str_val));
      }
#line 1955 "parser.tab.c"
    break;

  case 74: /* variable: IDENTIFIER  */
#line 376 "parser.y"
                 {(yyval.str_val) = (char *)malloc(50);sprintf((yyval.str_val),"%s", (yyvsp[0].str_val));}
#line 1961 "parser.tab.c"
    break;

  case 75: /* variable: INTNUM  */
#line 377 "parser.y"
            {(yyval.str_val) = (char *)malloc(50);sprintf((yyval.str_val),"%d", (yyvsp[0].int_val));}
#line 1967 "parser.tab.c"
    break;

  case 76: /* variable: FLOATNUM  */
#line 378 "parser.y"
              {(yyval.str_val) = (char *)malloc(50);sprintf((yyval.str_val),"%f", (yyvsp[0].float_val));}
#line 1973 "parser.tab.c"
    break;

  case 77: /* variable: IDENTIFIER LEFT_BRACKET expression RIGHT_BRACKET  */
#line 379 "parser.y"
                                                      {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s[%s]", (yyvsp[-3].str_val),(yyvsp[-1].str_val));
                                            free((yyvsp[-3].str_val));free((yyvsp[-1].str_val));}
#line 1981 "parser.tab.c"
    break;

  case 78: /* variable: SIZE LEFT_BRACKET expression RIGHT_BRACKET  */
#line 382 "parser.y"
                                                {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"sizeof(%s)",(yyvsp[-1].str_val));
                                            free((yyvsp[-1].str_val));}
#line 1989 "parser.tab.c"
    break;

  case 79: /* if_else_statements: LESS_THAN expression QUESTION_MARK session ifelse_statements GREATER  */
#line 389 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"if(%s)\n{\n%s\n}\n%s", (yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val));
        free((yyvsp[-4].str_val));free((yyvsp[-2].str_val));
    }
#line 1999 "parser.tab.c"
    break;

  case 80: /* ifelse_statements: expression QUESTION_MARK session ifelse_statements  */
#line 398 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"elseif(%s)\n{\n%s\n}\n%s", (yyvsp[-3].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val));
        free((yyvsp[-3].str_val));free((yyvsp[0].str_val));
    }
#line 2009 "parser.tab.c"
    break;

  case 81: /* ifelse_statements: ELSE COLON session  */
#line 404 "parser.y"
    {
        (yyval.str_val) = (char *)malloc(1024);
        sprintf((yyval.str_val),"else\n{\n%s\n}\n", (yyvsp[0].str_val));
    }
#line 2018 "parser.tab.c"
    break;

  case 82: /* ifelse_statements: %empty  */
#line 408 "parser.y"
      {(yyval.str_val)=strdup("");}
#line 2024 "parser.tab.c"
    break;

  case 83: /* loop: LOOP LEFT_PAR Type IdentifierList SEMICOLON expression SEMICOLON expression RIGHT_PAR COLON LESS_THAN session GREATER final  */
#line 413 "parser.y"
    { 
        (yyval.str_val) = (char*)malloc(1024); 
        sprintf((yyval.str_val), "%s %s\nfor (%s ; %s ; %s) \n{\nHello%s\n}\n%s", (yyvsp[-11].str_val),(yyvsp[-10].str_val),(yyvsp[-10].str_val),(yyvsp[-8].str_val), (yyvsp[-6].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)); 
    }
#line 2033 "parser.tab.c"
    break;

  case 84: /* final: FINALLY COLON LESS_THAN session GREATER  */
#line 421 "parser.y"
    { 
        (yyval.str_val) = (yyvsp[-1].str_val);
    }
#line 2041 "parser.tab.c"
    break;

  case 85: /* final: %empty  */
#line 424 "parser.y"
        {(yyval.str_val)=strdup("");}
#line 2047 "parser.tab.c"
    break;

  case 86: /* func_declaration: FUNCTION IDENTIFIER LEFT_PAR func_dec_arguments SEMICOLON Type RIGHT_PAR LESS_THAN session GREATER  */
#line 430 "parser.y"
   {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));  
    sprintf((yyval.str_val), "%s %s(%s) {\n%s}\n", (yyvsp[-4].str_val), (yyvsp[-8].str_val), (yyvsp[-6].str_val), (yyvsp[-1].str_val)); 

    free((yyvsp[-4].str_val));
    free((yyvsp[-8].str_val));
    free((yyvsp[-6].str_val));
    free((yyvsp[-1].str_val));
    }
#line 2061 "parser.tab.c"
    break;

  case 87: /* func_declaration: FUNCTION IDENTIFIER LEFT_PAR func_dec_arguments SEMICOLON RIGHT_PAR LESS_THAN session GREATER  */
#line 442 "parser.y"
   {
    (yyval.str_val) = (char *)malloc(1024 * sizeof(char));
    sprintf((yyval.str_val), "void %s(%s) {\n%s}\n", (yyvsp[-7].str_val), (yyvsp[-5].str_val), (yyvsp[-1].str_val));
    free((yyvsp[-7].str_val));
    free((yyvsp[-5].str_val));
    free((yyvsp[-1].str_val));
}
#line 2073 "parser.tab.c"
    break;

  case 88: /* func_dec_arguments: func_dec_argument COMMA func_dec_arguments  */
#line 453 "parser.y"
                                                 {
        (yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + strlen((yyvsp[0].str_val)) + 3); 
        sprintf((yyval.str_val), "%s, %s", (yyvsp[-2].str_val), (yyvsp[0].str_val)); 
    }
#line 2082 "parser.tab.c"
    break;

  case 89: /* func_dec_arguments: func_dec_argument  */
#line 457 "parser.y"
                        {(yyval.str_val) = (yyvsp[0].str_val);}
#line 2088 "parser.tab.c"
    break;

  case 90: /* func_dec_arguments: %empty  */
#line 458 "parser.y"
      {(yyval.str_val) = strdup("");}
#line 2094 "parser.tab.c"
    break;

  case 91: /* func_dec_argument: Type Identifier  */
#line 463 "parser.y"
    {
      (yyval.str_val) = (char*)malloc(strlen((yyvsp[-1].str_val)) + strlen((yyvsp[0].str_val)) + 2);
      sprintf((yyval.str_val), "%s %s", (yyvsp[-1].str_val), (yyvsp[0].str_val));
    }
#line 2103 "parser.tab.c"
    break;


#line 2107 "parser.tab.c"

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

#line 470 "parser.y"


// Function to handle errors
void yyerror(const char *s) {
    fprintf(parserFile, "\nError: %s at line %d.\n", s, yylineno);
    fprintf(tokenFile, "\nError: %s at line %d.\n", s, yylineno);
    printf("Error: %s at line %d.\n", s, yylineno);
}

// Main function
int main(int argc, char *argv[]) {
    if (argc != 5) {  // Check for the correct number of arguments
        printf("Usage: %s <input file> <token file> <parser file> <output file>\n", argv[0]);
        return 1;
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        perror("Error opening input file"); // Use perror for better error messages
        return 1;
    }

    tokenFile = fopen(argv[2], "w");
    if (!tokenFile) {
        perror("Failed to open token file");
        fclose(yyin); // Make sure to close the input file before exiting
        exit(EXIT_FAILURE);
    }
    parserFile = fopen(argv[3], "w");
    if (parserFile == NULL) {
        perror("Error opening parser file");
        fclose(inputFile);
        fclose(tokenFile);
        return 1;
    }

    outputCPP = fopen(argv[4], "w");
    if (outputCPP == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        fclose(tokenFile);
        fclose(parserFile);
        return 1;
    }
    yyin = inputFile;  
    yyout = tokenFile; 
    int parser_output = yyparse();  // Start parsing
    if (parser_output == 0) {
        printf("Parsing done successfully\n");
    } else {
        printf("Parsing failed at line no %d\n", yylineno);
    }

    // Cleanup: close all open files
    fclose(inputFile);
    fclose(tokenFile);
    fclose(parserFile);
    fclose(outputCPP);
    
    return 0;
}
