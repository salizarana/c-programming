/**
 * Write a program that uses pointer to copy an array of double.
 */

#include <stdio.h>

int main()
{
  double num[100], copy[100], *p, *p1;
  int n, i;

  printf("Enter the size of array: ");
  scanf("%d", &n);
  p = &num;
  p1 = &copy;
  printf("Enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%lf", &*(p + i));
  }

  for (i = 0; i < n; i++)
  {
    *(p1 + i) = *(p + i);
  }

  printf("After copy of array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%.2lf\n", *(p1 + i));
  }

  return 0;
}
