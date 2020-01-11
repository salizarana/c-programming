/**
 * Write a program to calculate simple interest. 
 */

#include<stdio.h>

int main() {
    float p, t, r, SI;

    printf("Enter Principle :");
    scanf("%f", &p);
    printf("Enter Time : ");
    scanf("%f", &t);
    printf("Enter Rate : ");
    scanf("%f", &r);

    SI = (p*t*r)/100;

    printf("Simple Interest = %f\n", SI);

    return 0;
}
