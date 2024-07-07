#include <stdio.h>
#include <string.h>

// Define the grammar rules
typedef struct Rule {
    char A;
    char* alpha;
} Rule;

Rule rules[] = {
    {'E', "E+T"},
    {'E', "T"},
    
    {'T', "T*F"},
    {'T', "F"},
   
    {'F', "id"},
    {'F', "(E)"},
    {'F', "e"} // nullable production
};

// Define the First and Follow sets
char* First[] = {"id", "(", "e"};
char* Follow[] = {"$", ")", "+"};

// Function to check if a symbol is a non-terminal
int isNonTerminal(char symbol) {
    return symbol == 'E' || symbol == 'T' || symbol == 'F';
}

// Function to print the parsing table
void printParsingTable() {
    int i, j;

    printf("  | %c %c %c + $\n", First[0][0], First[1][0], Follow[0]);
    

    for (i = 0; i < sizeof(rules) / sizeof(Rule); i++) {
    	 printf("--|------------------------\n");
        printf("%c |", rules[i].A);

        for (j = 0; j < sizeof(First) / sizeof(char*); j++) {
            if (strchr(rules[i].alpha, First[j][0]) != NULL) {
                printf(" %s", rules[i].alpha);
                break;
            }
        }

        if (j == sizeof(First) / sizeof(char*)) {
            for (j = 0; j < sizeof(Follow) / sizeof(char*); j++) {
                if (strchr(rules[i].alpha, Follow[j][0]) != NULL) {
                    printf(" %s", rules[i].alpha);
                    break;
                }
            }
        }

        printf("\n");
    }
}

int main() {
    printParsingTable();
    return 0;
}

