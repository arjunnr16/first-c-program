// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if valid triangle first
    if (a + b > c && a + c > b && b + c > a) {

        // Equilateral: all sides equal
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        // Isosceles: any two sides equal
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        // Otherwise scalene
        else {
            printf("Scalene Triangle\n");
        }

    } else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}