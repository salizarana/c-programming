/**
 * Write a program to obtain the product of matrices.
 */

#include <stdio.h>

int main()
{
  int first[3][3] = {{3, 5, 7}, {2, -3, 4}, {4, 5, 2}};
  int second[3][2] = {{7, 6}, {6, -5}, {4, 3}};
  int i, j, k, sum, product[3][2];

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      sum = 0;
      for (k = 0; k < 3; k++)
      {
        sum += first[i][k] * second[k][j];
      }
      product[i][j] = sum;
    }
  }

  printf("Product of given matrices:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", product[i][j]);
    }
    printf("\n");
  }

  return 0;
}
