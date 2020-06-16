/** 
 * Write a program to add two matrices using array.
 */

#include <stdio.h>

int main()
{
  int a, b, i, j, first[10][10], second[10][10], sum[10][10];

  printf("Enter the number of rows and columns: ");
  scanf("%d%d", &a, &b);

  printf("Enter the value for first matrix: ");

  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      scanf("%d", &first[i][j]);
    }
  }

  printf("Enter the value for second matrix: ");

  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      scanf("%d", &second[i][j]);
    }
  }

  printf("Sum of entered matrices:\n");

  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      sum[i][j] = first[i][j] + second[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
