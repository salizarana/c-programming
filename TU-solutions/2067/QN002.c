/**
 * Write a program that uses a do-while loop to compute and prints the sum
 * of squares of given n numbers.
 */

#include <stdio.h>

int main()
{
  int n, i, num[50], sum = 0;

  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
    do
    {
      sum += num[i] * num[i];
    } while (i == n);
  }
  printf("Sum of squares of given number: %d\n", sum);

  return 0;
}
