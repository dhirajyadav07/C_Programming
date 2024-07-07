#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char prol[4][10] = {"S", "B", "A", "C"};
char pror[4][10] = {"A", "B", "C", "@"};
char prod[4][10] = {"S->Bc", "B->aB", "B->c", "C->dC"};
char first[4][10] = {"a", "a", "c", "d"};
char follow[4][10] = {"EOF", "c", "a", "c"};
char table[5][4][10];

int numr(char c) {
    switch(c) {
        case 'S': return 0;
        case 'B': return 1;
        case 'A': return 2;
        case 'C': return 3;
        case 'a': return 4;
        case 'c': return 5;
        case 'd': return 6;
        case 'e': return 7;
        case '$': return 8;
        default: return 2; // Default case, returns 2
    }
}

void init_table() {
    int i, j, k;
    for(i = 0; i < 5; i++)
        for(j = 0; j < 4; j++)
            strcpy(table[i][j], " ");

    for(i = 0; i < 4; i++) {
        k = strlen(first[i]);
        for(j = 0; j < k; j++) {
            strcpy(table[numr(prol[i][0]) + 1][numr(first[i][j]) + 1], prod[i]);
        }
    }

    for(i = 0; i < 4; i++) {
        if(strlen(pror[i]) == 1) {
            if(pror[i][0] == '@') {
                k = strlen(follow[i]);
                for(j = 0; j < k; j++) {
                    strcpy(table[numr(prol[i][0]) + 1][numr(follow[i][j]) + 1], prod[i]);
                }
            }
        }
    }

    strcpy(table[0][0], " ");
    strcpy(table[0][4], "S->Bc");
    strcpy(table[0][5], "B->c");
    strcpy(table[0][8], "S->Bc");
    strcpy(table[1][5], "B->c");
    strcpy(table[2][5], "B->c");
    strcpy(table[3][5], "C->dC");
}

int main() {
    int i, j, k;
    char input[100];

    system("cls"); // Clear the screen

    init_table();

    printf("The following is the predictive parsing table for the given grammar:\n");
    printf("_________________________________________________________________________________\n");
    for(i = 0; i < 4; i++)
        printf("%s\n", prod[i]);

    printf("\nPredictive parsing table is\n");
	printf("__________________________________________________________________________________\n");
    fflush(stdin);

    printf("%-10s", " ");
    for(i = 4; i < 8; i++)
        printf("%-10s", "a");
    printf("%-10s", "c");
    printf("%-10s", "d");
    printf("%-10s", "EOF");
    printf("\n");

    for(i = 0; i < 4; i++) {
	printf("___________________________________________________________________________________\n");
        printf("%-10s", prol[i]);

        for(j = 0; j < 8; j++) {
            printf("%-10s", table[i][j]);
        }
        printf("\n");
    }


    return 0;
}

