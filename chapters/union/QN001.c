/**
 * Write a program to show the memory occupied by structure and union 
 * variables having identical members.
 */

#include <stdio.h>

struct Student
{
  char name[20];
  int roll;
  int age;
} structStudent;

union Student1 {
  char name[20];
  int roll;
  int age;
} unionStudent;

int main()
{
  printf("Size of structure: %ld\n", sizeof(structStudent));
  printf("Size of union: %ld\n", sizeof(unionStudent));

  return 0;
}
