/**
 * Write a program to check whether entered integer is positive or negative or zero.
 */

#include <stdio.h>

int main()
{
  int num;

  printf("Enter any integer: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("%d is a positive integer.\n", num);
  }
  else if (num < 0)
  {
    printf("%d is a negative integer.\n", num);
  }
  else if (num == 0)
  {
    printf("%d is neither positive nor negative.\n", num);
  }
  return 0;
}
