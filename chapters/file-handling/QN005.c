/**
 * Write a program to reset the cursor to the beginning of the file.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = fopen("text.txt", "r");

  if (fp == NULL)
  {
    printf("Error!\nCannot open the file.\n");
    exit(0);
  }

  rewind(fp); // no way to check if rewind is successful

  return 0;
}
