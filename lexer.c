#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Token types
typedef enum {
    TOKEN_IDENTIFIER,
    TOKEN_KEYWORD,
    TOKEN_NUMBER,
    TOKEN_STRING,
    TOKEN_OPERATOR,
    TOKEN_PUNCTUATION,
    TOKEN_UNKNOWN
} TokenType;

// Token structure
typedef struct {
    TokenType type;
    char lexeme[100];
} Token;

// Lexical analysis function
Token getNextToken(FILE* file) {
    Token token;
    char currentChar = fgetc(file);

    // Skip whitespace
    while (isspace(currentChar))
        currentChar = fgetc(file);

    // Check for end-of-file
    if (currentChar == EOF) {
        token.type = TOKEN_UNKNOWN;
        strcpy(token.lexeme, "EOF");
        return token;
    }

    // Identifier or keyword
    if (isalpha(currentChar) || currentChar == '_') {
        int i = 0;
        token.lexeme[i++] = currentChar;

        while (isalnum(currentChar = fgetc(file)) || currentChar == '_')
            token.lexeme[i++] = currentChar;

        token.lexeme[i] = '\0';

        // Check if it's a keyword
        if (strcmp(token.lexeme, "if") == 0 ||
            strcmp(token.lexeme, "else") == 0 ||
            strcmp(token.lexeme, "while") == 0 ||
            strcmp(token.lexeme, "int") == 0 ||
            strcmp(token.lexeme, "float") == 0 ||
            strcmp(token.lexeme, "string") == 0) {
            token.type = TOKEN_KEYWORD;
        } else {
            token.type = TOKEN_IDENTIFIER;
        }

        ungetc(currentChar, file); // Push back the last character
        return token;
    }

    // Number
    if (isdigit(currentChar)) {
        int i = 0;
        token.lexeme[i++] = currentChar;

        while (isdigit(currentChar = fgetc(file)))
            token.lexeme[i++] = currentChar;

        if (currentChar == '.') {
            token.lexeme[i++] = currentChar;

            while (isdigit(currentChar = fgetc(file)))
                token.lexeme[i++] = currentChar;
        }

        token.lexeme[i] = '\0';
        token.type = TOKEN_NUMBER;

        ungetc(currentChar, file); // Push back the last character
        return token;
    }

    // String
    if (currentChar == '"') {
        int i = 0;
        token.lexeme[i++] = currentChar;

        while ((currentChar = fgetc(file)) != '"' && currentChar != EOF)
            token.lexeme[i++] = currentChar;

        if (currentChar == '"') {
            token.lexeme[i++] = currentChar;
            token.lexeme[i] = '\0';
            token.type = TOKEN_STRING;
        } else {
            token.lexeme[i] = '\0';
            token.type = TOKEN_UNKNOWN;
        }

        return token;
    }

    // Operators
    if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
        token.lexeme[0] = currentChar;
        token.lexeme[1] = '\0';
        token.type = TOKEN_OPERATOR;
        return token;
    }

    // Punctuation
    if (currentChar == '(' || currentChar == ')' || currentChar == '{' || currentChar == '}' || currentChar == ';') {
        token.lexeme[0] = currentChar;
        token.lexeme[1] = '\0';
        token.type = TOKEN_PUNCTUATION;
        return token;
    }

    // Unknown token
    token.lexeme[0] = currentChar;
    token.lexeme[1] = '\0';
    token.type = TOKEN_UNKNOWN;
    return token;
}

int main() {
    FILE* file = fopen("source.cs", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    Token token;
    do {
        token = getNextToken(file);

        // Print token information
        printf("Type: %d, Lexeme: %s\n", token.type, token.lexeme);
    } while (token.type != TOKEN_UNKNOWN);

    fclose(file);
    return 0;
}