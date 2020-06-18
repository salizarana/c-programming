/**
 * Write a program to relate two integers using =, > and < by using if-else ladder.
 */

#include <stdio.h>

int main()
{
  int a = 5, b = 8;

  if (a == b)
    printf("a is equal to b.\n");
  else if (a > b)
    printf("a is greater than b.\n");
  else
    printf("a is lesser than b.\n");

  return 0;
}
