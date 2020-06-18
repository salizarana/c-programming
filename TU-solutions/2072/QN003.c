/**
 * Write a program to find the sum of each row of 3 x 2 matrix.
 */

#include <stdio.h>

int main()
{
  int i, j, matrix[3][2], sum;

  printf("Enter matrix elements:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    sum = 0;
    for (j = 0; j < 2; j++)
    {
      sum += matrix[i][j];
    }
    printf("Sum of row%d: %d\n", i, sum);
  }

  return 0;
}
