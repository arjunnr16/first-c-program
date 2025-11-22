// Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    float a, b, sum;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a + b;
    printf("Sum = %f\n", sum);

    return 0;
}