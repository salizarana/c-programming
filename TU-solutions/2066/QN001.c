/**
 * Write a program that uses a while loop to compute and prints the sum of a given numbers of squares.
 */

#include <stdio.h>

int main()
{
  int n, i = 1, sum = 0;

  printf("Enter any number: ");
  scanf("%d", &n);

  while (i <= n)
  {
    sum = sum + (i * i);
    i++;
  }
  printf("Sum of squares of numbers from 1 to %d is %d.\n", i, sum);

  return 0;
}
