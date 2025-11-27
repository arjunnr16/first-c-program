// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the larger of the two numbers
    max = (a > b) ? a : b;

    // Loop until we find a number divisible by both
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}