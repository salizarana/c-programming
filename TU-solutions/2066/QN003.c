/**
 * Write and test the following power() function that returns x raised to the
 * power n, where n can be any integer:
 * double power(double x, int, n)
 */

#include <stdio.h>
#include <math.h>

double power(double x, int n)
{
  double y = 1;

  while (n != 0)
  {
    y *= x;
    --n;
  }

  return y;
}

int main()
{
  double x, y;
  int n;

  printf("Enter the value for x: ");
  scanf("%lf", &x);
  printf("Enter the value for n: ");
  scanf("%d", &n);

  y = power(x, n);

  printf("Result = %.2lf\n", y);

  return 0;
}
