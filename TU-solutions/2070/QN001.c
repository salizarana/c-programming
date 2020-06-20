/**
 * Write a program to find least number between any two number
 * using ternary operator.
 */

#include <stdio.h>

int main()
{
  int num1, num2, result;

  printf("Enter any two numbers: \n");
  scanf("%d%d", &num1, &num2);

  result = (num1 < num2) ? num1 : num2;

  printf("Least number: %d\n", result);

  return 0;
}
