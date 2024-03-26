%{
#include <stdio.h>
int keyword_check(char *token);
%}

%option noyywrap

digit [0-9]
letter [a-zA-Z]
identifier {letter}({letter}|{digit})*
integer {digit}+
operator [-+*/=<>]
punctuation [(){}\[\];:.,]
%%

{identifier} {
    if (keyword_check(yytext)) {
        printf("Keyword: %s\n", yytext);
    } else {
        printf("Identifier: %s\n", yytext);
    }
}

{integer} {
    printf("Number: %s\n", yytext);
}

"//"(.)* {
    printf("Comment: %s\n", yytext);
}

[\t\n ]+ {
    // Ignore whitespace
}

{operator} {
    printf("Operator: %s\n", yytext);
}

{punctuation} {
    printf("Punctuation: %s\n", yytext);
} 


. {
    printf("Invalid token: %s\n", yytext);
}

%%

int keyword_check(char *token) {
    char *keywords[] = {"abstract", "as", "base", "bool", "break", "byte", "case", "catch", "char", "checked", "class", "const", "continue", "decimal", "default", "delegate", "do", "double", "else", "enum", "event", "explicit", "extern", "false", "finally", "fixed", "float", "for", "foreach", "goto", "if", "implicit", "in", "int", "interface", "internal", "is", "lock", "long", "namespace", "new", "null", "object", "operator", "out", "override", "params", "private", "protected", "public", "readonly", "ref", "return", "sbyte", "sealed", "short", "sizeof", "stackalloc", "static", "string", "struct", "switch", "this", "throw", "true", "try", "typeof", "uint", "ulong", "unchecked", "unsafe", "ushort", "using", "virtual", "void", "volatile", "while"};
    int num_keywords = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(token, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    yylex();
    return 0;
}
