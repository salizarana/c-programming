/**
 * Write a program to find the sum and average of 10 integer numbers
 * stored in an array.
 */

#include <stdio.h>

int main()
{
  int i;
  float num[10], sum = 0, average;

  printf("Enter numbers:\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%f", &num[i]);
  }

  for (i = 0; i < 10; i++)
  {
    sum += num[i];
    average = sum / 10;
  }
  printf("Sum: %.2f\n", sum);
  printf("Average: %.2f\n", average);

  return 0;
}
