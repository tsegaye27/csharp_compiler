%{
#include <stdio.h>

// Function to handle syntax errors
void yyerror(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
}
%}

%token NUMBER
%left '+' '-'

%%
expr : expr '+' expr    { printf("Addition\n"); }
     | expr '-' expr    { printf("Subtraction\n"); }
     | NUMBER           { printf("Number\n"); }
     ;

%%

int main() {
    yyparse();
    return 0;
}