/**
 * Write a program to write and read a line of text into the file from keyboard input.
 */

#include <stdio.h>

int main()
{
  FILE *f1;
  char a;

  printf("Enter a text:\n");
  f1 = fopen("text.text", "w");
  while ((a = getchar()) != EOF)
  {
    putc(a, f1);
  }
  printf("\n");
  fclose(f1);

  f1 = fopen("text.txt", "r");
  printf("Output:\n");
  while ((a = getc(f1)) != EOF)
  {
    printf("%c", a);
  }
  printf("\n");
  fclose(f1);

  return 0;
}
