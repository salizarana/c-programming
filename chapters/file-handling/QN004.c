/**
 * Write a program to place cursor to specified position in the file. 
 */

#include <stdio.h>

int main()
{
  FILE *fp;
  char c;

  fp = fopen("text.txt", "w");
  fputs("Hello abcd", fp);
  fseek(fp, 5, SEEK_SET);
  fputs(" there", fp);
  fclose(fp);

  fp = fopen("text.txt", "r");
  while (1)
  {
    c = fgetc(fp);
    if (feof(fp))
    {
      break;
    }
    printf("%c", c);
  }
  printf("\n");
  fclose(fp);

  return (0);
}
