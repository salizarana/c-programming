/**
 * Write a program that use PI as a symbolic constant and 
 * calculates the area and circumference of a circle.
 */

#include<stdio.h>
#define PI 3.1415

int main() {
    float r, area, circumference;

    printf("Enter the value of radius : ");
    scanf("%f", &r);

    area = PI*r*r;
    circumference = 2*PI*r;

    printf("Area of circle = %f\nCircumference of circle = %f\n", area, circumference);

    return 0;
}
