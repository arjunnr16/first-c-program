// Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;  // Cube of the digit
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}