/**
 * Write a program to print value of first member of union after first and
 * second members are assigned with different values.
 */

#include <stdio.h>

union Student {
  int roll;
  int age;
} student;

int main()
{
  student.roll = 1;
  student.age = 10;

  printf("Roll: %d\n", student.roll); // Prints the value of student.age

  return 0;
}
