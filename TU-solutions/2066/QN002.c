/**
 * Write a program to enter two 3 x 3 matrices and calculate the product of given matrices. 
 */

#include <stdio.h>

int main()
{
  int first[3][3], second[3][3], product[3][3], i, j, k, sum;

  printf("Enter the value for first matrix: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &first[i][j]);
    }
  }
  printf("Enter the valur for second matrix:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &second[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      sum = 0;
      for (k = 0; k < 2; k++)
      {
        sum += first[i][k] * second[k][j];
      }
      product[i][j] = sum;
    }
  }

  printf("Product of given matrices:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", product[i][j]);
    }
    printf("\n");
  }

  return 0;
}
