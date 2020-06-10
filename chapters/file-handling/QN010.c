/**
 * Write a program to store a sentence from user in the file and display vowels
 *  and consonants of the sentence.
 */

#include <stdio.h>

int main()
{
  FILE *fptr, *fptr1, *fptr2;
  char ch;

  fptr = fopen("Alphabets.txt", "w");
  printf("Enter a text:\n");
  while ((ch = getchar()) != EOF)
  {
    putc(ch, fptr);
  }

  fclose(fptr);

  fptr = fopen("Alphabets.txt", "r");
  fptr1 = fopen("Vowels.txt", "w");
  fptr2 = fopen("Consonants.txt", "w");
  while ((ch = getc(fptr)) != EOF)
  {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      putc(ch, fptr1);
    else
      putc(ch, fptr2);
  }
  fclose(fptr);
  fclose(fptr1);
  fclose(fptr2);

  fptr1 = fopen("Vowels.txt", "r");
  fptr2 = fopen("Consonants.txt", "r");
  printf("\nContents of Vowels file:\n");
  while ((ch = getc(fptr1)) != EOF)
    printf("%c\n", ch);

  printf("Contents of Consonants file:\n");
  while ((ch = getc(fptr2)) != EOF)
    printf("%c\n", ch);
  fclose(fptr1);
  fclose(fptr2);

  return 0;
}
