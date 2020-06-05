/**
 * Write a program to calculate exam percentage of n students using dynamic memory 
 * allocation, function and structure. Also, free up the allocated space.
 */

#include <stdio.h>
#include <stdlib.h>

struct Subject
{
  int c_programming;
  int iit;
  int dl;
  int physics;
  int math;
};

struct Student
{
  char name[50];
  int roll;
  struct Subject sub;
  int total;
};

int getTotal(struct Subject sub)
{
  return sub.c_programming + sub.iit + sub.dl + sub.physics + sub.math;
}

int main()
{
  int i, n;
  float percent;
  struct Student *std;

  printf("Enter the number of records:\n");
  scanf("%d", &n);

  std = (struct Student *)malloc(n * sizeof(struct Student));
  printf("Enter the details of student:\n");
  for (i = 0; i < n; i++)
  {
    printf("Name:\n");
    scanf("%s", &(std + i)->name);
    printf("Roll:\n");
    scanf("%d", &(std + i)->roll);
    printf("Enter marks of each subject:\n");
    printf("C-programming:\n");
    scanf("%d", &(std + i)->sub.c_programming);
    printf("IIT:\n");
    scanf("%d", &(std + i)->sub.iit);
    printf("DL:\n");
    scanf("%d", &(std + i)->sub.dl);
    printf("Physics:\n");
    scanf("%d", &(std + i)->sub.physics);
    printf("Maths:\n");
    scanf("%d", &(std + i)->sub.math);

    (std + i)->total = getTotal((std + i)->sub);
    percent = (std + i)->total / (float)500 * 100;
  }

  printf("\nDetails of student\n");
  for (i = 0; i < n; i++)
  {
    printf("Name: %s\n", (std + i)->name);
    printf("Roll: %d\n", (std + i)->roll);
    printf("C-programming: %d\n", (std + i)->sub.c_programming);
    printf("IIT: %d\n", (std + i)->sub.iit);
    printf("DL: %d\n", (std + i)->sub.dl);
    printf("Physics: %d\n", (std + i)->sub.physics);
    printf("Math: %d\n", (std + i)->sub.math);
    printf("Total marks:%d\n", (std + i)->total);
    printf("Percentage: %.2f\n", percent);
  }
  free(std);

  return 0;
}
