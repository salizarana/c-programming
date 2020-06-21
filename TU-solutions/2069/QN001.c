/**
 * Write a program to convert a lowercase character string into uppercase.
 */

#include <stdio.h>

int main()
{
  char ch[100];
  int i;

  printf("Enter your text : ");
  fgets(ch, sizeof(ch), stdin);

  for (i = 0; ch[i] != '\0'; i++)
  {
    if (ch[i] >= 'a' && ch[i] <= 'z')
    {
      ch[i] = ch[i] - 32;
    }
  }

  printf("Uppercase string : %s", ch);
  return 0;
}
