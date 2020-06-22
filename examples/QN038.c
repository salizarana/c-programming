/**
 * Write a program to check whether a number is palindrome or not.
 */

#include <stdio.h>

int main()
{
  int n, reversedNumber = 0, remainder, originalNumber;

  printf("Enter an integer: ");
  scanf("%d", &n);
  originalNumber = n;

  // reversed integer is stored in reversedN
  while (n != 0)
  {
    remainder = n % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    n /= 10;
  }

  // palindrome if orignalN and reversedN are equal
  if (originalNumber == reversedNumber)
    printf("%d is a palindrome number.\n", originalNumber);
  else
    printf("%d is not a palindrome number.\n", originalNumber);

  return 0;
}
