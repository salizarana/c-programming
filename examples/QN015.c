/**
 * Write a program to find the largest of three numbers.
 */

#include <stdio.h>

int main()
{
  int x, y, z;

  printf("Enter any three numbers: ");
  scanf("%d %d %d", &x, &y, &z);

  if (x >= y && x >= z)
    printf("%d is greatest.\n", x);

  else if (y >= x && y >= z)
    printf("%d is greatest.\n", y);

  else
    printf("%d is greatest.\n", z);

  return 0;
}
