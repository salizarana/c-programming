/**
 * Example of continue statement.
 */

#include <stdio.h>

int main()
{
  int i;

  for (i = 0; i <= 10; i++)
  {
    if (i == 1)
    {
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}
