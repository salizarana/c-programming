/**
 * Write a program to find the roots of a quadratic equation.
 */

#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, discriminant, root1, root2, imaginary, real;

  printf("Enter value for a, b and c:\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  //condition for real and different roots
  if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Root1 = %.2lf \nRoot2 = %.2lf\n", root1, root2);
  }

  //condition for real and equal roots
  else if (discriminant == 0)
  {
    root1 = root2 = -b / (2 * a);
    printf("Root1 = Root2 = %.2lf", root1);
  }

  //if roots are not real
  else
  {
    real = -b / (2 * a);
    imaginary = sqrt(-discriminant) / (2 * a);
    printf("Root1 = %.2lf + %.2lf \nRoot2 = %.2lf - %.2lf\n", real, imaginary, real, imaginary);
  }

  return 0;
}
