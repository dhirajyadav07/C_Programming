#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_IDENTIFIER_LENGTH 50
#define MAX_TOKEN_LENGTH 100

typedef enum {
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_OPERATOR,
    TOKEN_KEYWORD,
    TOKEN_SEPARATOR,
    TOKEN_UNKNOWN,
    TOKEN_END,
} TokenType;

typedef struct {
    TokenType type;
    char lexeme[MAX_TOKEN_LENGTH];
} Token;

// Function to check if a character is a whitespace character
int is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

// Function to skip whitespace characters and comments
void skip_whitespace_and_comments(FILE *fp) {
    char c = fgetc(fp);
    while (c != EOF) {
        if (c == '/') {
            char next_char = fgetc(fp);
            if (next_char == '/') {
                // Single-line comment, ignore until end of line
                while (c != '\n' && c != EOF) {
                    c = fgetc(fp);
                }
            } else if (next_char == '*') {
                // Multi-line comment, ignore until */
                char prev_char = 0; // to keep track of previous character
                while (!((prev_char == '*') && (c == '/'))) {
                    prev_char = c;
                    c = fgetc(fp);
                }
            } else {
                // Not a comment, put back the characters
                ungetc(next_char, fp);
                ungetc(c, fp);
                return;
            }
        } else if (!is_whitespace(c)) {
            // Not a whitespace, put back the character
            ungetc(c, fp);
            return;
        }
        c = fgetc(fp);
    }
}

// Function to get the next token from the input stream
Token get_next_token(FILE *fp) {
    Token token;
    skip_whitespace_and_comments(fp);

    int i = 0;
    char c = fgetc(fp);

    if (c == EOF) {
        token.type = TOKEN_END;
        return token;
    }

    if (isalpha(c)) {
        token.lexeme[i++] = c;
        c = fgetc(fp);
        while (isalnum(c) || c == '_') {
            token.lexeme[i++] = c;
            if (i >= MAX_IDENTIFIER_LENGTH) {
                fprintf(stderr, "Identifier too long\n");
                exit(EXIT_FAILURE);
            }
            c = fgetc(fp);
        }
        token.lexeme[i] = '\0';
        ungetc(c, fp);
        token.type = TOKEN_IDENTIFIER;
    } else if (isdigit(c)) {
        token.lexeme[i++] = c;
        c = fgetc(fp);
        while (isdigit(c)) {
            token.lexeme[i++] = c;
            if (i >= MAX_TOKEN_LENGTH) {
                fprintf(stderr, "Token too long\n");
                exit(EXIT_FAILURE);
            }
            c = fgetc(fp);
        }
        token.lexeme[i] = '\0';
        ungetc(c, fp);
        token.type = TOKEN_NUMBER;
    } else {
        // Assuming single character operator or separator
        token.lexeme[0] = c;
        token.lexeme[1] = '\0';
        token.type = TOKEN_UNKNOWN;
        // Check for specific operators and separators here if needed
    }
    return token;
}

// Function to print token information
void print_token(Token token) {
    printf("Type: %d, Lexeme: %s\n", token.type, token.lexeme);
}

int main() {
    FILE *fp;
    Token token;

    // Open the file for reading
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Tokenize the input
    do {
        token = get_next_token(fp);
        print_token(token);
    } while (token.type != TOKEN_END);

    // Close the file
    fclose(fp);

    return 0;
}


