// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the special case when number is 0
    if (num == 0) {
        printf("Binary representation of 0 is: 0\n");
        return 0;
    }

    int binary[32]; // Array to store binary digits (assuming 32-bit integer)
    int i = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary digits in reverse order
    printf("Binary representation is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}