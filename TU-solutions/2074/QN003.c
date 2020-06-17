/**
 * Write a program that computes the sum of digits of given integer number.
 */

#include <stdio.h>

int main()
{
  long temp, digit, num, sum = 0;

  printf("Enter the number: ");
  scanf("%ld", &num);

  temp = num;
  while (num > 0)
  {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }
  printf("Given number: %ld\n", temp);
  printf("Sum of digits: %ld\n", sum);

  return 0;
}
