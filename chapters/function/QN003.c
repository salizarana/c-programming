/**
 * Example of function call with argument and return values.
 */

#include <stdio.h>

int addTwoNumbers(int a, int b);

int main()
{
  int x, y, sum;

  printf("Enter value for x and y:\n");
  scanf("%d%d", &x, &y);

  sum = addTwoNumbers(x, y);

  printf("Sum of two numbers: %d\n", sum);

  return 0;
}

int addTwoNumbers(int a, int b)
{
  return a + b;
}
