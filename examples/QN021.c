/**
 * Write a program to read any digit and displays it in the word.
 */

#include <stdio.h>

int main()
{
  int a, num = 0;

  printf("Enter digit : ");
  scanf("%d", &a);

  while (a != 0)
  {
    num = (num * 10) + (a % 10);
    a /= 10;
  }

  while (num != 0)
  {
    switch (num % 10)
    {
    case 0:
      printf("Zero ");
      break;
    case 1:
      printf("One ");
      break;
    case 2:
      printf("Two");
      break;
    case 3:
      printf("Three ");
      break;
    case 4:
      printf("Four ");
      break;
    case 5:
      printf("Five ");
      break;
    case 6:
      printf("Six ");
      break;
    case 7:
      printf("Seven ");
      break;
    case 8:
      printf("Eight ");
      break;
    case 9:
      printf("Nine ");
      break;
    }

    num = num / 10;
  }

  return 0;
}
