/**
 * Write a program to find the prime numbers within a range of numbers.
 */

#include <stdio.h>

int main()
{
  int a, b, i, j, c = 0;

  printf("Input number for starting range: ");
  scanf("%d", &a);
  printf("Input number for ending range: ");
  scanf("%d", &b);

  printf("The prime numbers from %d to %d are :\n", a, b);

  for (i = a; i <= b; i++)
  {
    c = 0;
    for (j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        c++;
      }
    }

    if (c == 2)
      printf("%d \n", i);
  }

  return 0;
}
