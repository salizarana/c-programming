/**
 * Write a program to display current cursor position in the file.
 */

#include <stdio.h>

int main()
{
  FILE *fp;
  fp = fopen("text.txt", "r");

  // Moving pointer to end
  fseek(fp, 0, SEEK_END);

  // Printing position of pointer
  printf("%ld\n", ftell(fp));

  return 0;
}
