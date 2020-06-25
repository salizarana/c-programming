/**
 * Write a program to find the transpose of a matrix.
 */

#include <stdio.h>

int main()
{
  int a[3][5] = {{-3, 7, 5, -2, 8}, {2, 5, 8, 3, -4}, {-6, 9, 3, 6, 5}};
  int i, j, transpose[5][3];

  // Finding transpose of matrix.
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; j++)
    {
      transpose[j][i] = a[i][j];
    }
  }

  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d  ", transpose[i][j]);
      if (j == 2)
        printf("\n");
    }
  }

  return 0;
}
