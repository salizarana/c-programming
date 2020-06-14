/**
 * Example of break statement.
 */

#include <stdio.h>

int main()
{
  int num = 0;

  while (num <= 100)
  {
    printf("Value of variable num is: %d\n", num);
    if (num == 3)
    {
      break;
    }
    num++;
  }
  printf("Out of loop\n");

  return 0;
}
