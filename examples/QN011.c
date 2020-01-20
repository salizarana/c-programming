/**
 * Write a program to check whether a triangle can be formed by the given value of angles
 * for the triangles.
 */

#include <stdio.h>

int main()
{
  int x, y, z, sum;

  printf("Input three angles for triangle: ");
  scanf("%d%d%d", &x, &y, &z);

  sum = x + y + z;

  if (sum == 180)
    printf("Formation of triangle is possible.\n");
  else
    printf("Formation of trianlge is not possible.\n");

  return 0;
}
