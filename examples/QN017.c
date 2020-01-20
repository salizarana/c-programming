/**
 * Write a program to check whether an alphabet is a vowel or consonant.
 */

#include <stdio.h>

int main()
{
  char ch;

  printf("Enter any alphabet :");
  scanf("%c", &ch);

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
      printf("%c is vowel.\n", ch);
    }
    else
    {
      printf("%c is consonant.\n", ch);
    }
  }

  else
  {
    printf("Invalid\nTry Again\n");
  }

  return 0;
}
