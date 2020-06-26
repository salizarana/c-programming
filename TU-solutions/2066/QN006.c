/**
 * Create a text file and enter "to write a good program is very time consuming job".
 * Create another text which reverse of above text.
 */

#include <stdio.h>

int main()
{
  FILE *fp1, *fp2;
  char ch;
  int i, n;

  fp1 = fopen("input.txt", "w");
  fputs("to write a good program is very time consuming job", fp1);
  fclose(fp1);

  fp1 = fopen("input.txt", "r");
  fp2 = fopen("output.txt", "w");
  fseek(fp1, 0, SEEK_END);
  n = ftell(fp1);

  i = 0;
  while (i < n)
  {
    i++;
    fseek(fp1, -i, SEEK_END);
    ch = fgetc(fp1);
    putc(ch, fp2);
    printf("%c", ch);
  }
  fclose(fp1);
  fclose(fp2);

  return 0;
}
