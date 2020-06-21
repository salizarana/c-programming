/**
 * Write a program to find the sum of all the elements of an array using pointer.
 */

#include <stdio.h>

int main()
{
  int i, n, sum = 0, num[50];

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", (num + i));
    sum += *(num + i);
  }
  printf("Sum: %d\n", sum);

  return 0;
}
