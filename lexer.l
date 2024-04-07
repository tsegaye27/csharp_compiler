%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

extern YYSTYPE yylval;
extern int line_number; 

int line_number = 1;
int scope = 0;

struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
    int scope;
};

struct symbol_entry* symbol_table_stack[100];
int stack_top = -1;
int symbol_count = 0;

void init_symbol_table() {
    struct symbol_entry* global_table = (struct symbol_entry*) malloc(100 * sizeof(struct symbol_entry));
    symbol_table_stack[++stack_top] = global_table;
}

int search_symbol_table(char *name, int scope) {
    for (int i = 0; i <= stack_top; i++) {
        struct symbol_entry* symbol_table = symbol_table_stack[i];
        for (int j = 0; j < 100; j++) {
            if (strcmp(symbol_table[j].name, name) == 0 && symbol_table[j].scope == scope)
                return symbol_table[j].token_type;
        }
    }
    return -1;
}

void add_to_symbol_table(char *name, char *type, int token, int scope) {
    struct symbol_entry* symbol_table = symbol_table_stack[stack_top];
    while (symbol_table[symbol_count].name[0] != '\0') {
        symbol_count++;
    }
    strcpy(symbol_table[symbol_count].name, name);
    strcpy(symbol_table[symbol_count].data_type, type);
    symbol_table[symbol_count].token_type = token;
    symbol_table[symbol_count].scope = scope;
}

void push_symbol_table() {
    struct symbol_entry* new_table = (struct symbol_entry*) malloc(100 * sizeof(struct symbol_entry));
    symbol_table_stack[++stack_top] = new_table;
}

void pop_symbol_table() {
    free(symbol_table_stack[stack_top--]);
}

void displaySymbolTable() {
    printf("Symbol Table:\n");
    printf("----------------------------------------------------\n");
    printf("%-20s | %-15s | %-10s | %-5s\n", "Name", "Data Type", "Token Type", "Scope");
    printf("----------------------------------------------------\n");
    for (int i = 0; i <= stack_top; i++) {
        struct symbol_entry* symbol_table = symbol_table_stack[i];
        for (int j = 0; j < 100; j++) {
            if (symbol_table[j].name[0] != '\0') {
                printf("%-20s | %-15s | %-10d | %-5d\n", symbol_table[j].name, symbol_table[j].data_type, symbol_table[j].token_type, symbol_table[j].scope);
            }
        }
    }
    printf("----------------------------------------------------\n");
}

%}

%%
"using" { 
    printf("Keyword:using\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "using"); 
    add_to_symbol_table("using", "using", USING, scope); 
    return USING; 
}
"class"             { 
    printf("Keyword:class\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "class"); 
    add_to_symbol_table("class", "class", CLASS, scope); 
    return CLASS; 
}
"void"              { 
    printf("Keyword:void\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "void"); 
    add_to_symbol_table("void", "void", VOID, scope); 
    return VOID; 
}
"static"            { 
    printf("Keyword:static\n"); 
    add_to_symbol_table("static", "static", STATIC, scope); 
    return STATIC; 
}
"public"            { 
    printf("Keyword:public\n"); 
    add_to_symbol_table("public", "public", PUBLIC, scope); 
    return PUBLIC; 
}
"private"           { 
    printf("Keyword:private\n"); 
    add_to_symbol_table("private", "private", PRIVATE, scope); 
    return PRIVATE; 
}
"protected"         { 
    printf("Keyword:protected\n"); 
    add_to_symbol_table("protected", "protected", PROTECTED, scope); 
    return PROTECTED; 
}
"int"               { 
    printf("Keyword:int\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "int"); 
    add_to_symbol_table("int", "int", INT, scope); 
    return INT; 
}
"double"            { 
    printf("Keyword:double\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "double"); 
    add_to_symbol_table("double", "double", DOUBLE, scope); 
    return DOUBLE; 
}
"bool"              { 
    printf("Keyword:bool\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "bool"); 
    add_to_symbol_table("bool", "bool", BOOL, scope); 
    return BOOL; 
}
"string"            { 
    printf("Keyword:string\n"); 
    strcpy(symbol_table_stack[stack_top][symbol_count].data_type, "string"); 
    add_to_symbol_table("string", "string", STRING, scope); 
    return STRING; 
}

"if"                { 
    printf("Keyword:if\n"); 
    add_to_symbol_table("if", "if", IF, scope); 
    return IF;
}
"else"              { 
    printf("Keyword:else\n"); 
    add_to_symbol_table("else", "else", ELSE, scope); 
    return ELSE;
}
"switch"            { 
    printf("Keyword:switch\n"); 
    add_to_symbol_table("switch", "switch", SWITCH, scope); 
    return SWITCH;
}
"case"              { 
    printf("Keyword:case\n"); 
    add_to_symbol_table("case", "case", CASE, scope); 
    return CASE;
}
"default"           { 
    printf("Keyword:default\n"); 
    add_to_symbol_table("default", "default", DEFAULT, scope); 
    return DEFAULT;
}
"break"             { 
    printf("Keyword:break\n"); 
    add_to_symbol_table("break", "break", BREAK, scope); 
    return BREAK;
}
"return"            { 
    printf("Keyword:return\n"); 
    add_to_symbol_table("return", "return", RETURN, scope); 
    return RETURN;
}
"while"             { 
    printf("Keyword:while\n"); 
    add_to_symbol_table("while", "while", WHILE, scope); 
    return WHILE;
}
"for"               { 
    printf("Keyword:for\n"); 
    add_to_symbol_table("for", "for", FOR, scope); 
    return FOR;
}
"continue"          { 
    printf("Keyword:continue\n"); 
    add_to_symbol_table("continue", "continue", CONTINUE, scope); 
    return CONTINUE;
}
"("                 { return LPAREN; }
")"                 { return RPAREN; }
"{"                 { scope++; push_symbol_table(); return LBRACE; }
"}"                 { scope--; pop_symbol_table(); return RBRACE; }
"["                 { return LSBRACE; }
"]"                 { return RSBRACE; }
";"                 { return SEMICOLON; }
"."                 { return DOT; }
"="                 { return ASSIGN; }
"-"                 { return MINUS; }
"+"                 { return PLUS; }
"*"                 { return MULTIPLY; }
","                 { return COMMA; }
"/"                 { return DIVIDE; }
"%"                 { return MODULO; }
"<"                 { return LESS_THAN; }
"<="                { return LESS_EQUAL; }
">"                 { return GREATER_THAN; }
">="                { return GREATER_EQUAL; }
"=="                { return EQUALS; }
"!="                { return NOT_EQUALS; }
"&&"                { return AND; }
"||"                { return OR; }
"!"                 { return NOT; }
"?"                 { return QUESTION_MARK; }
":"                 { return COLON; }
"true"              { return TRUE_VALUE; }
"false"             { return FALSE_VALUE; }


[0-9]+              { yylval.strval = strdup(yytext); return NUMBER; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.strval = strdup(yytext);
                          int index = search_symbol_table(yytext, scope);
                          if (index == -1) {
                              return ID;
                          }
                          else {
                              return ID;
                          }
                        }
(\"|\')[^\"]*(\"|\') { yylval.strval = strdup(yytext); return STRING_LITERAL; }


\/\/[^\n]*           { /* Ignore single-line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*\/  { /* Ignore multi-line comments */ }
[ \t\r]             ; // Ignore whitespace and newlines
\n                  { line_number++;  }
.                   ; // Ignore unrecognized characters
%%

int yywrap() {
    displaySymbolTable(); // Call displaySymbolTable at the end of processing
    return 1;
}