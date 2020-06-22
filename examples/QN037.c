/**
 * Write a program to display fibonacci series upto certain number.
 */

#include <stdio.h>

int main()
{
  int t1 = 0, t2 = 1, nextTerm = 0, n;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Fibonacci Series:\n%d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= n)
  {
    printf("%d", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  printf("\n");

  return 0;
}
