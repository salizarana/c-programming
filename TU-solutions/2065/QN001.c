/**
 * Write a program that uses a "for" loop to compute and prints the sum of a
 * given numbers of squares.
 */

#include <stdio.h>

int main()
{
  int i, n, num[50], sum = 0;

  printf("Enter array size: ");
  scanf("%d", &n);
  printf("Enter numbers:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
    sum += num[i] * num[i];
  }
  printf("Sum of squares of given number is %d.\n", sum);

  return 0;
}
