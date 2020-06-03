/**
 * Pass by value vs. pass by reference
 */

#include <stdio.h>

void swapByValue(int x, int y)
{
  int z;

  z = x;
  x = y;
  y = z;

  printf("Swap: x=%d and y=%d\n", x, y);
}

void swapByReference(int *x, int *y)
{
  int z;

  z = *x;
  *x = *y;
  *y = z;

  printf("Swap: x=%d and y=%d\n", *x, *y);
}

int main()
{
  int x = 50, y = 70;

  printf("Pass By Value\n");
  swapByValue(x, y);
  printf("Original value: x=%d and y=%d\n", x, y);

  printf("Pass By Reference\n");
  swapByReference(&x, &y);
  printf("Original value: x=%d and y=%d\n", x, y);

  return 0;
}
