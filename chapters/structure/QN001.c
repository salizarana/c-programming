/**
 * Write a program to print the information of student using structure.
 */

#include <stdio.h>

struct student
{
  char name[50];
  int roll;
  int age;
  char grade;
} s;

int main()
{

  printf("Enter name, roll, age, grade:\n");
  scanf("%s%d%d%s", &s.name, &s.roll, &s.age, &s.grade);

  printf("%s\n%d\n%d\n%s", s.name, s.roll, s.age, s.grade);

  return 0;
}
