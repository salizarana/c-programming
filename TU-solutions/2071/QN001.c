/**
 * Write a program to accept 10 numbers and print the sum of 
 * these numbers through function.
 */

#include <stdio.h>

void sum(int number[]);

int main()
{
  int i, num[10];

  printf("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &num[i]);
  }

  sum(num);

  return 0;
}

void sum(int number[])
{
  int i, sum = 0;

  for (i = 0; i < 10; i++)
  {
    sum += number[i];
  }
  printf("Sum: %d\n", sum);
}
