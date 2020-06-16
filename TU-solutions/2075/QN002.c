/**
 * Write a program that reads data from a file "input.txt" and writes to "output.txt" file.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1, *f2;
  char c;

  printf("Enter a text:\n");
  f1 = fopen("input.txt", "w");
  while ((c = getchar()) != EOF)
  {
    putc(c, f1);
  }
  printf("\n");
  fclose(f1);

  f1 = fopen("input.txt", "r");
  f2 = fopen("output.txt", "w");
  while ((c = getc(f1)) != EOF)
  {
    putc(c, f2);
  }
  printf("\nText copied.\n");
  fclose(f1);
  fclose(f2);

  return 0;
}
