/**
 * Write a program to dynamically allocate memory to store a string and reallocate with higher 
 * storage size and assign lengthier string and print both values before and after reallocation.
 * Also free up the allocated memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUll 0

int main()
{
  char *string;

  string = (char *)malloc(4 * sizeof(char));
  if (string == NULL)
  {
    printf("Memory allocation failed\n");
    exit(0);
  }

  printf("String of size %ld created.\n", sizeof(string));
  strcpy(string, "Lele");
  printf("String contains %s.\n", string);

  string = realloc(string, 1 * sizeof(char));
  if (string == NULL)
  {
    printf("Memory reallocation failed\n");
    exit(0);
  }

  printf("String size is modified.\n");
  printf("String still contains %s.\n", string);
  strcpy(string, "Lalitpur");
  printf("String now contains %s.\n", string);

  free(string);

  return 0;
}
