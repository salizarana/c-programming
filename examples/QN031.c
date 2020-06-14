/**
 * Write a program to evaluate following polynomial equation.
 * p(x) = a₀x⁰ + a₁x¹ + a₂X² +.....+ aₙ₋₁xⁿ⁻¹ + aₙxⁿ
 */

#include <stdio.h>
#include <math.h>

int main()
{
  int a[100], x, i, n, sum = 0;

  printf("Enter the order of polynomial: ");
  scanf("%d", &n);
  printf("Enter the value of variable(x): ");
  scanf("%d", &x);
  for (i = 0; i <= n; i++)
  {
    printf("Enter constant a%d: ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i <= n; i++)
  {
    sum += a[i] * (pow(x, i));
  }
  printf("Result: %d\n", sum);

  return 0;
}
