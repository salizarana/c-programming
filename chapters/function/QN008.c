/**
 * Example to modify array inside a function.
 */

#include <stdio.h>

int a(int array[]);

int main()
{
  int array[3] = {1, 2, 3}, x;

  x = a(array);

  printf("First element: %d\n", x); // First element of array is modified inside function.
}

int a(int array[])
{
  array[0] = 10;

  return array[0];
}
