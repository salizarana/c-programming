/**
 * Write a program to count the numbers of words in a sentence.
 */

#include <stdio.h>

int main()
{
  char ch[100];
  int i, words = 0;

  printf("Enter a sentence:\n");
  fgets(ch, sizeof(ch), stdin);

  for (i = 0; ch[i] != '\0'; i++)
  {
    if (ch[i] == ' ')
      words++;
  }
  printf("Number of words: %d\n", words);

  return 0;
}
