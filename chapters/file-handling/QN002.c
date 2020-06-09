/**
 * Write a program to append additional text to the file from QN001.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fptr;
  char str, str1;
  char fname[20];

  printf("Input the file name to be opened : ");
  scanf("%s", fname);
  fptr = fopen(fname, "a");

  printf("The text are : \n");
  while ((str = getchar()) != EOF)
  {
    putc(str, fptr);
  }
  fclose(fptr);

  fptr = fopen(fname, "r");
  printf("\nThe content of the file %s is  :\n", fname);
  str1 = fgetc(fptr);
  while (str1 != EOF)
  {
    printf("%c", str1);
    str1 = fgetc(fptr);
  }
  fclose(fptr);

  return 0;
}
