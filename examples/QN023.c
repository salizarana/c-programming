/**
 * Write a program to display the natural numbers.
 */

#include <stdio.h>

int main()
{
  int a, i;

  printf("Input any number: ");
  scanf("%d", &a);

  for (i = 1; i <= a; i++)
  {
    printf("%d\n", i);
  }

  return 0;
}
