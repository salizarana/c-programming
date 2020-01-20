/**
 * Write a program that swaps the contains of two variables eneterd by user.
 * Display values in variables before swapping and after swapping.
 */

#include <stdio.h>

int main()
{
  int x, y, temp;

  printf("Enter value for x: ");
  scanf("%d", &x);
  printf("Enter value for y: ");
  scanf("%d", &y);

  printf("Before swapping\n x = %d y = %d\n", x, y);

  temp = x;
  x = y;
  y = temp;

  printf("After swapping\n x = %d y = %d", x, y);

  return 0;
}
