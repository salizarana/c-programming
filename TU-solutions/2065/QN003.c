/**
 * Write a function to add, subtract, multiply and divide two complex numbers
 * (x + iy) and (c + id).
 */

#include <stdio.h>

struct complex
{
  int real;
  int img;
};

int main()
{
  int a, b, c;
  struct complex x, y, z;

  printf("Enter x and y where x + iy is the first complex number:\n");
  scanf("%d%d", &x.real, &x.img);
  printf("Enter c and d where c + id is the second complex number:\n");
  scanf("%d%d", &y.real, &y.img);

  // Adding two complex numbers
  z.real = x.real + y.real;
  z.img = x.img + y.img;

  if (z.real >= 0)
    printf("Sum: %d + i%d\n", z.real, z.img);
  else
    printf("Sum: %d %di\n", z.real, z.img);

  // Subtracting two complex numbers
  z.real = x.real - y.real;
  z.img = x.img - y.img;

  if (z.img >= 0)
    printf("Difference: %d + %di\n", z.real, z.img);
  else
    printf("Difference: %d %di\n", z.real, z.img);

  // Multiplying two complex numbers
  z.real = x.real * y.real - x.img * y.img;
  z.img = x.img * y.real + x.real * y.img;

  if (z.img >= 0)
    printf("Product: %d + %di\n", z.real, z.img);
  else
    printf("Product: %d %di\n", z.real, z.img);

  // Division of two complex numbers
  if (y.real == 0 && y.img == 0)
    printf("Error!\n");
  else
  {
    a = x.real * y.real + x.img * y.img;
    b = x.img * y.real - x.real * y.img;
    c = y.real * y.real + y.img + y.img;

    if (a % c == 0 && b % c == 0)
    {
      if (b / c >= 0)
        printf("Division: %d + i%d\n", a / c, b / c);
      else
        printf("Division: %d %di\n", a / c, b / c);
    }
    else if (a % c == 0 && b % c != 0)
    {
      if (b / c >= 0)
        printf("Division: %d + %d/%di\n", a / c, b, c);
      else
        printf("Division: %d %d/%di\n", a / c, b, c);
    }
    else if (a % c != 0 && b % c == 0)
    {
      if (b / c >= 0)
        printf("Division: %d/%d + %di\n", a, c, b / c);
      else
        printf("Division: %d %d/%di\n", a, c, b / c);
    }
    else
    {
      if (b / c >= 0)
        printf("Division: %d/%d + %d/%di\n", a, c, b, c);
      else
        printf("Division: %d/%d %d/%di\n", a, c, b, c);
    }
  }

  return 0;
}
