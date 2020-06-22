/**
 * Write a program to accept any number and print the sum of that number up
 * to a single digit through recursive function.
 */

#include <stdio.h>

int sumOfDigit(int n)
{
  if (n == 0)
    return 0;
  else
    return (n % 10 + sumOfDigit(n / 10));
}

int main()
{
  int num, sum;

  printf("Enter any number: ");
  scanf("%d", &num);

  sum = sumOfDigit(num);
  printf("Sum of digits: %d\n", sum);

  return 0;
}
