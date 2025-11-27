// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter a operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': printf("Result = %d\n", a / b); break;
        case '%': printf("Result = %d\n", a % b); break;
        default:  printf("Invalid Operator\n");
    }

    return 0;
}