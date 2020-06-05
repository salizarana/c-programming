/**
 * Write a program to calculate sum of n numbers from user input using calloc.
 * Also free up the allocated space.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, *ptr, sum = 0;

  printf("Enter the size of array:\n");
  scanf("%d", &n);
  ptr = (int *)calloc(n, sizeof(int));

  if (ptr == NULL)
  {
    printf("Memory cannot be allocated.\n");
    exit(0);
  }

  printf("Enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &*(ptr + i));
    sum += *(ptr + i);
  }
  printf("Sum = %d\n", sum);
  free(ptr);

  return 0;
}
