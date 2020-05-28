/**
 * Write a program to multiply two 2*2 matrices with predefined values.
 */

#include <stdio.h>

int main()
{
  int a[2][2] = {{1, 2}, {1, 0}}, b[2][2] = {{1, 1}, {1, 1}};
  int c[2][2], i, j, k, sum;

  printf("Product of two matrices:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      sum = 0;
      for (k = 0; k < 2; k++)
      {
        sum += a[i][k] * b[k][j];
      }
      c[i][j] = sum;
    }
  }

  printf("Product of given matrices:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", c[i][j]);
      printf("\n");
    }
  }

  return 0;
}
