/**
 * Write a program that takes four digit number from a user and 
 * displays the number in reverse order.
 */

#include<stdio.h>

int main() {
    int num, temp;

    printf("Enter any four digit number : ");
    scanf("%d", &num);

    temp = num%10;
    printf("Reverse is %d", temp);
    num = num/10;
    temp = num%10;
    printf("%d", temp);
    num = num/10;
    temp = num%10;
    printf("%d", temp);
    num = num/10;
    temp = num%10;
    printf("%d/n", temp);

    return 0;
}
