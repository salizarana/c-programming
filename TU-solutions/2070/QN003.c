/**
 * Write a program to display following output.
 * 1
 * 1 1
 * 1 1 1 
 * 1 1 1 1 
 * 1 1 1 1 1
 */

#include <stdio.h>

int main()
{
  int i, j;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("1");
    }
    printf("\n");
  }

  return 0;
}
