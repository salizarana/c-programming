/**
 *  Write a program to print the elements of array using pointers.
 */

#include <stdio.h>

int main()
{
  int a[50], i, n;
  int *p = a; // here a gives address of a[0]

  printf("Enter the size of array:\n");
  scanf("%d", &n);
  printf("Enter the array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
    printf("\nValue of array[%d] is %d at address %u.", i, *(p + i), (p + i));

  return 0;
}
