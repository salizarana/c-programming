/**
 * Write a program to keep records of n students into the file and display 
 * the information reading from file.
 */

#include <stdio.h>

struct Student
{
  char name[20];
  char grade[1];
  int roll;
  int age;
};

int main()
{
  FILE *fp;
  int i, n;

  printf("Enter the total number of student:\n");
  scanf("%d", &n);

  struct Student s[n];

  printf("Enter the details of student:\n");
  fp = fopen("student.bin", "w");
  for (i = 0; i < n; i++)
  {
    printf("Name:\n");
    scanf("%s", s[i].name);
    printf("Grade:\n");
    scanf("%s", s[i].grade);
    printf("Roll:\n");
    scanf("%d", &s[i].roll);
    printf("Age:\n");
    scanf("%d", &s[i].age);
    fprintf(fp, "%s %s %d %d", s[i].name, s[i].grade, s[i].roll, s[i].age);
  }
  fclose(fp);

  fp = fopen("student.bin", "r");
  printf("\nDisplaying information of all students:\n");
  for (i = 0; i < n; i++)
  {
    fscanf(fp, "%s %c %d %d", s[i].name, s[i].grade, &s[i].roll, &s[i].age);
    printf("\nName: %s", s[i].name);
    printf("\nGrade: %s", s[i].grade);
    printf("\nRoll: %d", s[i].roll);
    printf("\nAge: %d\n", s[i].age);
  }
  fclose(fp);

  return 0;
}
