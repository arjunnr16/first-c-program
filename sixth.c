// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

