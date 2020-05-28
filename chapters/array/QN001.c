/**
 * Write a program to add two matrices of size 2x2 with predefined values.
 */

#include <stdio.h>

int main()
{
  int first[2][2] = {{1, 1}, {2, 2}}, second[2][2] = {{1, 1}, {2, 2}};
  int sum[2][2], i, j;

  printf("Sum of matrices:\n");
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
