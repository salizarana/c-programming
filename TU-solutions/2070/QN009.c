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

  struct Student s[10];

  printf("Enter the details of student:\n");
  fp = fopen("RECORD.txt", "w");
  for (i = 0; i < 10; i++)
  {
    printf("Name:\n");
    scanf("%s", s[i].name);
    printf("Roll:\n");
    scanf("%d", &s[i].roll);
    printf("Percentage:\n");
    scanf("%d", &s[i].percentage);
    fprintf(fp, "%s %d %d", s[i].name, s[i].roll, s[i].percentage);
  }
  fclose(fp);
  printf("Information stored.\n");

  return 0;
}
