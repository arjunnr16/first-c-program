// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        percent = (sp - cp) / cp * 100;
        printf("Profit Percentage = %f", percent);
        printf(" percent\n");
    }
    else if (cp > sp) {
        percent = (cp - sp) / cp * 100;
        printf("Loss Percentage = %f", percent);
        printf(" percent\n");
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}