/**
 * Write a program to read lines of text then count no. of vowels, no. of digits 
 * and no. of spaces.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
  char text[200], ch;
  int i, vowels, digits, spaces;

  vowels = digits = spaces = 0;

  printf("Enter text:\n");
  fgets(text, sizeof(text), stdin);

  for (i = 0; text[i] != '\0'; i++)
  {
    ch = text[i];
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
      ch = tolower(ch);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowels++;
      }
    }
    else if (ch >= '0' && ch <= '9')
    {
      digits++;
    }
    else if (ch == ' ')
    {
      spaces++;
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of digits: %d\n", digits);
  printf("Number of spaces: %d\n", spaces);

  return 0;
}
