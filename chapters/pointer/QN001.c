/**
 * Pass by value vs. pass by reference.
 */

#include <stdio.h>

void addByValue(int x, int y);
void addByReference(int *x, int *y);

int main()
{
  int x, y;
  x = 20;
  y = 30;

  printf("Pass by value\n");
  addByValue(x, y);
  printf("Original value: x = %d and y = %d\n", x, y);

  printf("\nPass by reference\n");
  addByReference(&x, &y);
  printf("Original value: x = %d and y = %d\n", x, y);

  return 0;
}

void addByValue(int x, int y)
{
  x = x + x;
  y = y + y;

  printf("Value after function call: x = %d and y = %d\n", x, y);
}

void addByReference(int *x, int *y)
{
  *x = *x + *x;
  *y = *y + *y;
  printf("Value after function call: x = %d and y = %d\n", *x, *y);
}
