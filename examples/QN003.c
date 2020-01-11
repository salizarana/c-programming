/**
 * Write a program to calculate the sum, difference, product and division of two numbers.
 */

#include<stdio.h>

int main() {
    int a, b, sum, difference, product;
    float division;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a+b;
    difference = a-b;
    product = a*b;
    division = a/(float)b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Division = %f\n", division);

    return 0;
}
