/**
 * Write a program to create a file "RECORD.txt" then store roll no.,
 * name and percentage of 10 students.
 */

#include <stdio.h>

struct Student
{
  char name[20];
  int roll;
  int percentage;
};

int main()
{
  FILE *fp;
  int i;

  struct Student s;

  printf("Enter the details of student:\n");
  fp = fopen("RECORD.txt", "w");
  for (i = 0; i < 10; i++)
  {
    printf("Name:\n");
    scanf("%s", s.name);
    printf("Roll:\n");
    scanf("%d", &s.roll);
    printf("Percentage:\n");
    scanf("%d", &s.percentage);
    fprintf(fp, "%s %d %d", s.name, s.roll, s.percentage);
  }
  fclose(fp);
  printf("Information stored.\n");

  return 0;
}
