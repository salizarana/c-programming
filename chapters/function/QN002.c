/**
 * Example of function call with argument and no return values.
 */

#include <stdio.h>

void addTwoNumbers(int a, int b);

int main()
{
  int x, y;

  printf("Enter value for x and y:\n");
  scanf("%d%d", &x, &y);

  addTwoNumbers(x, y);

  return 0;
}

void addTwoNumbers(int a, int b)
{
  int sum;

  sum = a + b;

  printf("Sum of two numbers: %d\n", sum);
}
