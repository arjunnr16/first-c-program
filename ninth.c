// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    int i;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest (yearly compounding)
    compoundInterest = principal;
    for(i = 1; i <= time; i++) {
        compoundInterest = compoundInterest + (compoundInterest * rate / 100);
    }
    compoundInterest = compoundInterest - principal; // CI = total - principal

    // Display results
    printf("Simple Interest: %f\n", simpleInterest);
    printf("Compound Interest: %f\n", compoundInterest);

    return 0;
}