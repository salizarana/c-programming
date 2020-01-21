/**
 * Write a program to display the n terms of even natural number and their sum.
 */

#include <stdio.h>

int main()
{
  int i, n, sum = 0;

  printf("Enter a number :");
  scanf("%d", &n);

  if (n > 0)
  {
    for (i = 1; i <= n; i++)
    {
      printf("%d\t", 2 * i);
      sum = sum + 2 * i;
    }
    printf("\nSum = %d\n", sum);
  }
  else
    printf("Invalid number.\n");

  return 0;
}