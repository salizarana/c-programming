/**
 * Write a program to print the following output.
 * 1
 * 0 1
 * 1 0 1
 * 0 1 0 1
 * 1 0 1 0 1
 */

#include <stdio.h>

int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 1)
      {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
    printf("\n");
  }

  return 0;
}
