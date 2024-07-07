#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to recognize strings under the regular expressions 'a', 'a*b+', and 'abb'
bool recognize_string(const char *str) {
    int state = 0;
    int i = 0;

    while (str[i] != '\0') {
        switch (state) {
            case 0:
                if (str[i] == 'a') {
                    state = 1;
                } else {
                    return false;
                }
                break;
            case 1:
                if (str[i] == 'a') {
                    state = 1;
                } else if (str[i] == 'b') {
                    state = 2;
                } else {
                    return false;
                }
                break;
            case 2:
                if (str[i] == 'b') {
                    state = 2;
                } else if (str[i] == '\0') {
                    return true;
                } else {
                    return false;
                }
                break;
        }
        i++;
    }
    return (state == 1) || (state == 2); // Final state must be 1 or 2 to recognize 'a' or 'abb'
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Removing the trailing newline character

    // Test the input string and print the result
    printf("String '%s': %s\n", input, recognize_string(input) ? "Recognized" : "Not recognized");

    return 0;
}

