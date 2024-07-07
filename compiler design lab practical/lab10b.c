#include <stdio.h>
#include <ctype.h>

// Function prototypes
int calculateExpression(char*);

int main() {
    char expression[100];
    
    // Input expression
    printf("Enter the expression: ");
    fgets(expression, sizeof(expression), stdin);

    // Calculate expression and print result
    int result = calculateExpression(expression);
    printf("Result: %d\n", result);

    return 0;
}

// Function to calculate the expression
int calculateExpression(char* expr) {
    int result = 0;
    int num = 0;
    char op = '+';
    
    while (*expr != '\0') {
        if (isdigit(*expr)) {
            num = num * 10 + (*expr - '0');
        } 
        else if (*expr == '+' || *expr == '*') {
            if (op == '+') {
                result += num;
            } 
            else if (op == '*') {
                result *= num;
            }
            op = *expr;
            num = 0;
        } 
        else if (*expr == '\n') {
            break; // Exit loop when encountering newline
        }
        expr++;
    }
    
    // Handle the last number and operation
    if (op == '+') {
        result += num;
    } 
    else if (op == '*') {
        result *= num;
    }
    
    return result;
}


