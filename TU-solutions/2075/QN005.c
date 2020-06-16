/**
 * Write a program to calculate sum of first 10 odd numbers.
 */

#include <stdio.h>

int main()
{
  int i, sum = 0;

  for (i = 1; i <= 10; i++)
  {
    sum = sum + 2 * i - 1;
  }
  printf("Sum of first 10 odd numbers: %d\n", sum);

  return 0;
}
