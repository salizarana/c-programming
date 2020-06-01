/**
 * Write a program to compute factorial using recursion.
 */

#include <stdio.h>

int factorial(int n);

int main()
{
  int n, fac;

  printf("Enter the value of n:\n");
  scanf("%d", &n);

  fac = factorial(n);

  printf("The factorial of %d is %d\n", n, fac);

  return 0;
}

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return factorial(n - 1) * n;
}
