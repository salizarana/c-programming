/**
 * Write a program to read the marks of four subjects then find total,
 * percentage and division according to given condition.
 * Percentage               Division
 * p >= 80                  Distinction
 * 80 > p >= 70             First Division
 * 70 > p >= 50             Second Division
 * 50 > p >= 40             Third Division
 * Otherwise                Fail
 * Assume each subject carrying 100 full marks and student must secure greater
 * or equal to each 40 in each subject for division.
 */

#include <stdio.h>

int main()
{
  int sub1, sub2, sub3, sub4, total;
  float percentage;

  printf("Enter marks of four subjects:\n");
  scanf("%d%d%d%d", &sub1, &sub2, &sub3, &sub4);

  total = sub1 + sub2 + sub3 + sub4;
  percentage = total / (float)400 * 100;

  printf("Total marks: %d\n", total);
  printf("Percentage: %.2f\n", percentage);

  if (sub1 < 40 || sub2 < 40 || sub3 < 40 || sub4 < 40)
  {
    printf("Fail\n");
  }
  else
  {
    if (percentage >= 80)
      printf("Distinction\n");
    else if (80 > percentage && percentage >= 70)
      printf("First Division\n");
    else if (70 > percentage && percentage >= 50)
      printf("Second Division\n");
    else if (50 > percentage && percentage >= 40)
      printf("Third Division\n");
  }

  return 0;
}
