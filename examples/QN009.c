/**
 * Write a program to convert feet into meters.
 */

#include <stdio.h>

int main()
{
  float feet, meter;

  printf("Enter distance in feet: ");
  scanf("%f", &feet);

  meter = feet * 3.2808399;

  printf("%.2f feet = %.2f meters\n", feet, meter);

  return 0;
}
