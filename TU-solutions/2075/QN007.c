/**
 * Write a program to create a structure rectangle with data members length and breadth.
 */

#include <stdio.h>

struct Rectangle
{
  float length;
  float breadth;
} r;

int main()
{

  printf("Enter length: ");
  scanf("%f", &r.length);
  printf("Enter breadth: ");
  scanf("%f", &r.breadth);

  printf("Length: %.2f\nBreadth: %.2f\n", r.length, r.breadth);

  return 0;
}
