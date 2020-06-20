/**
 * Write a program to add two 3 x 3 matrix using function.
 */

#include <stdio.h>

void addMatrix(int first[][3], int second[][3], int (*sum)[3]);

int main()
{
  int first[3][3], second[3][3], sum[3][3], i, j;

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

  addMatrix(first, second, sum);

  return 0;
}

void addMatrix(int first[][3], int second[][3], int (*sum)[3])
{
  int i, j;
  printf("Sum of entered matrices:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      sum[i][j] = first[i][j] + second[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }
}
