/**
 * Write a program to add two numbers.
 */

#include<stdio.h>
#include<conio.h>

int main () {
    int a, b, c;
    
    printf("Enter two numbers :");
    scanf("%d%d", &a , &b);
    c = a + b;
    printf("Sum of the two numbers is %d", c);

    return 0;
}
