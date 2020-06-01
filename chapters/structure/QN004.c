/**
 * Structure example using typedef keyword.
 */

#include <stdio.h>

typedef struct Student
{
  int roll;
  int age;
} st;

int main()
{
  st s1, s2;

  s1.roll = 1;
  s1.age = 9;
  s2.roll = 2;
  s2.age = 10;

  printf("First Student\nRoll: %d\nAge = %d\n", s1.roll, s1.age);
  printf("Second Student\nRoll: %d\nAge: %d\n", s2.roll, s2.age);

  return 0;
}
