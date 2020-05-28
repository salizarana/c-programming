/**
 * Write a program to simplify matrices of size and value given by user. [A + B -C]
 */

#include <stdio.h>

int main()
{
  int n, m, i, j, a[10][10], b[10][10], c[10][10], result[10][10];

  printf("Enter the number of rows and columns:\n");
  scanf("%d%d", &n, &m);

  printf("Enter the value for first matrix:\n");

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the value for second matrix:\n");

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  printf("Enter the value for third matrix:\n");

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &c[i][j]);
    }
  }

  printf("Sum of entered matrices:\n");

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      result[i][j] = a[i][j] + b[i][j] - c[i][j];
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
