%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern FILE* yyin;
void yyerror(const char *s);
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

statement : expression_statement
          | declaration_statement
          | selection_statement
          | iteration_statement
          | jump_statement
          | empty_statement
          ;

expression_statement : expression ';'
                      ;

expression : IDENTIFIER
           | NUMBER
           | STRING_LITERAL
           | expression '+' expression
           | expression '-' expression
           | expression '*' expression
           | expression '/' expression
           | expression '=' expression
           | expression '>' expression
           | expression '<' expression
           | '(' expression ')'
           ;

declaration_statement : KW_INT IDENTIFIER '=' NUMBER ';'
                       | KW_STRING IDENTIFIER '=' STRING_LITERAL ';'
                       | KW_BOOL IDENTIFIER '=' KW_TRUE ';'
                       ;

selection_statement : KW_IF '(' expression ')' statement
                    | KW_IF '(' expression ')' statement KW_ELSE statement
                    ;

iteration_statement : KW_WHILE '(' expression ')' statement
                    | KW_FOR '(' expression_statement expression_statement expression ')' statement
                    ;

jump_statement : KW_BREAK ';'
               | KW_CONTINUE ';'
               | KW_RETURN expression ';'
               ;

empty_statement : ';'
                ;

%%

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: ./parser <source.cs>\n");
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    yyin = file;
    yyparse();

    fclose(file);
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
    exit(1);
}
