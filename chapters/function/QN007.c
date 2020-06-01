/**
 * Write a program to find the smallest number given by the user.
 */

#include <stdio.h>

int getSmallestNumber(int array[], int size);

int main()
{
  int array[10], size, smallest, i;

  printf("Enter the size for array:\n");
  scanf("%d", &size);

  printf("Enter value for array:\n");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &array[i]);
  }

  smallest = getSmallestNumber(array, size);
  printf("Smallest number: %d\n", smallest);
}

int getSmallestNumber(int array[], int size)
{
  int smallest = array[0], i;

  for (i = 1; i < size; i++)
  {
    if (smallest > array[i])
      smallest = array[i];
  }

  return smallest;
}
