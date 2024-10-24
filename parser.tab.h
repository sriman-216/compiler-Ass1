/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    FLOATNUM = 305,                /* FLOATNUM  */
    EQUAL = 306                    /* EQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int int_val;               // Integer value
    float float_val;           // Float value
    char *str_val;             // String value

#line 121 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
