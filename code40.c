// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, num;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    num = binary;

    printf("1's complement is: ");

    while (num > 0) {
        digit = num % 10;  // Get the last digit
        if (digit == 0)
            printf("1");
        else if (digit == 1)
            printf("0");
        else {
            printf("\nInvalid binary number.\n");
            return 1;
        }
        num = num / 10;  // Remove last digit
    }

    printf("\n(Note: Digits are printed in reverse order)\n");
    return 0;
}