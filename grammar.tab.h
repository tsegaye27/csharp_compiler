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

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    COMMENT = 261,                 /* COMMENT  */
    KW_ABSTRACT = 262,             /* KW_ABSTRACT  */
    KW_AS = 263,                   /* KW_AS  */
    KW_BASE = 264,                 /* KW_BASE  */
    KW_BOOL = 265,                 /* KW_BOOL  */
    KW_BREAK = 266,                /* KW_BREAK  */
    KW_BYTE = 267,                 /* KW_BYTE  */
    KW_CASE = 268,                 /* KW_CASE  */
    KW_CATCH = 269,                /* KW_CATCH  */
    KW_CHAR = 270,                 /* KW_CHAR  */
    KW_CHECKED = 271,              /* KW_CHECKED  */
    KW_CLASS = 272,                /* KW_CLASS  */
    KW_CONST = 273,                /* KW_CONST  */
    KW_CONTINUE = 274,             /* KW_CONTINUE  */
    KW_DECIMAL = 275,              /* KW_DECIMAL  */
    KW_DEFAULT = 276,              /* KW_DEFAULT  */
    KW_DELEGATE = 277,             /* KW_DELEGATE  */
    KW_DO = 278,                   /* KW_DO  */
    KW_DOUBLE = 279,               /* KW_DOUBLE  */
    KW_ELSE = 280,                 /* KW_ELSE  */
    KW_ENUM = 281,                 /* KW_ENUM  */
    KW_EVENT = 282,                /* KW_EVENT  */
    KW_EXPLICIT = 283,             /* KW_EXPLICIT  */
    KW_EXTERN = 284,               /* KW_EXTERN  */
    KW_FALSE = 285,                /* KW_FALSE  */
    KW_FINALLY = 286,              /* KW_FINALLY  */
    KW_FIXED = 287,                /* KW_FIXED  */
    KW_FLOAT = 288,                /* KW_FLOAT  */
    KW_FOR = 289,                  /* KW_FOR  */
    KW_FOREACH = 290,              /* KW_FOREACH  */
    KW_GOTO = 291,                 /* KW_GOTO  */
    KW_IF = 292,                   /* KW_IF  */
    KW_IMPLICIT = 293,             /* KW_IMPLICIT  */
    KW_IN = 294,                   /* KW_IN  */
    KW_INT = 295,                  /* KW_INT  */
    KW_INTERFACE = 296,            /* KW_INTERFACE  */
    KW_INTERNAL = 297,             /* KW_INTERNAL  */
    KW_IS = 298,                   /* KW_IS  */
    KW_LOCK = 299,                 /* KW_LOCK  */
    KW_LONG = 300,                 /* KW_LONG  */
    KW_NAMESPACE = 301,            /* KW_NAMESPACE  */
    KW_NEW = 302,                  /* KW_NEW  */
    KW_NULL = 303,                 /* KW_NULL  */
    KW_OBJECT = 304,               /* KW_OBJECT  */
    KW_OPERATOR = 305,             /* KW_OPERATOR  */
    KW_OUT = 306,                  /* KW_OUT  */
    KW_OVERRIDE = 307,             /* KW_OVERRIDE  */
    KW_PARAMS = 308,               /* KW_PARAMS  */
    KW_PRIVATE = 309,              /* KW_PRIVATE  */
    KW_PROTECTED = 310,            /* KW_PROTECTED  */
    KW_PUBLIC = 311,               /* KW_PUBLIC  */
    KW_READONLY = 312,             /* KW_READONLY  */
    KW_REF = 313,                  /* KW_REF  */
    KW_RETURN = 314,               /* KW_RETURN  */
    KW_SBYTE = 315,                /* KW_SBYTE  */
    KW_SEALED = 316,               /* KW_SEALED  */
    KW_SHORT = 317,                /* KW_SHORT  */
    KW_SIZEOF = 318,               /* KW_SIZEOF  */
    KW_STACKALLOC = 319,           /* KW_STACKALLOC  */
    KW_STATIC = 320,               /* KW_STATIC  */
    KW_STRING = 321,               /* KW_STRING  */
    KW_STRUCT = 322,               /* KW_STRUCT  */
    KW_SWITCH = 323,               /* KW_SWITCH  */
    KW_THIS = 324,                 /* KW_THIS  */
    KW_THROW = 325,                /* KW_THROW  */
    KW_TRUE = 326,                 /* KW_TRUE  */
    KW_TRY = 327,                  /* KW_TRY  */
    KW_TYPEOF = 328,               /* KW_TYPEOF  */
    KW_UINT = 329,                 /* KW_UINT  */
    KW_ULONG = 330,                /* KW_ULONG  */
    KW_UNCHECKED = 331,            /* KW_UNCHECKED  */
    KW_UNSAFE = 332,               /* KW_UNSAFE  */
    KW_USHORT = 333,               /* KW_USHORT  */
    KW_USING = 334,                /* KW_USING  */
    KW_VIRTUAL = 335,              /* KW_VIRTUAL  */
    KW_VOID = 336,                 /* KW_VOID  */
    KW_VOLATILE = 337,             /* KW_VOLATILE  */
    KW_WHILE = 338,                /* KW_WHILE  */
    KW_CONSOLE = 339               /* KW_CONSOLE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */