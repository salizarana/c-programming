/**
 * Write a program to display the n terms of harmonic series and their sum.
 */

#include <stdio.h>

int main()
{
  int x, i;
  float sum = 0;

  printf("Input terms: ");
  scanf("%d", &x);

  for (i = 1; i <= x; i++)
  {
    printf("1/%d", i);
    i == x ? printf(" ") : printf(" + ");
    sum = sum + (1 / (float)i);
  }

  printf("\nSum = %.2f\n", sum);

  return 0;
}
