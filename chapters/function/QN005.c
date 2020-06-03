/**
 * Write a program to multiply two positive integers using recursion.
 */

#include <stdio.h>

int multiply(int m, int n);

int main()
{
  int a, b, product;

  printf("Enter value for a and b:\n");
  scanf("%d%d", &a, &b);

  if (a > b)
    product = multiply(a, b);
  else
    product = multiply(b, a);

  printf("Product: %d\n", product);

  return 0;
}

int multiply(int m, int n)
{
  if (n == 1)
    return m;
  else
    return multiply(m, n - 1) + m;
}
