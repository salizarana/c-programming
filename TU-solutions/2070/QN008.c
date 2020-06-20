/**
 * Write a program to read lines of text then count no. of vowels, no. of digits 
 * and no. of spaces.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
  char text[200];
  int i, vowels, digits, spaces;

  vowels = digits = spaces = 0;

  printf("Enter text:\n");
  fgets(text, sizeof(text), stdin);

  for (i = 0; text[i] != '\0'; i++)
  {
    if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    {
      text[i] = tolower(text[i]);
      if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      {
        vowels++;
      }
    }
    else if (text[i] >= '0' && text[i] <= '9')
    {
      digits++;
    }
    else if (text[i] == ' ')
    {
      spaces++;
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of digits: %d\n", digits);
  printf("Number of spaces: %d\n", spaces);

  return 0;
}
