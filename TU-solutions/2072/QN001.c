/**
 * Write a program using switch statement to disply EXCELLENT, VERY GOOD. GOOD,
 * SATISFACTORY or FAIL is the user enters A, B, C, D or E respectively.
 */

#include <stdio.h>

int main()
{
  char c;

  printf("Enter any from A, B, C, D and E: ");
  scanf("%c", &c);
  switch (c)
  {
  case 'A':
    printf("EXCELLENT\n");
    break;
  case 'B':
    printf("VERY GOOD\n");
    break;
  case 'C':
    printf("GOOD\n");
    break;
  case 'D':
    printf("GOOD\n");
    break;
  case 'E':
    printf("FAIL\n");
    break;
  default:
    printf("Error!!!\nPlease enter a suitable value.\n");
  }

  return 0;
}
