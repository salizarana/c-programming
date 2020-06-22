/**
 * Write a program to find the largest and smallest among the given elements in an array.
 */

#include <stdio.h>

int main()
{
  int n, i, num[100], largest, smallest;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
  }

  largest = smallest = num[0];
  for (i = 1; i < n; ++i)
  {
    if (num[i] > largest)
      largest = num[i];
    else if (num[i] < smallest)
      smallest = num[i];
  }
  printf("Largest number: %d\n", largest);
  printf("Smallest number: %d\n", smallest);

  return 0;
}
