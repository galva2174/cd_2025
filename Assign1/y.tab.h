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

#line 116 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
