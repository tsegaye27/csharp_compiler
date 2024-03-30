%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int search_symbol_table(char *name);
extern void add_to_symbol_table(char *name, int type, int value);
extern void displaySymbolTable();
extern int line_number;

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

typedef struct {
    char* strval;
    int intval;
} YYSTYPE;
#define YYSTYPE_IS_DECLARED


%}

%union {
    char* strval;
    int intval;
}

%token <strval> STRING_LITERAL ID 
%token <intval> NUMBER

%type <?> type 
%type <?> primary_expression

%token USING CLASS VOID STATIC LPAREN RPAREN LBRACE RBRACE SEMICOLON DOT
ASSIGN STRING BOOL INT MINUS PLUS MULTIPLY DIVIDE MODULO LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS AND OR NOT

%left OR
%left AND
%left EQUALS NOT_EQUALS
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT


%%

program : statement_list { printf("Parsing completed successfully.\n"); }
        ;

statement_list : statement { printf("statement_list -> statement\n");}
               | statement_list statement
               ;


statement : expression SEMICOLON { printf("statement -> Expression statement.\n"); }
          | declaration_statement { printf("statement -> Declaration statement.\n"); }
          ;

declaration_statement : var_declaration SEMICOLON { printf("declaration_statement -> var_declaration ;\n"); }
                      | function_declarations { printf("declaration_statement -> function_declarations\n"); }
                      | class_declarations { printf("declaration_statement -> class_declarations\n"); }
                      ;
                 
var_declaration : ID { printf("Variable declaration: %s\n", $1); }
                | ID ASSIGN expression { 
                    printf("Variable declaration with assignment: %s\n", $1);
                  
                } 
                ;

class_declarations : CLASS ID LBRACE class_body RBRACE
           {
               printf("class declaration: %s\n", $2);
           }
           ;

class_body:statement_list { printf("class body\n");}
           |
          ;

function_declarations : STATIC ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("static function declaration: %s\n", $2);
            }
            | ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("function declaration: %s\n", $2);
            }
            ;

func_body: statement_list { printf("function body\n"); }
           |
           ;

expression : expression PLUS expression { printf("expression -> addition expression\n");}
           | expression MINUS expression { printf("expression -> subtraction expression\n");}
           | expression MULTIPLY expression { printf("expression -> multiplication expression\n");}
           | expression DIVIDE expression { printf("expression -> division expression\n");}
           | expression MODULO expression { printf("expression -> modulo expression\n"); }
           | expression ASSIGN expression { printf("expression -> assignment expression\n");}
           | expression LESS_THAN expression { printf("expression -> lt expression\n"); }
           | expression LESS_EQUAL expression { printf("expression -> leq expression\n"); }
           | expression GREATER_THAN expression { printf("expression -> gt expression\n"); }
           | expression GREATER_EQUAL expression { printf("expression -> geq expression\n"); }
           | expression EQUALS expression { printf("expression -> equals expression\n"); }
           | expression NOT_EQUALS expression { printf("expression -> not equals expression\n"); }
           | expression AND expression { printf("expression -> and expression\n"); }
           | expression OR expression { printf("expression -> Or expression\n"); }
           | NOT expression { printf("expression -> Not expression\n"); }
           | LPAREN expression RPAREN
           | expression PLUS PLUS
           | expression MINUS MINUS
           | MINUS expression
           | PLUS PLUS expression
           | expression DOT expression LPAREN expression RPAREN
           | primary_expression
           ;

primary_expression : ID { printf("Primary expression: %s\n", $1); }
                   | STRING_LITERAL { printf("Primary expression: %s\n", $1); }
                   | NUMBER { printf("Primary expression: %d\n", $1); }
                   ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
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