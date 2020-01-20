/**
 * Write a program to check whether a character is an alphabet, digit or special character.
 */

#include <stdio.h>

int main()
{
  char ch;

  printf("Input any character: ");
  scanf("%c", &ch);

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    printf("%c is alphabet.\n", ch);
  }
  else if (ch >= '0' && ch <= '9')
  {
    printf("%c is digit.\n", ch);
  }
  else
  {
    printf("%c is a special character.\n", ch);
  }

  return 0;
}
