#include <stdio.h>
#include <ctype.h>

int is_operator(char c) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '<':
        case '>':
        case '=':
        case '!':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char c;
    int in_operator = 0;
    int operator_length = 0;
    printf("Enter a sequence of characters: ");
    while ((c = getchar()) != '\n') {
        if (is_operator(c)) {
            if (in_operator) {
                printf("Error: multiple operators detected.\n");
                return 1;
            }
            in_operator = 1;
            operator_length = 1;
        } else if (in_operator) {
            operator_length++;
            if (operator_length > 2) {
                printf("Error: invalid operator detected.\n");
                return 1;
            }
        } else {
            in_operator = 0;
            operator_length = 0;
        }
    }
    if (in_operator) {
        printf("Error: incomplete operator detected.\n");
        return 1;
    }
    printf("The sequence of characters is valid.\n");
    return 0;
}

