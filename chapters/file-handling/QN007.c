/**
 * Write a program to keep records of n students into the file and display 
 * the information reading from file.
 */

#include <stdio.h>

int main()
{
  FILE *f;
  char name[10], grade;
  int roll, age, n, i;

  printf("Enter the number of students:\n");
  scanf("%d", &n);
  printf("Enter name, roll, age and grade of students:\n");
  f = fopen("Student", "w");
  for (i = 0; i < n; i++)
  {
    fscanf(stdin, "%s %d %d %c", name, &roll, &age, &grade);
  }
  fclose(f);

  f = fopen("Student", "r");
  for (i = 0; i < n; i++)
    fprintf(stdout, "Name:%s\nRoll:%d\nAge:%d\nGrade:%c\n", name, roll, age, grade);
  fclose(f);

  return 0;
}
