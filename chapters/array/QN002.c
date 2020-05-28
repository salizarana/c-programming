/**
 * Write a program to add two matrices of size 2x2 with user input elements.
 */

#include <stdio.h>

int main()
{
  int first[2][2], second[2][2], sum[2][2], i, j;

  printf("Enter the value for first matrix: \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &first[i][j]);
    }
  }
  printf("Enter the valur for second matrix:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &second[i][j]);
    }
  }

  printf("Sum of entered matrices:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      sum[i][j] = first[i][j] + second[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
