/**
 * Example to modify array inside a function.
 */

#include <stdio.h>

void updateArray(int array[]);

int main()
{
  int array[3] = {1, 2, 3};

  updateArray(array);

  printf("First element: %d\n", array[0]); // First element of array is modified by the function.
}

void updateArray(int array[])
{
  array[0] = 10;
}
