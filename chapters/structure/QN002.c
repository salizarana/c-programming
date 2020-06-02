/**
 * Write a program to print the information of student without structure name.
 */

#include <stdio.h>

struct
{
  char name[50];
  int roll;
  int age;
  char grade;
} s;

int main()
{

  printf("Enter name, roll, age, grade:\n");
  scanf("%c%s%d%d", &s.grade, &s.name, &s.roll, &s.age);

  printf("%c\n%s\n%d\n%d\n", s.grade, s.name, s.roll, s.age);

  return 0;
}
