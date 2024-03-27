%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern FILE* yyin;
int yyerror(const char* error_message);
%}

%token IDENTIFIER NUMBER STRING_LITERAL COMMENT
%token KW_ABSTRACT KW_AS KW_BASE KW_BOOL KW_BREAK KW_BYTE KW_CASE KW_CATCH KW_CHAR KW_CHECKED
%token KW_CLASS KW_CONST KW_CONTINUE KW_DECIMAL KW_DEFAULT KW_DELEGATE KW_DO KW_DOUBLE KW_ELSE
%token KW_ENUM KW_EVENT KW_EXPLICIT KW_EXTERN KW_FALSE KW_FINALLY KW_FIXED KW_FLOAT KW_FOR
%token KW_FOREACH KW_GOTO KW_IF KW_IMPLICIT KW_IN KW_INT KW_INTERFACE KW_INTERNAL KW_IS KW_LOCK
%token KW_LONG KW_NAMESPACE KW_NEW KW_NULL KW_OBJECT KW_OPERATOR KW_OUT KW_OVERRIDE KW_PARAMS
%token KW_PRIVATE KW_PROTECTED KW_PUBLIC KW_READONLY KW_REF KW_RETURN KW_SBYTE KW_SEALED KW_SHORT
%token KW_SIZEOF KW_STACKALLOC KW_STATIC KW_STRING KW_STRUCT KW_SWITCH KW_THIS KW_THROW KW_TRUE
%token KW_TRY KW_TYPEOF KW_UINT KW_ULONG KW_UNCHECKED KW_UNSAFE KW_USHORT KW_USING KW_VIRTUAL
%token KW_VOID KW_VOLATILE KW_WHILE KW_CONSOLE

%left '+' '-'
%left '*' '/'
%left '='
%left '>' '<'

%%

program : statement_list
        ;

statement_list : statement
               | statement_list statement
               ;

statement : expression_statement { printf("Using production rule: statement -> expression_statement\n"); }
          | declaration_statement { printf("Using production rule: statement -> declaration_statement\n"); }
          | selection_statement { printf("Using production rule: statement -> selection_statement\n"); }
          | iteration_statement { printf("Using production rule: statement -> iteration_statement\n"); }
          | jump_statement { printf("Using production rule: statement -> jump_statement\n"); }
          | empty_statement { printf("Using production rule: statement -> empty_statement\n"); }
          ;

expression_statement : expression ';' { printf("Using production rule: expression_statement -> expression ';'\n"); }
                      ;

expression : IDENTIFIER { printf("Using production rule: expression -> IDENTIFIER\n"); }
           | NUMBER { printf("Using production rule: expression -> NUMBER\n"); }
           | STRING_LITERAL { printf("Using production rule: expression -> STRING_LITERAL\n"); }
           | expression '+' expression { printf("Using production rule: expression -> expression '+' expression\n"); }
           | expression '-' expression { printf("Using production rule: expression -> expression '-' expression\n"); }
           | expression '*' expression { printf("Using production rule: expression -> expression '*' expression\n"); }
           | expression '/' expression { printf("Using production rule: expression -> expression '/' expression\n"); }
           | expression '=' expression { printf("Using production rule: expression -> expression '=' expression\n"); }
           | expression '>' expression { printf("Using production rule: expression -> expression '>' expression\n"); }
           | expression '<' expression { printf("Using production rule: expression -> expression '<' expression\n"); }
           | '(' expression ')' { printf("Using production rule: expression -> '(' expression ')'\n"); }
           ;

declaration_statement : KW_INT IDENTIFIER '=' NUMBER ';' { printf("Using production rule: declaration_statement -> KW_INT IDENTIFIER '=' NUMBER ';'\n"); }
                       | KW_STRING IDENTIFIER '=' STRING_LITERAL ';' { printf("Using production rule: declaration_statement -> KW_STRING IDENTIFIER '=' STRING_LITERAL ';'\n"); }
                       | KW_BOOL IDENTIFIER '=' KW_TRUE ';' { printf("Using production rule: declaration_statement -> KW_BOOL IDENTIFIER '=' KW_TRUE ';'\n"); }
                       ;

selection_statement : KW_IF '(' expression ')' statement { printf("Using production rule: selection_statement -> KW_IF '(' expression ')' statement\n"); }
                    | KW_IF '(' expression ')' statement KW_ELSE statement { printf("Using production rule: selection_statement -> KW_IF '(' expression ')' statement KW_ELSE statement\n"); }
                    ;

iteration_statement : KW_WHILE '(' expression ')' statement { printf("Using production rule: iteration_statement -> KW_WHILE '(' expression ')' statement\n"); }
                    | KW_FOR '(' expression_statement expression_statement expression ')' statement { printf("Using production rule: iteration_statement -> KW_FOR '(' expression_statement expression_statement expression ')' statement\n"); }
                    | KW_FOR '(' expression_statement expression_statement ')' statement { printf("Using production rule: iteration_statement -> KW_FOR '(' expression_statement expression_statement ')' statement\n"); }
                    ;

jump_statement : KW_BREAK ';' { printf("Using production rule: jump_statement -> KW_BREAK ';'\n"); }
               | KW_CONTINUE ';' { printf("Using production rule: jump_statement -> KW_CONTINUE ';'\n"); }
               | KW_RETURN expression ';' { printf("Using production rule: jump_statement -> KW_RETURN expression ';'\n"); }
               | KW_RETURN ';' { printf("Using production rule: jump_statement -> KW_RETURN ';'\n"); }
               ;

empty_statement : ';' { printf("Using production rule: empty_statement -> ';'\n"); }
                ;

%%

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Input file not provided.\n");
        return 1;
    }

    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Failed to open input file.\n");
        return 1;
    }

    yyin = input_file;

    int result = yyparse();

    fclose(input_file);

    if (result == 0) {
        printf("Parsing completed.\n");
    } else {
        printf("Parsing failed.\n");
    }

    return 0;
}

int yyerror(const char* error_message) {
    printf("Parsing error: %s\n", error_message);
    return 1;
}