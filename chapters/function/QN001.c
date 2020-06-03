/**
 * Example of function call with no argument and no return values.
 */

#include <stdio.h>

void addTwoNumbers();

int main()
{
  addTwoNumbers(); // argument is not passed
  return 0;
}

// return type is void meaning doesn't return any value
void addTwoNumbers()
{
  int a, b, sum;

  printf("Enter value for a and b:\n");
  scanf("%d%d", &a, &b);

  sum = a + b;

  printf("Sum of two numbers: %d\n", sum);
}
