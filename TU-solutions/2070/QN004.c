/**
 * Write a program to input any 10 numbers then find out greatest and smallest number.
 */

#include <stdio.h>

int main()
{
  int i, num[10], greatest, smallest;

  printf("Enter any 10 numbers: \n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &num[i]);
  }

  greatest = smallest = num[0];
  for (i = 1; i < 10; ++i)
  {
    if (num[i] > greatest)
      greatest = num[i];
    else if (num[i] < smallest)
      smallest = num[i];
  }
  printf("Greatest number: %d\n", greatest);
  printf("Smallest number: %d\n", smallest);

  return 0;
}
