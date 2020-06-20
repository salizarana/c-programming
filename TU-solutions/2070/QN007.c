/**
 * Write a program to sort n numbers in ascending order using dynamic memory allocation.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, j, temp, *ptr;

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
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (*(ptr + i) > *(ptr + j))
      {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }

  printf("\nThe elements in the array after sorting: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\n", *(ptr + i));
  }
  free(ptr);

  return 0;
}
