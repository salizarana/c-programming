/**
 * Example of pass by value.
 */

#include <stdio.h>

void addByValue(int a);

int main()
{
  int a = 4;

  addByValue(a);
  printf("Original number: %d\n", a);

  return 0;
}

void addByValue(int a)
{
  a = a + 5;

  printf("Sum = %d\n", a);
}
