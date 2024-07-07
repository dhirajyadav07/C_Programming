#include <stdio.h>
#include <ctype.h>

int is_valid_identifier(const char *str) {
    if (!isalpha(*str) && *str != '_') {
        return 0;
    }
    const char *p; // Fix declaration of p
    for (p = str + 1; *p; p++) { // Fix assignment to p
        if (!isalnum(*p) && *p != '_') {
            return 0;
        }
    }
    return 1;
}

int main() {
    char identifier[100];
    printf("Enter an identifier: ");
    scanf("%s", identifier);
    if (is_valid_identifier(identifier)) {
        printf("%s is a valid identifier.\n", identifier);
    } else {
        printf("%s is not a valid identifier.\n", identifier);
    }
    return 0;
}

