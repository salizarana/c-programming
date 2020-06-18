/**
 * Write a program to find sum and average of n numbers entered from the keyboard
 * using dynamic memory allocation to create array to store these n numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, *ptr, sum = 0;
  float average;

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
    scanf("%d", (ptr + i));
    sum += *(ptr + i);
  }
  average = sum / (float)n;
  printf("Sum = %d\n", sum);
  printf("Average: %.2f\n", average);
  free(ptr);

  return 0;
}
