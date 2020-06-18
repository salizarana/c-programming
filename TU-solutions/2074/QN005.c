/**
 * Write a program to read and print data stored in a file input.txt. 
 */

#include <stdio.h>

int main()
{
  FILE *f1;
  char a;

  printf("Enter a text:\n");
  f1 = fopen("text.txt", "w");
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
