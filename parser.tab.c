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
extern int search_symbol_table(char *name, int scope);
extern void add_to_symbol_table(char *name, char *type, int token, int scope);
extern void displaySymbolTable();
extern void push_symbol_table();
extern void pop_symbol_table();
extern void init_symbol_table();
extern int line_number;
extern int scope;

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

typedef struct {
    char* strval;
    int intval;
} YYSTYPE;
#define YYSTYPE_IS_DECLARED


#line 97 "parser.tab.c"

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
  YYSYMBOL_STRING_LITERAL = 3,             /* STRING_LITERAL  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_USING = 6,                      /* USING  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_STATIC = 9,                     /* STATIC  */
  YYSYMBOL_LPAREN = 10,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 11,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 12,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 13,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 14,                 /* SEMICOLON  */
  YYSYMBOL_DOT = 15,                       /* DOT  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_DEFAULT = 20,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 23,                    /* ASSIGN  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_BOOL = 25,                      /* BOOL  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MULTIPLY = 29,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 30,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 31,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 32,                 /* LESS_THAN  */
  YYSYMBOL_LESS_EQUAL = 33,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_THAN = 34,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_EQUAL = 35,             /* GREATER_EQUAL  */
  YYSYMBOL_EQUALS = 36,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 37,                /* NOT_EQUALS  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_QUESTION_MARK = 42,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_WHILE = 44,                     /* WHILE  */
  YYSYMBOL_FOR = 45,                       /* FOR  */
  YYSYMBOL_CONTINUE = 46,                  /* CONTINUE  */
  YYSYMBOL_LSBRACE = 47,                   /* LSBRACE  */
  YYSYMBOL_RSBRACE = 48,                   /* RSBRACE  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_PRIVATE = 50,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 51,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 52,                 /* PROTECTED  */
  YYSYMBOL_TRUE_VALUE = 53,                /* TRUE_VALUE  */
  YYSYMBOL_FALSE_VALUE = 54,               /* FALSE_VALUE  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_statement_list = 57,            /* statement_list  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_expression_statement = 59,      /* expression_statement  */
  YYSYMBOL_declaration_statement = 60,     /* declaration_statement  */
  YYSYMBOL_directive_statement = 61,       /* directive_statement  */
  YYSYMBOL_conditional_statement = 62,     /* conditional_statement  */
  YYSYMBOL_exit_statement = 63,            /* exit_statement  */
  YYSYMBOL_loop_statement = 64,            /* loop_statement  */
  YYSYMBOL_function_call_statement = 65,   /* function_call_statement  */
  YYSYMBOL_function_call = 66,             /* function_call  */
  YYSYMBOL_continue_statement = 67,        /* continue_statement  */
  YYSYMBOL_while_statement = 68,           /* while_statement  */
  YYSYMBOL_for_statement = 69,             /* for_statement  */
  YYSYMBOL_if_statement = 70,              /* if_statement  */
  YYSYMBOL_switch_statement = 71,          /* switch_statement  */
  YYSYMBOL_case_list = 72,                 /* case_list  */
  YYSYMBOL_case_item = 73,                 /* case_item  */
  YYSYMBOL_ternary_expression = 74,        /* ternary_expression  */
  YYSYMBOL_var_declarations = 75,          /* var_declarations  */
  YYSYMBOL_var_declaration = 76,           /* var_declaration  */
  YYSYMBOL_type = 77,                      /* type  */
  YYSYMBOL_class_declarations = 78,        /* class_declarations  */
  YYSYMBOL_class_body = 79,                /* class_body  */
  YYSYMBOL_function_declarations = 80,     /* function_declarations  */
  YYSYMBOL_modifier = 81,                  /* modifier  */
  YYSYMBOL_parameter_list = 82,            /* parameter_list  */
  YYSYMBOL_parameter = 83,                 /* parameter  */
  YYSYMBOL_func_body = 84,                 /* func_body  */
  YYSYMBOL_array_list = 85,                /* array_list  */
  YYSYMBOL_console_list = 86,              /* console_list  */
  YYSYMBOL_bool_values = 87,               /* bool_values  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_primary_expression = 89         /* primary_expression  */
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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    59,    60,    63,    64,    65,    66,    67,
      68,    69,    70,    73,    74,    77,    78,    79,    82,    97,
      98,    99,   102,   103,   106,   107,   110,   111,   114,   115,
     117,   121,   122,   125,   126,   132,   133,   134,   135,   136,
     137,   141,   144,   145,   148,   149,   152,   153,   157,   158,
     169,   183,   197,   214,   215,   216,   217,   218,   222,   228,
     233,   234,   237,   247,   255,   268,   269,   270,   271,   273,
     274,   275,   282,   290,   291,   294,   295,   298,   300,   301,
     302,   304,   304,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   337,   345,   346,   347
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
  "\"end of file\"", "error", "\"invalid token\"", "STRING_LITERAL", "ID",
  "NUMBER", "USING", "CLASS", "VOID", "STATIC", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "DOT", "IF", "ELSE", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "RETURN", "ASSIGN", "STRING", "BOOL", "INT", "MINUS",
  "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "LESS_THAN", "LESS_EQUAL",
  "GREATER_THAN", "GREATER_EQUAL", "EQUALS", "NOT_EQUALS", "AND", "OR",
  "NOT", "COMMA", "QUESTION_MARK", "COLON", "WHILE", "FOR", "CONTINUE",
  "LSBRACE", "RSBRACE", "DOUBLE", "PRIVATE", "PUBLIC", "PROTECTED",
  "TRUE_VALUE", "FALSE_VALUE", "$accept", "program", "statement_list",
  "statement", "expression_statement", "declaration_statement",
  "directive_statement", "conditional_statement", "exit_statement",
  "loop_statement", "function_call_statement", "function_call",
  "continue_statement", "while_statement", "for_statement", "if_statement",
  "switch_statement", "case_list", "case_item", "ternary_expression",
  "var_declarations", "var_declaration", "type", "class_declarations",
  "class_body", "function_declarations", "modifier", "parameter_list",
  "parameter", "func_body", "array_list", "console_list", "bool_values",
  "expression", "primary_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     592,  -190,    -2,  -190,     5,     8,  -190,  -190,   127,   127,
       6,     7,    10,   592,  -190,  -190,  -190,   127,   -10,   127,
      16,    18,    35,  -190,  -190,  -190,  -190,  -190,  -190,    20,
     592,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    42,
    -190,  -190,  -190,  -190,  -190,  -190,    44,  -190,    -1,  -190,
    -190,    15,  -190,  1243,  -190,   106,    45,    48,  -190,  1074,
      14,  1427,   592,   127,  -190,   592,  1546,   127,   172,   592,
     592,  -190,  -190,  -190,  -190,  -190,    -9,    13,    58,    59,
    -190,   127,   127,   956,   959,   988,  1017,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   241,   127,  -190,
    1103,  -190,   592,  -190,  -190,   127,    56,  1132,  1546,    57,
      60,    70,   127,    78,    89,    93,  1045,  1427,   127,   139,
    1546,   127,  -190,  1546,   127,   172,   127,   172,   172,  1020,
    1020,  1020,  1020,  1525,  1525,  1502,  1477,  1427,   127,  1377,
    1268,  -190,   592,   102,  1427,   644,    94,   696,   127,   107,
    1427,    99,   592,   150,   127,  1427,  1427,  1427,  1427,  1188,
     127,  -190,  -190,   592,    26,   105,   592,   592,  1296,   592,
     127,   112,   115,    82,   131,    -4,  -190,     4,  1452,    95,
    1324,   280,  1243,   748,   127,   -14,  -190,   332,   127,   592,
     123,  1427,  -190,   592,   109,  -190,   129,   145,  -190,   127,
     384,   152,  -190,   156,   592,   592,  1402,   134,  -190,  -190,
    1161,  -190,   165,   178,   592,  -190,  1427,   592,  1352,   127,
     800,   436,   852,   592,   904,  -190,  -190,   171,  1215,   592,
     592,  -190,   592,   592,   488,   592,  -190,  -190,  -190,   540,
     175,  -190,   176,  -190,  -190,  -190
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,   113,   112,   114,     0,     0,    57,    65,     0,     0,
       0,     0,     0,     0,    54,    56,    53,     0,     0,     0,
       0,     0,     0,    55,    67,    66,    68,    81,    82,     0,
       2,     3,     5,     6,     7,     8,     9,    10,    12,    26,
      11,    24,    25,    19,    20,    21,     0,    48,     0,    17,
      16,     0,   115,    14,    83,     0,     0,     0,   112,     0,
       0,    75,     0,     0,    23,    22,   108,     0,   104,     0,
       0,    30,     1,     4,    27,    15,    51,     0,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    18,    61,   105,   111,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,   107,
      85,     0,   106,    84,     0,    86,     0,    87,    92,    93,
      94,    95,    96,    97,   100,   101,   102,    98,     0,     0,
       0,    29,    60,     0,    76,     0,     0,     0,     0,     0,
      49,    52,    61,     0,    80,    89,    88,    90,    91,     0,
       0,   103,    58,     0,    38,     0,     0,    32,     0,    74,
       0,     0,     0,    54,     0,     0,    69,     0,    77,     0,
       0,     0,    14,     0,     0,     0,    42,     0,     0,    73,
       0,    50,    59,    74,     0,    71,     0,     0,   110,     0,
       0,     0,    46,    35,     0,    39,     0,     0,    43,    31,
       0,    64,     0,     0,    74,    70,    78,    79,    14,     0,
       0,     0,     0,     0,     0,    62,    72,     0,     0,     0,
      37,    40,     0,    44,     0,     0,    34,    63,    47,     0,
       0,    41,     0,    36,    45,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,     0,    43,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    11,  -190,
    -190,  -190,   -49,  -190,    39,  -190,  -190,  -190,     1,  -189,
    -190,  -190,  -190,     2,  -190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    29,   189,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   185,   186,    45,
      46,    47,    48,    49,   143,    50,    51,   175,   176,   190,
      60,   177,    52,    53,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,   111,    79,    76,   212,   184,   207,   196,    55,    56,
      59,    61,    57,    65,   112,   198,    62,    63,    67,    66,
      72,    68,    78,     6,    64,   227,    69,   104,    70,     1,
       2,     3,     4,     5,     6,     7,     8,   197,     9,    14,
      15,    16,    10,   183,    11,   199,    77,    12,    13,    71,
      14,    15,    16,    17,    18,   105,    74,   100,    75,   101,
     102,   113,   114,   115,    23,   107,    19,   145,   147,   108,
      20,    21,    22,    73,   148,    23,    24,    25,    26,    27,
      28,   149,   151,   116,   117,   120,   123,   125,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   139,
     140,   152,   142,   153,   174,   106,   165,   144,    73,     1,
      58,     3,   109,   110,   150,   162,     8,    99,     9,   169,
     155,    66,   170,   156,   184,   192,   157,   193,   158,   194,
       1,    58,     3,    17,    18,   195,   211,     8,   201,     9,
     159,   214,     1,    58,     3,   164,    19,   167,   174,     8,
     168,     9,   142,     6,    17,    18,   178,   213,     6,    27,
      28,   172,   180,   181,   219,   182,   187,    19,   182,   173,
      15,    16,   191,   220,   173,    15,    16,   223,   225,    19,
      27,    28,   226,   205,   237,    73,   206,    81,   244,   245,
     210,   171,    27,    28,    23,    82,   208,     0,   215,    23,
     217,   216,   218,     0,   221,     0,   182,    73,     0,     0,
      73,     0,     0,    96,     0,     0,     0,     0,     0,    98,
     230,   228,   233,   234,    73,     0,     0,     0,     0,   239,
      73,   182,    73,     0,   182,     0,     0,   182,     0,     0,
       0,     0,     0,     0,     1,    58,     3,     0,    73,     0,
       0,     8,     0,   138,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,    73,     0,     0,   236,    17,    18,
       0,     0,     0,    73,     0,   240,    73,    73,   242,     0,
       0,    19,    73,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   203,    27,    28,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,   209,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,   121,    14,    15,
      16,    17,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   231,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,   241,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   243,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   163,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,   166,     0,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
     204,     0,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,   229,     0,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,   232,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   235,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
      58,     3,     1,    58,     3,     0,     8,     0,     9,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   121,   119,    18,     0,    17,   122,     0,     0,
       0,     1,    58,     3,     0,     0,    19,     0,     8,    19,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,   124,    27,    28,     0,    17,    18,     0,     0,     0,
       1,    58,     3,     0,     0,     0,     0,     8,    19,     9,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
     126,    27,    28,    82,    17,    18,     0,    83,    84,    85,
      86,    87,     0,     0,     0,   154,     0,    19,     0,     0,
      81,    96,     0,     0,     0,     0,     0,    98,    82,     0,
      27,    28,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   103,    96,     0,     0,    81,
       0,     0,    98,     0,     0,     0,     0,    82,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,   141,    96,     0,     0,    81,     0,
       0,    98,     0,     0,     0,     0,    82,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   146,    96,     0,     0,    81,     0,     0,
      98,     0,     0,     0,     0,    82,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   224,    96,     0,     0,    81,     0,     0,    98,
       0,     0,     0,     0,    82,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   179,    96,    81,     0,     0,     0,     0,    98,     0,
       0,    82,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,   238,    96,
      81,     0,     0,     0,     0,    98,     0,     0,    82,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,    96,    80,    81,     0,
       0,     0,    98,     0,     0,     0,    82,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    81,    96,    97,     0,     0,     0,     0,
      98,    82,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     0,    96,
     188,    81,     0,     0,     0,    98,   161,     0,     0,    82,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     0,    96,   202,    81,
       0,     0,     0,    98,     0,     0,     0,    82,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,    96,    80,    81,     0,     0,
       0,    98,     0,     0,     0,    82,     0,     0,     0,     0,
       0,    85,    86,    87,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,    81,    96,    97,     0,     0,     0,     0,    98,
      82,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    81,    96,     0,
     160,     0,     0,     0,    98,    82,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    81,    96,     0,   222,     0,     0,     0,    98,
      82,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    81,    96,     0,
       0,     0,     0,     0,    98,    82,     0,     0,     0,    83,
     200,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    81,    96,     0,     0,     0,     0,     0,    98,
      82,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    81,    96,     0,
       0,     0,     0,     0,    98,    82,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      81,     0,     0,    96,     0,     0,     0,     0,    82,    98,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    81,     0,     0,     0,     0,    96,     0,     0,    82,
       0,     0,    98,     0,     0,    85,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       0,    10,    51,     4,   193,    19,    20,    11,    10,     4,
       8,     9,     4,    13,    23,    11,    10,    10,    28,    17,
       0,    19,     7,     8,    14,   214,    10,    13,    10,     3,
       4,     5,     6,     7,     8,     9,    10,    41,    12,    24,
      25,    26,    16,    17,    18,    41,    47,    21,    22,    14,
      24,    25,    26,    27,    28,    41,    14,    55,    14,    14,
      12,    48,     4,     4,    49,    63,    40,    11,    11,    67,
      44,    45,    46,    30,    14,    49,    50,    51,    52,    53,
      54,    11,     4,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    12,   102,    10,   153,    62,    12,   105,    65,     3,
       4,     5,    69,    70,   112,    13,    10,    11,    12,    12,
     118,   119,    23,   121,    19,    13,   124,    12,   126,    47,
       3,     4,     5,    27,    28,     4,    13,    10,    43,    12,
     138,    12,     3,     4,     5,   145,    40,   147,   197,    10,
     148,    12,   152,     8,    27,    28,   154,    48,     8,    53,
      54,    11,   160,   163,    12,   163,   166,    40,   166,    24,
      25,    26,   170,    17,    24,    25,    26,    43,    13,    40,
      53,    54,     4,   183,    13,   142,   184,    15,    13,    13,
     188,   152,    53,    54,    49,    23,   185,    -1,   197,    49,
     200,   199,   200,    -1,   204,    -1,   204,   164,    -1,    -1,
     167,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
     220,   219,   222,   223,   181,    -1,    -1,    -1,    -1,   229,
     187,   229,   189,    -1,   232,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,   205,    -1,
      -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,   221,    -1,    -1,   224,    27,    28,
      -1,    -1,    -1,   230,    -1,   232,   233,   234,   235,    -1,
      -1,    40,   239,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    53,    54,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     3,     4,     5,    -1,    10,    -1,    12,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    23,    27,    28,    -1,    27,    28,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    40,    -1,    10,    40,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    23,    53,    54,    -1,    27,    28,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    40,    12,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      23,    53,    54,    23,    27,    28,    -1,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    10,    -1,    40,    -1,    -1,
      15,    41,    -1,    -1,    -1,    -1,    -1,    47,    23,    -1,
      53,    54,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    11,    41,    -1,    -1,    15,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    11,    41,    -1,    -1,    15,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    11,    41,    -1,    -1,    15,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    11,    41,    -1,    -1,    15,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    13,    41,    15,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    13,    41,
      15,    -1,    -1,    -1,    -1,    47,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    14,    15,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    15,    41,    42,    -1,    -1,    -1,    -1,
      47,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      14,    15,    -1,    -1,    -1,    47,    48,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    14,    15,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    14,    15,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    15,    41,    42,    -1,    -1,    -1,    -1,    47,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    15,    41,    -1,
      43,    -1,    -1,    -1,    47,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    15,    41,    -1,    43,    -1,    -1,    -1,    47,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    15,    41,    -1,
      -1,    -1,    -1,    -1,    47,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    15,    41,    -1,    -1,    -1,    -1,    -1,    47,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    15,    41,    -1,
      -1,    -1,    -1,    -1,    47,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      15,    -1,    -1,    41,    -1,    -1,    -1,    -1,    23,    47,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    15,    -1,    -1,    -1,    -1,    41,    -1,    -1,    23,
      -1,    -1,    47,    -1,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      16,    18,    21,    22,    24,    25,    26,    27,    28,    40,
      44,    45,    46,    49,    50,    51,    52,    53,    54,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    74,    75,    76,    77,    78,
      80,    81,    87,    88,    89,    10,     4,     4,     4,    88,
      85,    88,    10,    10,    14,    57,    88,    28,    88,    10,
      10,    14,     0,    58,    14,    14,     4,    47,     7,    77,
      14,    15,    23,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    41,    42,    47,    11,
      88,    14,    12,    11,    13,    41,    58,    88,    88,    58,
      58,    10,    23,    48,     4,     4,    88,    88,    23,    27,
      88,    23,    28,    88,    23,    88,    23,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    12,    88,
      88,    11,    57,    79,    88,    11,    11,    11,    14,    11,
      88,     4,    12,    10,    10,    88,    88,    88,    88,    88,
      43,    48,    13,    12,    57,    12,    12,    57,    88,    12,
      23,    79,    11,    24,    77,    82,    83,    86,    88,    13,
      88,    57,    88,    17,    19,    72,    73,    57,    14,    57,
      84,    88,    13,    12,    47,     4,    11,    41,    11,    41,
      28,    43,    14,    13,    12,    57,    88,    20,    73,    13,
      88,    13,    84,    48,    12,    83,    88,    57,    88,    12,
      17,    57,    43,    43,    11,    13,     4,    84,    88,    12,
      57,    13,    12,    57,    57,    12,    58,    13,    13,    57,
      58,    13,    58,    13,    13,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     3,     1,
       1,     1,     2,     2,     1,     1,     1,     2,     3,     4,
       2,     7,     5,    11,     9,     7,    11,     9,     5,     7,
       9,    10,     1,     2,     4,     6,     6,     9,     1,     4,
       6,     2,     4,     1,     1,     1,     1,     1,     5,     6,
       1,     0,     8,     9,     7,     1,     1,     1,     1,     1,
       3,     2,     4,     1,     0,     1,     3,     1,     3,     3,
       0,     1,     1,     1,     3,     3,     3,     3,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     2,     3,     3,     3,     2,     3,
       6,     3,     1,     1,     1,     1
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
  case 13: /* expression_statement: expression SEMICOLON  */
#line 73 "parser.y"
                                            { printf("Expression statement.\n"); }
#line 1609 "parser.tab.c"
    break;

  case 18: /* directive_statement: USING ID SEMICOLON  */
#line 82 "parser.y"
                                         { 
    printf("Using directive.\n"); 
    char *identifier = (yyvsp[-1].strval);
    int token = search_symbol_table(identifier, scope);
    if(token != -1) {
        printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
        yyerror("Identifier already declared");
    } else {
        printf("Keyword 'using' added to symbol table with token type %d.\n", USING);
        add_to_symbol_table("using", "keyword", USING, scope); 
        printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
        add_to_symbol_table(identifier, "ID", ID, scope); 
    }
}
#line 1628 "parser.tab.c"
    break;

  case 22: /* exit_statement: RETURN statement_list  */
#line 102 "parser.y"
                                       { printf("exit_statement.\n"); }
#line 1634 "parser.tab.c"
    break;

  case 23: /* exit_statement: BREAK SEMICOLON  */
#line 103 "parser.y"
                                 { printf("exit_statement.\n"); }
#line 1640 "parser.tab.c"
    break;

  case 28: /* function_call: ID LPAREN RPAREN  */
#line 114 "parser.y"
                                 { printf("function_call.\n"); }
#line 1646 "parser.tab.c"
    break;

  case 29: /* function_call: ID LPAREN expression RPAREN  */
#line 115 "parser.y"
                              { printf("function_call.\n"); }
#line 1652 "parser.tab.c"
    break;

  case 30: /* continue_statement: CONTINUE SEMICOLON  */
#line 117 "parser.y"
                                        { printf("continue_statement.\n"); }
#line 1658 "parser.tab.c"
    break;

  case 31: /* while_statement: WHILE LPAREN statement RPAREN LBRACE statement_list RBRACE  */
#line 121 "parser.y"
                                                                             { printf("While statement block.\n"); }
#line 1664 "parser.tab.c"
    break;

  case 32: /* while_statement: WHILE LPAREN statement RPAREN statement_list  */
#line 122 "parser.y"
                                                               { printf("While statement.\n"); }
#line 1670 "parser.tab.c"
    break;

  case 33: /* for_statement: FOR LPAREN statement SEMICOLON expression SEMICOLON expression RPAREN LBRACE statement RBRACE  */
#line 125 "parser.y"
                                                                                                              { printf("For statement block.\n"); }
#line 1676 "parser.tab.c"
    break;

  case 34: /* for_statement: FOR LPAREN statement SEMICOLON expression SEMICOLON expression RPAREN statement  */
#line 126 "parser.y"
                                                                                                { printf("For statement.\n"); }
#line 1682 "parser.tab.c"
    break;

  case 35: /* if_statement: IF LPAREN statement RPAREN LBRACE statement_list RBRACE  */
#line 132 "parser.y"
                                                                       { printf("If statement.\n"); }
#line 1688 "parser.tab.c"
    break;

  case 36: /* if_statement: IF LPAREN statement RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE  */
#line 133 "parser.y"
                                                                                                         { printf("If-else statement.\n"); }
#line 1694 "parser.tab.c"
    break;

  case 37: /* if_statement: IF LPAREN statement RPAREN LBRACE statement_list RBRACE ELSE statement_list  */
#line 134 "parser.y"
                                                                                           { printf("If-else statement.\n"); }
#line 1700 "parser.tab.c"
    break;

  case 38: /* if_statement: IF LPAREN statement RPAREN statement_list  */
#line 135 "parser.y"
                                                         { printf("If statement.\n"); }
#line 1706 "parser.tab.c"
    break;

  case 39: /* if_statement: IF LPAREN statement RPAREN statement_list ELSE statement_list  */
#line 136 "parser.y"
                                                                             { printf("If-else statement.\n"); }
#line 1712 "parser.tab.c"
    break;

  case 40: /* if_statement: IF LPAREN statement RPAREN statement_list ELSE LBRACE statement_list RBRACE  */
#line 137 "parser.y"
                                                                                           { printf("If-else statement.\n"); }
#line 1718 "parser.tab.c"
    break;

  case 41: /* switch_statement: SWITCH LPAREN expression RPAREN LBRACE case_list DEFAULT COLON statement_list RBRACE  */
#line 141 "parser.y"
                                                                                                        { printf("Switch statement.\n"); }
#line 1724 "parser.tab.c"
    break;

  case 46: /* ternary_expression: expression QUESTION_MARK expression COLON expression SEMICOLON  */
#line 152 "parser.y"
                                                                                    { printf("Ternary expression.\n"); }
#line 1730 "parser.tab.c"
    break;

  case 47: /* ternary_expression: expression QUESTION_MARK LBRACE expression RBRACE COLON LBRACE expression RBRACE  */
#line 153 "parser.y"
                                                                                                      { printf("Ternary expression.\n"); }
#line 1736 "parser.tab.c"
    break;

  case 48: /* var_declarations: var_declaration  */
#line 157 "parser.y"
                                   { printf("Declaration statement.\n"); }
#line 1742 "parser.tab.c"
    break;

  case 49: /* var_declarations: type ID ASSIGN expression  */
#line 158 "parser.y"
                                            { printf("Declaration statement with assignment.\n");
                                     char *identifier = (yyvsp[-2].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, (yyvsp[-3].strval), ID, scope); 
                      } }
#line 1758 "parser.tab.c"
    break;

  case 50: /* var_declarations: type LSBRACE RSBRACE ID ASSIGN expression  */
#line 169 "parser.y"
                                                                 { printf("Declaration statement with assignment.\n");
                                     char *identifier = (yyvsp[-2].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, (yyvsp[-5].strval), ID, scope); 
                      } }
#line 1774 "parser.tab.c"
    break;

  case 51: /* var_declaration: type ID  */
#line 184 "parser.y"
                  {
                      printf("Variable declaration: %s\n", (yyvsp[0].strval));
                      char *identifier = (yyvsp[0].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, (yyvsp[-1].strval), ID, scope); 
                      }
                  }
#line 1792 "parser.tab.c"
    break;

  case 52: /* var_declaration: type LSBRACE RSBRACE ID  */
#line 198 "parser.y"
                    {
                        printf("Array declaration: %s\n", (yyvsp[0].strval));
                        char *identifier = (yyvsp[0].strval);
                        int token = search_symbol_table(identifier, scope);
                        if (token != -1) {
                            printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                            yyerror("Identifier already declared");
                        } else {
                            char arrayType[50];
                            sprintf(arrayType, "%s[]", (yyvsp[-3].strval));
                            printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                            add_to_symbol_table(identifier, arrayType, ID, scope); 
                        }
                    }
#line 1811 "parser.tab.c"
    break;

  case 53: /* type: INT  */
#line 214 "parser.y"
               { (yyval.strval) = "int"; }
#line 1817 "parser.tab.c"
    break;

  case 54: /* type: STRING  */
#line 215 "parser.y"
               { (yyval.strval) = "string"; }
#line 1823 "parser.tab.c"
    break;

  case 55: /* type: DOUBLE  */
#line 216 "parser.y"
               { (yyval.strval) = "double"; }
#line 1829 "parser.tab.c"
    break;

  case 56: /* type: BOOL  */
#line 217 "parser.y"
               { (yyval.strval) = "bool"; }
#line 1835 "parser.tab.c"
    break;

  case 57: /* type: VOID  */
#line 218 "parser.y"
               { (yyval.strval) = "void"; }
#line 1841 "parser.tab.c"
    break;

  case 58: /* class_declarations: CLASS ID LBRACE class_body RBRACE  */
#line 223 "parser.y"
           {
               printf("Parsed class declaration: %s\n", (yyvsp[-3].strval));
                                     char *identifier = (yyvsp[-3].strval);
                          add_to_symbol_table(identifier, "class", ID, scope); 
           }
#line 1851 "parser.tab.c"
    break;

  case 59: /* class_declarations: modifier CLASS ID LBRACE class_body RBRACE  */
#line 228 "parser.y"
                                                       {
            printf("Parsed class declaration with modifier: %s\n", (yyvsp[-3].strval));
           }
#line 1859 "parser.tab.c"
    break;

  case 60: /* class_body: statement_list  */
#line 233 "parser.y"
                          { printf("class body");}
#line 1865 "parser.tab.c"
    break;

  case 62: /* function_declarations: modifier type ID LPAREN RPAREN LBRACE func_body RBRACE  */
#line 238 "parser.y"
            {
                printf("Parsed function declaration with modifier: %s\n", (yyvsp[-5].strval));
                           char *identifier = (yyvsp[-5].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, (yyvsp[-6].strval), ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            }
#line 1879 "parser.tab.c"
    break;

  case 63: /* function_declarations: modifier type ID LPAREN parameter_list RPAREN LBRACE func_body RBRACE  */
#line 247 "parser.y"
                                                                                    {
                           char *identifier = (yyvsp[-6].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, (yyvsp[-7].strval), ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            }
#line 1892 "parser.tab.c"
    break;

  case 64: /* function_declarations: type ID LPAREN RPAREN LBRACE func_body RBRACE  */
#line 256 "parser.y"
            {
                printf("Parsed function declaration: %s\n", (yyvsp[-5].strval));
                           char *identifier = (yyvsp[-5].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, (yyvsp[-6].strval), ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            }
#line 1906 "parser.tab.c"
    break;

  case 65: /* modifier: STATIC  */
#line 268 "parser.y"
                  { printf("Static modifier.\n"); }
#line 1912 "parser.tab.c"
    break;

  case 66: /* modifier: PUBLIC  */
#line 269 "parser.y"
         { printf("Public modifier.\n"); }
#line 1918 "parser.tab.c"
    break;

  case 67: /* modifier: PRIVATE  */
#line 270 "parser.y"
          { printf("Private modifier.\n"); }
#line 1924 "parser.tab.c"
    break;

  case 68: /* modifier: PROTECTED  */
#line 271 "parser.y"
            { printf("Protected modifier.\n"); }
#line 1930 "parser.tab.c"
    break;

  case 70: /* parameter_list: parameter_list COMMA parameter  */
#line 274 "parser.y"
                                               { printf("Parameter list.\n"); }
#line 1936 "parser.tab.c"
    break;

  case 71: /* parameter: type ID  */
#line 275 "parser.y"
                    { printf("Parameter.\n");
                           char *identifier = (yyvsp[0].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, (yyvsp[-1].strval), ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }  }
#line 1948 "parser.tab.c"
    break;

  case 72: /* parameter: STRING LSBRACE RSBRACE ID  */
#line 282 "parser.y"
                            { printf("Parameter.\n"); 
                           char *identifier = (yyvsp[0].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, "string", ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } }
#line 1960 "parser.tab.c"
    break;

  case 78: /* console_list: console_list COMMA expression  */
#line 300 "parser.y"
                                { printf("Console list.\n"); }
#line 1966 "parser.tab.c"
    break;

  case 79: /* console_list: expression PLUS statement_list  */
#line 301 "parser.y"
                                { printf("console list.\n"); }
#line 1972 "parser.tab.c"
    break;

  case 111: /* expression: LBRACE array_list RBRACE  */
#line 334 "parser.y"
                                      { printf("Array list.\n"); }
#line 1978 "parser.tab.c"
    break;

  case 112: /* primary_expression: ID  */
#line 337 "parser.y"
                        { printf("Primary expression (identifier): %s\n", (yyvsp[0].strval));
           char *identifier = (yyvsp[0].strval);
                      int token = search_symbol_table(identifier, scope);
                      if (token == -1) {
                          add_to_symbol_table(identifier, "ID", ID, scope); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
 }
#line 1991 "parser.tab.c"
    break;

  case 113: /* primary_expression: STRING_LITERAL  */
#line 345 "parser.y"
                                    { printf("Primary expression (string literal): %s\n", (yyvsp[0].strval)); }
#line 1997 "parser.tab.c"
    break;

  case 114: /* primary_expression: NUMBER  */
#line 346 "parser.y"
                            { printf("Primary expression (number): %s\n", (yyvsp[0].strval)); }
#line 2003 "parser.tab.c"
    break;

  case 115: /* primary_expression: bool_values  */
#line 347 "parser.y"
                                 { printf("Primary expression (boolean)\n"); }
#line 2009 "parser.tab.c"
    break;


#line 2013 "parser.tab.c"

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

#line 349 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
    exit(EXIT_FAILURE);
}


int main(int argc, char *argv[]) {
    init_symbol_table();
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening file");
        return 1;
    }

    yyparse();

    fclose(yyin);
    return 0;
}
