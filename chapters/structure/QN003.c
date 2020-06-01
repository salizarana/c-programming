/**
 * Write a program to calculate total marks and percentage of students including their basic details.
 */

#include <stdio.h>

struct Subject
{
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int sub5;
};

struct Student
{
  char name[50];
  int roll;
  struct Subject subject;
} student[5];

int main()
{
  int i, total, subject;
  float percent;

  printf("Enter details of student: \n");

  for (i = 0; i < 6; i++)
  {
    printf("Name of student: \n");
    scanf("%s", &student[i].name);
    printf("Roll:\n");
    scanf("%d", &student[i].roll);

    printf("Sub1: \n");
    scanf("%d", &student[i].subject.sub1);
    printf("Sub2: \n");
    scanf("%d", &student[i].subject.sub2);
    printf("Sub3: \n");
    scanf("%d", &student[i].subject.sub3);
    printf("Sub4: \n");
    scanf("%d", &student[i].subject.sub4);
    printf("Sub5: \n");
    scanf("%d", &student[i].subject.sub5);

    total = student[i].subject.sub1 + student[i].subject.sub2 + student[i].subject.sub3 + student[i].subject.sub4 + student[i].subject.sub5;
    printf("Total: %d\n", total);

    percent = total / (float)500 * 100;
    printf("Percentage: %.2f\n", percent);
  }

  return 0;
}
