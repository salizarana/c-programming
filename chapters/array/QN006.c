/**
 * Write a program to find transpose of a matrix.
 */

#include <stdio.h>

int main()
{
  int row, column, i, j, a[10][10], transpose[10][10];

  printf("Enter rows and columns:\n");
  scanf("%d %d", &row, &column);

  printf("Enter matrix elements:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  // Finding transpose of matrix.
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      transpose[j][i] = a[i][j];
    }
  }

  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < column; i++)
  {
    for (j = 0; j < row; j++)
    {
      printf("%d  ", transpose[i][j]);
      if (j == row - 1)
        printf("\n");
    }
  }

  return 0;
}
