%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include for strdup
#include "parser.tab.h"

extern YYSTYPE yylval;
int line_number = 1;

 
struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
    int value;
    // Add more attributes as needed
};

struct symbol_entry symbol_table[100];
int symbol_count = 0; // Counter to track the number of entries in symbol table

char* token_strings[] = {
    "USING", "STRING", "STRING_LITERAL",
    "CLASS", "STATIC", "SEMICOLON", "NUMBER",
    "ASSIGN", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "LBRACKET", "RBRACKET",
    "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL",
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT",  "VOID", "BOOL"
    
};

int search_symbol_table(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return symbol_table[i].token_type; // Return token if found
    }
    return -1; // Return -1 if not found
}

void add_to_symbol_table(char *name, int token, int value) {
    strcpy(symbol_table[symbol_count].name, name);
    symbol_table[symbol_count].token_type = token;
    symbol_table[symbol_count].value = value; // Store variable value

    symbol_count++;
}

void displaySymbolTable() {
    printf("Symbol Table:\n");
    printf("-----------------------------------------------------------------\n");
    printf("%-20s | %-15s | %-10s | %-10s\n", "Name", "Data Type", "Token Type", "Value");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%-20s | %-15s | %-10d | %-10d\n", symbol_table[i].name, symbol_table[i].data_type, symbol_table[i].token_type, symbol_table[i].value);
    }
    printf("-----------------------------------------------------------------\n");
}


// Function to search for an identifier in the symbol table and return its token name
char* search_symbol_tableByname(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return token_strings[symbol_table[i].token_type]; // Return token name if found
    }
    return "UNKNOWN"; // Return "UNKNOWN" if not found
}

%}

%%
"using"                     { return USING; }
"class"                 { strcpy(symbol_table[symbol_count].data_type, "class");return CLASS; }
"void"                  { strcpy(symbol_table[symbol_count].data_type, "void"); return VOID; }
"static"                    { return STATIC; }
"int"                   { strcpy(symbol_table[symbol_count].data_type, "int"); return INT; }
"bool"                      { return BOOL; }
"String"                {strcpy(symbol_table[symbol_count].data_type, "String");  return STRING; }
"("                         { return LPAREN; }
")"                         { return RPAREN; }
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }
";"                         { return SEMICOLON; }
"."                         { return DOT; }
"="                         { return ASSIGN;}
"-"                         { return MINUS; }
"+"                         { return PLUS; }
"*"                         { return MULTIPLY; }
"/"                         { return DIVIDE; }
"%"                         { return MODULO; }
"<"                         { return LESS_THAN; }
"<="                        { return LESS_EQUAL; }
">"                         { return GREATER_THAN; }
">="                        { return GREATER_EQUAL; }
"=="                        { return EQUALS; }
"!="                        { return NOT_EQUALS; }
"&&"                        { return AND; }
"||"                        { return OR; }
"!"                         { return NOT; }
[0-9]+                  { char *endptr; yylval.intval = strtol(yytext, &endptr, 10); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]*  {  yylval.strval = strdup(yytext); 
                        int index = search_symbol_table(yytext);
                         if (index == -1) {
                        add_to_symbol_table(yytext, ID, 0);
                       return ID; // Return IDENTIFIER token
                        }
                     else {
                        return symbol_table[index].token_type; // Return type of the identifier
                        }
                       
                         }
\"[^"]*\"               { yylval.strval = strdup(yytext); return STRING_LITERAL; }
\/\/[^\n]*         { /* Ignore single-line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*\/  { /* Ignore multi-line comments */ }

[ \t\r]                     ; // Ignore whitespace and newlines
\n                      { line_number++;  }

.                           ; // Ignore unrecognized characters
%%

int yywrap() {
         displaySymbolTable(); // Call displaySymbolTable at the end of processing

    return 1;
}