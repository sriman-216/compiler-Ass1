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
    LEFT_BRACE = 258,              /* LEFT_BRACE  */
    RIGHT_BRACE = 259,             /* RIGHT_BRACE  */
    LEFT_PAR = 260,                /* LEFT_PAR  */
    RIGHT_PAR = 261,               /* RIGHT_PAR  */
    COMMA = 262,                   /* COMMA  */
    COLON = 263,                   /* COLON  */
    SEMICOLON = 264,               /* SEMICOLON  */
    QUESTION_MARK = 265,           /* QUESTION_MARK  */
    LESS_THAN = 266,               /* LESS_THAN  */
    GREATER = 267,                 /* GREATER  */
    DOUBLE_EQUAL = 268,            /* DOUBLE_EQUAL  */
    LESS_EQUAL = 269,              /* LESS_EQUAL  */
    GREATER_EQUAL = 270,           /* GREATER_EQUAL  */
    NOT_EQUAL = 271,               /* NOT_EQUAL  */
    SET = 272,                     /* SET  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    LOOP = 275,                    /* LOOP  */
    FINALLY = 276,                 /* FINALLY  */
    RETURN = 277,                  /* RETURN  */
    FUNCTION = 278,                /* FUNCTION  */
    PRINT = 279,                   /* PRINT  */
    SIZE = 280,                    /* SIZE  */
    INT = 281,                     /* INT  */
    FLOAT = 282,                   /* FLOAT  */
    SMALL = 283,                   /* SMALL  */
    BIG = 284,                     /* BIG  */
    VOID = 285,                    /* VOID  */
    LEFT_BRACKET = 286,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 287,           /* RIGHT_BRACKET  */
    RIG_POINTER = 288,             /* RIG_POINTER  */
    LF_POINTER = 289,              /* LF_POINTER  */
    ADD = 290,                     /* ADD  */
    SUB = 291,                     /* SUB  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    MOD = 294,                     /* MOD  */
    EQUAL_OPERATOR = 295,          /* EQUAL_OPERATOR  */
    BIT_OR = 296,                  /* BIT_OR  */
    BIT_AND = 297,                 /* BIT_AND  */
    BIT_XOR = 298,                 /* BIT_XOR  */
    BIT_NOT = 299,                 /* BIT_NOT  */
    LOG_OR = 300,                  /* LOG_OR  */
    LOG_AND = 301,                 /* LOG_AND  */
    LOG_NOT = 302,                 /* LOG_NOT  */
    IDENTIFIER = 303,              /* IDENTIFIER  */
    INTNUM = 304,                  /* INTNUM  */
    FLOATNUM = 305                 /* FLOATNUM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LEFT_BRACE 258
#define RIGHT_BRACE 259
#define LEFT_PAR 260
#define RIGHT_PAR 261
#define COMMA 262
#define COLON 263
#define SEMICOLON 264
#define QUESTION_MARK 265
#define LESS_THAN 266
#define GREATER 267
#define DOUBLE_EQUAL 268
#define LESS_EQUAL 269
#define GREATER_EQUAL 270
#define NOT_EQUAL 271
#define SET 272
#define IF 273
#define ELSE 274
#define LOOP 275
#define FINALLY 276
#define RETURN 277
#define FUNCTION 278
#define PRINT 279
#define SIZE 280
#define INT 281
#define FLOAT 282
#define SMALL 283
#define BIG 284
#define VOID 285
#define LEFT_BRACKET 286
#define RIGHT_BRACKET 287
#define RIG_POINTER 288
#define LF_POINTER 289
#define ADD 290
#define SUB 291
#define MUL 292
#define DIV 293
#define MOD 294
#define EQUAL_OPERATOR 295
#define BIT_OR 296
#define BIT_AND 297
#define BIT_XOR 298
#define BIT_NOT 299
#define LOG_OR 300
#define LOG_AND 301
#define LOG_NOT 302
#define IDENTIFIER 303
#define INTNUM 304
#define FLOATNUM 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int int_val;               // Integer value
    float float_val;           // Float value
    char *str_val;             // String value

#line 242 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_header = 53,                    /* header  */
  YYSYMBOL_setUp = 54,                     /* setUp  */
  YYSYMBOL_session = 55,                   /* session  */
  YYSYMBOL_subsession = 56,                /* subsession  */
  YYSYMBOL_Variable_Declaration = 57,      /* Variable_Declaration  */
  YYSYMBOL_58_5 = 58,                      /* $@5  */
  YYSYMBOL_Type = 59,                      /* Type  */
  YYSYMBOL_IdentifierList = 60,            /* IdentifierList  */
  YYSYMBOL_Identifier = 61,                /* Identifier  */
  YYSYMBOL_Assignment_Statement = 62,      /* Assignment_Statement  */
  YYSYMBOL_rhs = 63,                       /* rhs  */
  YYSYMBOL_lhs = 64,                       /* lhs  */
  YYSYMBOL_func_call = 65,                 /* func_call  */
  YYSYMBOL_func_call_arguments = 66,       /* func_call_arguments  */
  YYSYMBOL_push_pop_statements = 67,       /* push_pop_statements  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_terminal_expression = 69,       /* terminal_expression  */
  YYSYMBOL_variable = 70,                  /* variable  */
  YYSYMBOL_if_else_statements = 71,        /* if_else_statements  */
  YYSYMBOL_if_statements = 72,             /* if_statements  */
  YYSYMBOL_ifelse_statements = 73,         /* ifelse_statements  */
  YYSYMBOL_else_statement = 74,            /* else_statement  */
  YYSYMBOL_loop = 75,                      /* loop  */
  YYSYMBOL_final = 76                      /* final  */
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
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

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
       0,    45,    45,    49,    55,    70,    71,    75,    76,    77,
      78,    79,    80,    84,    84,    88,    89,    90,    93,    99,
     100,   102,   106,   107,   110,   116,   119,   123,   124,   125,
     129,   133,   134,   135,   139,   140,   141,   142,   143,   147,
     148,   149,   150,   151,   152,   153,   154,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   175,   176,   177,   178,   179,   183,
     187,   191,   192,   193,   197,   201,   204,   205
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
  "INTNUM", "FLOATNUM", "$accept", "Start", "header", "setUp", "session",
  "subsession", "Variable_Declaration", "$@5", "Type", "IdentifierList",
  "Identifier", "Assignment_Statement", "rhs", "lhs", "func_call",
  "func_call_arguments", "push_pop_statements", "expression",
  "terminal_expression", "variable", "if_else_statements", "if_statements",
  "ifelse_statements", "else_statement", "loop", "final", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,     5,   -38,   -38,   -38,   133,   194,   126,   126,     7,
     -17,   -38,   -38,   160,   126,   126,   126,   126,    22,   -38,
     -38,   -38,    10,   -24,   -38,   -15,    28,    38,    40,   247,
      -8,   -38,   -38,    12,    26,    58,    63,   126,    62,    60,
     -38,    12,   126,    54,    57,    59,   -38,   -38,   -38,   -38,
     126,   126,    61,    64,   -38,    50,   -38,    87,    23,   -38,
     -38,   -38,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    12,    12,
     -38,   -38,   -38,    15,    94,    76,    70,   -38,    79,   103,
     109,    88,   221,   126,   -33,   -38,   -24,    -1,   -38,   -38,
     247,   -38,   177,   177,   177,   177,   177,   177,    68,    68,
     -38,   -38,   -38,   261,   261,   261,   -16,   -16,   119,   120,
      19,   115,   -38,   126,   -38,   -38,    84,   -38,   126,   -38,
     -38,   101,   105,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     130,   -38,   -38,   -38,   -38,   133,    15,   126,   -38,   136,
     137,   139,   -38,    49,   131,   146,   -38,   144,   -38,    99,
     -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     4,     1,     6,     2,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,    64,    65,
      66,     5,     0,    21,    45,     0,     0,     0,     0,    46,
      47,    11,    12,     0,    64,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    43,    44,    41,    42,
      33,     0,     0,     0,     7,    22,    13,    19,    27,     9,
      10,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    70,    73,     0,     0,     0,    17,     0,     0,
      32,     0,     0,     0,     0,    14,    21,    64,    25,    28,
      29,    47,    61,    60,    51,    59,    58,    57,    52,    53,
      54,    55,    56,    49,    48,    50,    63,    62,     0,     0,
       0,     0,    72,     0,    68,    38,     0,    30,    33,    67,
      37,     0,     0,    23,    24,    20,    18,     6,     6,    69,
       0,    35,    31,    36,    34,    74,    73,     0,    71,     0,
       0,     0,     6,     0,    77,     0,    75,     0,     6,     0,
      76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -37,   -38,   116,   -38,     0,    71,
     -38,   -38,   -38,   -38,    98,    43,   -38,    -6,   246,   266,
     -38,   -38,    20,   -38,   -38,   -38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     4,     5,    21,    22,    95,    23,    56,
      57,    24,    25,    98,    26,    89,    27,    28,    29,    30,
      31,    40,   121,   122,    32,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    38,    39,    83,    50,     3,    35,    45,    46,    47,
      48,    49,    41,    44,    42,    78,   133,   134,     6,    54,
       7,    70,    71,    72,    55,    58,     8,    50,    61,   138,
      51,    36,   -26,    44,   119,     9,    85,    59,    11,    12,
      10,    11,    12,    33,    90,    91,    13,    60,    10,    61,
      14,    15,     6,    51,     7,    52,    53,    51,    10,    16,
       8,   154,    17,    18,    19,    20,    79,    80,    81,     9,
      82,    97,    19,    20,    10,    11,    12,   120,    35,   118,
      13,    34,    19,    20,    14,    15,   131,   132,    86,    87,
      94,    88,    92,    16,    96,    93,    17,    18,    19,    20,
     145,   146,     6,   123,     7,    70,    71,    72,   124,   127,
       8,   160,   126,    76,    77,   153,   128,   140,   125,     9,
     129,   159,    90,   136,    10,    11,    12,   139,   137,    37,
      13,     7,   141,   143,    14,    15,     6,   144,     7,   147,
     120,   149,   150,    16,     8,   151,    17,    18,    19,    20,
     152,    10,   155,     9,   157,   158,    99,    84,    10,    11,
      12,    14,    15,     6,    13,     7,   148,   135,    14,    15,
      16,   142,     0,    17,    34,    19,    20,    16,     0,     0,
      17,    18,    19,    20,     0,    10,    11,    12,     0,     0,
       0,    33,    43,     0,     0,    14,    15,     6,     0,     7,
       0,     0,     0,     0,    16,     0,     0,    17,    34,    19,
      20,     0,    68,    69,    70,    71,    72,     0,     0,    10,
      11,    12,    76,    77,    37,    33,     7,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    17,    34,    19,    20,     0,    10,     0,     0,     0,
       0,     0,     0,   130,     0,     0,    14,    15,    62,    63,
      64,    65,    66,    67,     0,    16,     0,     0,    17,    34,
      19,    20,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,    68,    69,    70,    71,    72,     0,    73,    74,
      75,     0,    76,    77,     0,     0,    68,    69,    70,    71,
      72,     0,     0,     0,   100,     0,    76,    77,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   101,     0,     0,     0,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101
};

static const yytype_int16 yycheck[] =
{
       6,     7,     8,    40,     5,     0,     6,    13,    14,    15,
      16,    17,     5,    13,    31,     3,    49,    50,     3,     9,
       5,    37,    38,    39,    48,    40,    11,     5,     9,    10,
      31,    37,    40,    33,    19,    20,    42,     9,    26,    27,
      25,    26,    27,    31,    50,    51,    31,     9,    25,     9,
      35,    36,     3,    31,     5,    33,    34,    31,    25,    44,
      11,    12,    47,    48,    49,    50,     8,     4,     6,    20,
      10,    48,    49,    50,    25,    26,    27,    83,    78,    79,
      31,    48,    49,    50,    35,    36,    92,    93,    34,    32,
      40,    32,    31,    44,     7,    31,    47,    48,    49,    50,
     137,   138,     3,     9,     5,    37,    38,    39,    32,     6,
      11,    12,    33,    45,    46,   152,     7,   123,    48,    20,
      32,   158,   128,     4,    25,    26,    27,    12,     8,     3,
      31,     5,    48,    32,    35,    36,     3,    32,     5,     9,
     146,   147,     6,    44,    11,     8,    47,    48,    49,    50,
      11,    25,    21,    20,     8,    11,    58,    41,    25,    26,
      27,    35,    36,     3,    31,     5,   146,    96,    35,    36,
      44,   128,    -1,    47,    48,    49,    50,    44,    -1,    -1,
      47,    48,    49,    50,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,     3,    -1,     5,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    48,    49,
      50,    -1,    35,    36,    37,    38,    39,    -1,    -1,    25,
      26,    27,    45,    46,     3,    31,     5,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    48,    49,    50,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    11,    12,
      13,    14,    15,    16,    -1,    44,    -1,    -1,    47,    48,
      49,    50,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    -1,    45,    46,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    58,    -1,    45,    46,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    53,     0,    54,    55,     3,     5,    11,    20,
      25,    26,    27,    31,    35,    36,    44,    47,    48,    49,
      50,    56,    57,    59,    62,    63,    65,    67,    68,    69,
      70,    71,    75,    31,    48,    59,    68,     3,    68,    68,
      72,     5,    31,    32,    59,    68,    68,    68,    68,    68,
       5,    31,    33,    34,     9,    48,    60,    61,    40,     9,
       9,     9,    11,    12,    13,    14,    15,    16,    35,    36,
      37,    38,    39,    41,    42,    43,    45,    46,     3,     8,
       4,     6,    10,    55,    57,    68,    34,    32,    32,    66,
      68,    68,    31,    31,    40,    58,     7,    48,    64,    65,
      69,    70,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    59,    19,
      68,    73,    74,     9,    32,    48,    33,     6,     7,    32,
      32,    68,    68,    49,    50,    60,     4,     8,    10,    12,
      68,    48,    66,    32,    32,    55,    55,     9,    73,    68,
       6,     8,    11,    55,    12,    21,    76,     8,    11,    55,
      12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    55,    56,    56,    56,
      56,    56,    56,    58,    57,    59,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    62,    63,    64,    64,    64,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    71,
      72,    73,    73,    73,    74,    75,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     0,     2,     0,     2,     2,     2,
       2,     1,     1,     0,     3,     1,     1,     3,     5,     1,
       3,     0,     1,     3,     3,     3,     1,     0,     1,     1,
       4,     3,     1,     0,     5,     5,     5,     4,     4,     3,
       3,     2,     2,     2,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     4,     4,     5,
       2,     4,     1,     0,     3,    13,     5,     0
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
  case 3: /* header: %empty  */
#line 49 "parser.y"
      {fprintf(outputCPP, "#include <bits/stdc++>\n");}
#line 1441 "y.tab.c"
    break;

  case 4: /* setUp: %empty  */
#line 55 "parser.y"
      {(yyval.str_val) = strdup("");}
#line 1447 "y.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 84 "parser.y"
                                  { fprintf(outputCPP, "%s %s;\n", (yyvsp[-1].str_val), (yyvsp[0].str_val)); }
#line 1453 "y.tab.c"
    break;

  case 14: /* Variable_Declaration: Type IdentifierList $@5  */
#line 84 "parser.y"
                                                                               { fprintf(parserFile, "%d: Variable Declaration\n", yylineno); }
#line 1459 "y.tab.c"
    break;

  case 15: /* Type: INT  */
#line 88 "parser.y"
                  { (yyval.str_val) = strdup("int"); }
#line 1465 "y.tab.c"
    break;

  case 16: /* Type: FLOAT  */
#line 89 "parser.y"
                { (yyval.str_val) = strdup("float"); }
#line 1471 "y.tab.c"
    break;

  case 17: /* Type: LEFT_BRACKET Type RIGHT_BRACKET  */
#line 90 "parser.y"
                                     {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"vector<%s>", (yyvsp[-1].str_val));
                                            free((yyvsp[-1].str_val));}
#line 1479 "y.tab.c"
    break;

  case 18: /* Type: LEFT_BRACE Type COLON Type RIGHT_BRACE  */
#line 93 "parser.y"
                                            {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-1].str_val)) + 50);
                                            sprintf((yyval.str_val),"map<%s,%s>", (yyvsp[-3].str_val),(yyvsp[-1].str_val));
                                            free((yyvsp[-3].str_val));}
#line 1487 "y.tab.c"
    break;

  case 19: /* IdentifierList: Identifier  */
#line 99 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1493 "y.tab.c"
    break;

  case 20: /* IdentifierList: Identifier COMMA IdentifierList  */
#line 100 "parser.y"
                                     {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val))+strlen((yyvsp[0].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s, %s", (yyvsp[-2].str_val),(yyvsp[0].str_val));}
#line 1500 "y.tab.c"
    break;

  case 21: /* IdentifierList: %empty  */
#line 102 "parser.y"
      {(yyval.str_val) = strdup("");}
#line 1506 "y.tab.c"
    break;

  case 22: /* Identifier: IDENTIFIER  */
#line 106 "parser.y"
                {(yyval.str_val) = (yyvsp[0].str_val);}
#line 1512 "y.tab.c"
    break;

  case 23: /* Identifier: IDENTIFIER EQUAL_OPERATOR INTNUM  */
#line 107 "parser.y"
                                      {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s =%d", (yyvsp[-2].str_val),(yyvsp[0].int_val));
                                            free((yyvsp[-2].str_val));}
#line 1520 "y.tab.c"
    break;

  case 24: /* Identifier: IDENTIFIER EQUAL_OPERATOR FLOATNUM  */
#line 110 "parser.y"
                                        {(yyval.str_val) = (char *)malloc(strlen((yyvsp[-2].str_val)) + 50);
                                            sprintf((yyval.str_val),"%s = %f", (yyvsp[-2].str_val),(yyvsp[0].float_val));
                                            free((yyvsp[-2].str_val));}
#line 1528 "y.tab.c"
    break;


#line 1532 "y.tab.c"

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

#line 218 "parser.y"


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
