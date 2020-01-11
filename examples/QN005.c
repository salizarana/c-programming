/**
 * Write a program to calculate the volume of a cube.
 */

#include<stdio.h>
#include<math.h>

int main() {
    int l, vol;

    printf("Enter the value of length : ");
    scanf("%d", &l);

    vol = pow (l, 3);

    printf("Volume of cube = %d", vol);

    return 0;
}
