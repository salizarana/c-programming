/**
 * Write a program which will read a line and delete from it all occurrences of the word "that".
 */

#include <stdio.h>
#include <string.h>

void removeAll(char *str, char *toRemove);

int main()
{
  char str[100];
  char toRemove[100] = "that";

  printf("Enter any string: ");
  fgets(str, sizeof(str), stdin);

  printf("String before removing '%s':\n%s", toRemove, str);

  removeAll(str, toRemove);

  printf("\nString after removing '%s':\n%s", toRemove, str);

  return 0;
}

void removeAll(char *str, char *toRemove)
{
  int i, j, stringLen, toRemoveLen;
  int found;

  stringLen = strlen(str);        // Length of string
  toRemoveLen = strlen(toRemove); // Length of word to remove

  for (i = 0; i <= stringLen - toRemoveLen; i++)
  {
    // Match word with string
    found = 1;
    for (j = 0; j < toRemoveLen; j++)
    {
      if (str[i + j] != toRemove[j])
      {
        found = 0;
        break;
      }
    }

    // If it is not a word
    if (str[i + j] != ' ' && str[i + j] != '\t' && str[i + j] != '\n' && str[i + j] != '\0')
    {
      found = 0;
    }

    if (found == 1)
    {
      for (j = i; j <= stringLen - toRemoveLen; j++)
      {
        str[j] = str[j + toRemoveLen];
      }

      stringLen = stringLen - toRemoveLen;
      i--;
    }
  }
}
