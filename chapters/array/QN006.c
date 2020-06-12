/**
 * Write a program to find transpose of a matrix.
 */

#include <stdio.h>

int main()
{
  int r, c, i, j, a[10][10], transpose[10][10];

  printf("Enter rows and columns:\n");
  scanf("%d %d", &r, &c);

  printf("Enter matrix elements:\n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  // Finding transpose of matrix.
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      transpose[j][i] = a[i][j];
    }
  }

  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < c; i++)
  {
    for (j = 0; j < r; j++)
    {
      printf("%d  ", transpose[i][j]);
      if (j == r - 1)
        printf("\n");
    }
  }

  return 0;
}
