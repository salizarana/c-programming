/**
 * Example of goto statement.
 */

#include <stdio.h>

void checkOddEven(int num)
{
  if (num % 2 == 0)
    goto even;
  else
    goto odd;

even:
  printf("%d is even.\n", num);
  return;
odd:
  printf("%d is odd.\n", num);
}

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  checkOddEven(num);

  return 0;
}
