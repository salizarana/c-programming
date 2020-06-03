/**
 * Example of pass by reference.
 */

#include <stdio.h>

void addByReference(int *a);

int main()
{
  int a = 4;

  addByReference(&a);

  printf("Original number: %d\n", a);

  return 0;
}

void addByReference(int *a)
{
  *a = *a + 5;

  printf("Sum : %d\n", *a);
}
