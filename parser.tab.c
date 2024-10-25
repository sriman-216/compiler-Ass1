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
extern int yylineno; // Declare yylineno to keep track of line numbers
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
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_Type = 66,                      /* Type  */
  YYSYMBOL_IdentifierList = 67,            /* IdentifierList  */
  YYSYMBOL_Identifier = 68,                /* Identifier  */
  YYSYMBOL_Assignment_Statement = 69,      /* Assignment_Statement  */
  YYSYMBOL_rhs = 70,                       /* rhs  */
  YYSYMBOL_lhs = 71,                       /* lhs  */
  YYSYMBOL_func_call = 72,                 /* func_call  */
  YYSYMBOL_func_call_arguments = 73,       /* func_call_arguments  */
  YYSYMBOL_push_pop_statements = 74,       /* push_pop_statements  */
  YYSYMBOL_expression = 75,                /* expression  */
  YYSYMBOL_terminal_expression = 76,       /* terminal_expression  */
  YYSYMBOL_variable = 77,                  /* variable  */
  YYSYMBOL_if_else_statements = 78,        /* if_else_statements  */
  YYSYMBOL_if_statements = 79,             /* if_statements  */
  YYSYMBOL_ifelse_statements = 80,         /* ifelse_statements  */
  YYSYMBOL_else_statement = 81,            /* else_statement  */
  YYSYMBOL_loop = 82,                      /* loop  */
  YYSYMBOL_final = 83,                     /* final  */
  YYSYMBOL_func_declaration = 84,          /* func_declaration  */
  YYSYMBOL_func_dec_arguments = 85,        /* func_dec_arguments  */
  YYSYMBOL_func_dec_argument = 86,         /* func_dec_argument  */
  YYSYMBOL_returnStatement = 87            /* returnStatement  */
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
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    45,    49,    53,    54,    58,    59,    63,
      63,    64,    64,    65,    65,    66,    66,    70,    71,    75,
      76,    77,    78,    79,    80,    84,    84,    88,    89,    90,
      93,    99,   100,   102,   106,   107,   110,   116,   119,   123,
     124,   125,   129,   133,   134,   135,   139,   140,   141,   142,
     143,   147,   148,   149,   150,   151,   152,   153,   154,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   175,   176,   177,   178,
     179,   183,   187,   191,   192,   193,   197,   201,   204,   205,
     207,   209,   214,   215,   216,   219,   222
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
  "session", "subsession", "Variable_Declaration", "$@6", "Type",
  "IdentifierList", "Identifier", "Assignment_Statement", "rhs", "lhs",
  "func_call", "func_call_arguments", "push_pop_statements", "expression",
  "terminal_expression", "variable", "if_else_statements", "if_statements",
  "ifelse_statements", "else_statement", "loop", "final",
  "func_declaration", "func_dec_arguments", "func_dec_argument",
  "returnStatement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -58,    14,    24,   -58,   -22,   -58,    27,    49,   -16,   -12,
     -58,    17,   -58,   -58,   -58,   -58,   -58,   -58,   245,    63,
      27,   -58,   -58,   -58,   -58,   272,   307,   307,    68,    38,
     -58,   -58,    35,   307,   307,   307,   307,    18,   -58,   -58,
     -58,    65,    39,   -58,    46,    84,    85,    86,   323,    56,
     -58,   -58,     3,     3,    66,    91,    97,   307,    96,    98,
     -58,     3,   307,    77,    87,    93,   -58,   -58,   -58,   -58,
     307,   307,   104,   105,   -58,    76,   -58,   111,    55,   -58,
     -58,   -58,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,     3,    39,
     118,   130,     3,   -58,   -58,   -58,    28,   119,   106,    92,
     -58,   114,   144,   142,   123,   279,   307,   -14,   -58,    39,
      13,   -58,   -58,   323,   -58,   121,   121,   121,   121,   121,
     121,   -18,   -18,   -58,   -58,   -58,   359,   359,   359,   -13,
     -13,   -58,   169,     3,   147,   154,    47,   152,   -58,   307,
     -58,   -58,   125,   -58,   307,   -58,   -58,   139,   145,   -58,
     -58,   -58,   165,   175,   -58,   -58,   -58,   -58,   -58,   174,
     -58,   -58,   -58,   -58,   -58,   173,   245,    28,   307,    95,
     -58,   -58,   179,   -58,   143,   178,   307,   182,   187,   190,
     -58,   -58,   -58,   177,   180,   197,   -58,   195,   -58,   211,
     -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     8,     1,     0,     2,     6,     0,     0,     0,
      18,     0,     7,     8,    11,     9,    13,    15,     3,     0,
       5,    12,    10,    14,    16,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,     0,     0,    76,    77,    78,
      17,     0,    33,    57,     0,     0,     0,     0,    58,    59,
      23,    24,    94,     0,    76,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,    55,    56,    53,    54,
      45,     0,     0,     0,    19,    34,    25,    31,    39,    21,
      22,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    51,    52,    82,    85,     0,     0,     0,
      29,     0,     0,    44,     0,     0,     0,     0,    26,    33,
      76,    37,    40,    41,    59,    73,    72,    63,    71,    70,
      69,    64,    65,    66,    67,    68,    61,    60,    62,    75,
      74,    95,     0,    94,     0,     0,     0,     0,    84,     0,
      80,    50,     0,    42,    45,    79,    49,     0,     0,    35,
      36,    32,     0,     0,    92,    30,    18,    18,    81,     0,
      47,    43,    48,    46,    18,     0,    86,    85,     0,     0,
      18,    83,     0,    91,     0,     0,     0,     0,     0,     0,
      90,    18,    96,     0,    89,     0,    87,     0,    18,     0,
      88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   -58,   -58,   -58,   194,   -58,   -58,   -58,   -58,
     -58,   -57,   -58,   148,   -58,   -10,    99,   112,   -58,   -58,
     -58,   132,    61,   -58,   -25,   324,   344,   -58,   -58,    40,
     -58,   -58,   -58,   -58,    89,   -58,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    10,     2,     5,     6,     7,    22,    21,    23,
      24,    18,    40,    41,   118,    42,    76,    77,    43,    44,
     121,    45,   112,    46,    47,    48,    49,    50,    60,   147,
     148,    51,   196,    12,   100,   101,   187
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    58,    59,   106,     8,     9,    98,    65,    66,    67,
      68,    69,    14,    15,     3,    55,    16,    17,    70,    90,
      91,    92,    64,    70,    90,    91,    92,    96,    97,    30,
      31,    25,    56,    26,    53,   159,   160,   108,    25,    27,
      26,     4,    99,    64,    71,   113,   114,   145,    28,    71,
      11,    72,    73,    29,    30,    31,    81,   167,    13,    32,
      29,    30,    31,    33,    34,    19,    53,    63,    52,    62,
      33,    34,    35,    61,    74,    36,    37,    38,    39,    35,
      29,   146,    36,    54,    38,    39,    78,    75,    55,    29,
     157,   158,   144,    79,    80,    81,   -38,    71,    25,   102,
      26,   103,   104,   120,    38,    39,    27,   183,   105,   176,
     177,   109,    54,    38,    39,    28,   117,   179,   119,   110,
      29,    30,    31,   184,   169,   111,    32,   142,   149,   113,
      33,    34,   163,    99,   193,   115,   116,   143,   150,    35,
     151,   199,    36,    37,    38,    39,    25,   152,    26,   154,
     153,   165,   146,   182,    27,   155,    88,    89,    90,    91,
      92,   189,   166,    28,   168,   186,    96,    97,    29,    30,
      31,   172,    98,   170,    32,   162,   174,   173,    33,    34,
      25,   175,    26,   178,   180,   185,   188,    35,    27,   194,
      36,    37,    38,    39,   190,    30,    31,    28,   191,   192,
      53,   195,    29,    30,    31,   197,   198,    20,    32,   107,
     122,   141,    33,    34,    25,   171,    26,   181,   161,     0,
       0,    35,    27,   200,    36,    37,    38,    39,     0,     0,
       0,    28,   164,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,     0,    33,    34,    25,     0,
      26,     0,     0,     0,     0,    35,    27,     0,    36,    37,
      38,    39,     0,     0,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,     0,    25,    32,    26,     0,     0,
      33,    34,    57,     0,    26,     0,     0,     0,     0,    35,
       0,     0,    36,    37,    38,    39,     0,    29,    30,    31,
       0,     0,     0,    53,    29,     0,     0,    33,    34,     0,
      57,   156,    26,     0,    33,    34,    35,     0,     0,    36,
      54,    38,    39,    35,     0,     0,    36,    54,    38,    39,
       0,     0,    29,     0,    82,    83,    84,    85,    86,    87,
       0,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,    36,    54,    38,    39,    88,    89,
      90,    91,    92,     0,    93,    94,    95,     0,    96,    97,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,   123,     0,    96,    97,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   124,     0,     0,     0,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124
};

static const yytype_int16 yycheck[] =
{
      25,    26,    27,    60,    26,    27,     3,    32,    33,    34,
      35,    36,    28,    29,     0,    25,    28,    29,     5,    37,
      38,    39,    32,     5,    37,    38,    39,    45,    46,    26,
      27,     3,    57,     5,    31,    49,    50,    62,     3,    11,
       5,    17,    52,    53,    31,    70,    71,    19,    20,    31,
      23,    33,    34,    25,    26,    27,     9,    10,     9,    31,
      25,    26,    27,    35,    36,    48,    31,    32,     5,    31,
      35,    36,    44,     5,     9,    47,    48,    49,    50,    44,
      25,   106,    47,    48,    49,    50,    40,    48,    98,    25,
     115,   116,   102,     9,     9,     9,    40,    31,     3,     8,
       5,     4,     6,    48,    49,    50,    11,    12,    10,   166,
     167,    34,    48,    49,    50,    20,    40,   174,     7,    32,
      25,    26,    27,   180,   149,    32,    31,     9,     9,   154,
      35,    36,   142,   143,   191,    31,    31,     7,    32,    44,
      48,   198,    47,    48,    49,    50,     3,    33,     5,     7,
       6,     4,   177,   178,    11,    32,    35,    36,    37,    38,
      39,   186,     8,    20,    12,    22,    45,    46,    25,    26,
      27,    32,     3,    48,    31,     6,    11,    32,    35,    36,
       3,     6,     5,     9,    11,     6,     8,    44,    11,    12,
      47,    48,    49,    50,    12,    26,    27,    20,    11,     9,
      31,    21,    25,    26,    27,     8,    11,    13,    31,    61,
      78,    99,    35,    36,     3,   154,     5,   177,   119,    -1,
      -1,    44,    11,    12,    47,    48,    49,    50,    -1,    -1,
      -1,    20,   143,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,     3,    -1,
       5,    -1,    -1,    -1,    -1,    44,    11,    -1,    47,    48,
      49,    50,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,     3,    31,     5,    -1,    -1,
      35,    36,     3,    -1,     5,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    48,    49,    50,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    25,    -1,    -1,    35,    36,    -1,
       3,    32,     5,    -1,    35,    36,    44,    -1,    -1,    47,
      48,    49,    50,    44,    -1,    -1,    47,    48,    49,    50,
      -1,    -1,    25,    -1,    11,    12,    13,    14,    15,    16,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    48,    49,    50,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    45,    46,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    78,    -1,    45,    46,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    54,     0,    17,    55,    56,    57,    26,    27,
      53,    23,    84,     9,    28,    29,    28,    29,    62,    48,
      56,    59,    58,    60,    61,     3,     5,    11,    20,    25,
      26,    27,    31,    35,    36,    44,    47,    48,    49,    50,
      63,    64,    66,    69,    70,    72,    74,    75,    76,    77,
      78,    82,     5,    31,    48,    66,    75,     3,    75,    75,
      79,     5,    31,    32,    66,    75,    75,    75,    75,    75,
       5,    31,    33,    34,     9,    48,    67,    68,    40,     9,
       9,     9,    11,    12,    13,    14,    15,    16,    35,    36,
      37,    38,    39,    41,    42,    43,    45,    46,     3,    66,
      85,    86,     8,     4,     6,    10,    62,    64,    75,    34,
      32,    32,    73,    75,    75,    31,    31,    40,    65,     7,
      48,    71,    72,    76,    77,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    68,     9,     7,    66,    19,    75,    80,    81,     9,
      32,    48,    33,     6,     7,    32,    32,    75,    75,    49,
      50,    67,     6,    66,    85,     4,     8,    10,    12,    75,
      48,    73,    32,    32,    11,     6,    62,    62,     9,    62,
      11,    80,    75,    12,    62,     6,    22,    87,     8,    75,
      12,    11,     9,    62,    12,    21,    83,     8,    11,    62,
      12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    53,    52,    54,    55,    55,    56,    56,    58,
      57,    59,    57,    60,    57,    61,    57,    62,    62,    63,
      63,    63,    63,    63,    63,    65,    64,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    70,    71,
      71,    71,    72,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    78,    79,    80,    80,    80,    81,    82,    83,    83,
      84,    84,    85,    85,    85,    86,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     1,     2,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     2,     0,     2,
       2,     2,     2,     1,     1,     0,     3,     1,     1,     3,
       5,     1,     3,     0,     1,     3,     3,     3,     1,     0,
       1,     1,     4,     3,     1,     0,     5,     5,     5,     4,
       4,     3,     3,     2,     2,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     4,
       4,     5,     2,     4,     1,     0,     3,    13,     5,     0,
      11,     9,     3,     1,     0,     2,     3
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
#line 45 "parser.y"
                   {fprintf(outputCPP, "int main(){\n");}
#line 1347 "parser.tab.c"
    break;

  case 3: /* Start: header setUp $@1 session  */
#line 45 "parser.y"
                                                                 {fprintf(outputCPP, "}\n");}
#line 1353 "parser.tab.c"
    break;

  case 4: /* header: %empty  */
#line 49 "parser.y"
      {fprintf(outputCPP, "#include <bits/stdcpp++>\n");}
#line 1359 "parser.tab.c"
    break;

  case 5: /* setUp: set_statements SEMICOLON func_declarations  */
#line 53 "parser.y"
                                                {fprintf(outputCPP, "setup\n");}
#line 1365 "parser.tab.c"
    break;

  case 6: /* setUp: func_declarations  */
#line 54 "parser.y"
                         {fprintf(outputCPP, "setup\n");}
#line 1371 "parser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 63 "parser.y"
                          { fprintf(outputCPP, "#define int long long\n"); }
#line 1377 "parser.tab.c"
    break;

  case 10: /* set_statements: SET INT BIG $@2  */
#line 63 "parser.y"
                                                                             { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1383 "parser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 64 "parser.y"
                        { fprintf(outputCPP, "#define int int\n"); }
#line 1389 "parser.tab.c"
    break;

  case 12: /* set_statements: SET INT SMALL $@3  */
#line 64 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1395 "parser.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 65 "parser.y"
                        { fprintf(outputCPP, "#define float float\n"); }
#line 1401 "parser.tab.c"
    break;

  case 14: /* set_statements: SET FLOAT SMALL $@4  */
#line 65 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1407 "parser.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 66 "parser.y"
                        { fprintf(outputCPP, "#define float double\n"); }
#line 1413 "parser.tab.c"
    break;

  case 16: /* set_statements: SET FLOAT BIG $@5  */
#line 66 "parser.y"
                                                                           { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
#line 1419 "parser.tab.c"
    break;

  case 25: /* $@6: %empty  */
#line 84 "parser.y"
                                  { fprintf(outputCPP, "%s %s;\n", (yyvsp[-1].str_val), (yyvsp[0].str_val)); }
#line 1425 "parser.tab.c"
    break;

  case 26: /* Variable_Declaration: Type IdentifierList $@6  */
#line 84 "parser.y"
                                                                               { fprintf(parserFile, "%d: Variable Declaration\n", yylineno); }
#line 1431 "parser.tab.c"
    break;

  case 27: /* Type: INT  */
#line 88 "parser.y"
                  { (yyval.str_val) = strdup("int"); }
#line 1437 "parser.tab.c"
    break;

  case 28: /* Type: FLOAT  */
#line 89 "parser.y"
                { (yyval.str_val) = strdup("float"); }
#line 1443 "parser.tab.c"
    break;

  case 29: /* Type: LEFT_BRACKET Type RIGHT_BRACKET  */
#line 90 "parser.y"
                                     {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"vector<%s>", (yyvsp[-1].str_val));
                                            free((yyvsp[-1].str_val));}
#line 1451 "parser.tab.c"
    break;

  case 30: /* Type: LEFT_BRACE Type COLON Type RIGHT_BRACE  */
#line 93 "parser.y"
                                            {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"map<%s,%s>", (yyvsp[-3].str_val),(yyvsp[-1].str_val));
                                            free((yyvsp[-3].str_val));}
#line 1459 "parser.tab.c"
    break;

  case 31: /* IdentifierList: Identifier  */
#line 99 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1465 "parser.tab.c"
    break;

  case 32: /* IdentifierList: Identifier COMMA IdentifierList  */
#line 100 "parser.y"
                                     {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val))+strlen((yyvsp[0].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s, %s", (yyvsp[-2].str_val),(yyvsp[0].str_val));}
#line 1472 "parser.tab.c"
    break;

  case 33: /* IdentifierList: %empty  */
#line 102 "parser.y"
      {(yyval.str_val) = strdup("");}
#line 1478 "parser.tab.c"
    break;

  case 34: /* Identifier: IDENTIFIER  */
#line 106 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1484 "parser.tab.c"
    break;

  case 35: /* Identifier: IDENTIFIER EQUAL_OPERATOR INTNUM  */
#line 107 "parser.y"
                                      {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s =%d", (yyvsp[-2].str_val),(yyvsp[0].int_val));
                                            free((yyvsp[-2].str_val));}
#line 1492 "parser.tab.c"
    break;

  case 36: /* Identifier: IDENTIFIER EQUAL_OPERATOR FLOATNUM  */
#line 110 "parser.y"
                                        {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s = %f", (yyvsp[-2].str_val),(yyvsp[0].float_val));
                                            free((yyvsp[-2].str_val));}
#line 1500 "parser.tab.c"
    break;


#line 1504 "parser.tab.c"

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

#line 225 "parser.y"


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
