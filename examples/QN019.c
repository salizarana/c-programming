/**
 * Write a program to check whether a triangle is equilateral, isoceles or scalene.
 */

#include <stdio.h>

int main()
{
  int x, y, z, sum;

  printf("Enter the value of angles for x, y, z : ");
  scanf("%d%d%d", &x, &y, &z);

  sum = x + y + z;

  if (sum == 180)
  {
    if (x == y && y == z && x == z)
    {
      printf("The triangle is equilateral.");
    }

    if ((x == y && y != z) || (y == z && z != x) || (x == z && z != y))
    {
      printf("The triangle is isoceles.");
    }

    if (x != y && y != z && x != z)
    {
      printf("The triangle is scalene.");
    }
  }

  else
  {
    printf("Ivalid.");
  }

  return 0;
}
