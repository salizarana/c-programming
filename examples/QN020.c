/**
 * Write a program to read any month number in integer and display the number of days for this month.
 */

#include <stdio.h>

int main()
{
  int no;

  printf("Enter any month number :");
  scanf("%d", &no);
  switch (no)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("This month have 31 days. \n");
    break;
  case 2:
    printf("The 2nd month is a February and have 28 days.\nIn leap year, the February month  Have 29 days.\n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("Month have 30 days. \n");
    break;
  default:
    printf("invalid Month number.\nPlease try again ....\n");
    break;
  }

  return 0;
}
