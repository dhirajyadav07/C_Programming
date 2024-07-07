#include <stdio.h>
#include <string.h>

int isComment(const char *str) {
    if (str[0] == '/' && str[1] == '/') {
        return 1; // single-line comment
    } else if (str[0] == '/' && str[1] == '*') {
        return str[strlen(str) - 1] == '*' && str[strlen(str) - 2] == '/'; // multi-line comment
    } else {
        return 0; // not a comment
    }
}

int main() {
     char input[1024];
    printf("Enter a line: ");
    fgets(input, sizeof(input), stdin);
    if (isComment(input)) {
        printf("The input line is a comment.\n");
    } else {
        printf("The input line is not a comment.\n");
    }
    return 0;
}

