/**
 * Example of structure with pointer.
 */

#include <stdio.h>

struct Student
{
  int roll;
  int age;
  char *name;
};

int main()
{
  struct Student student;
  struct Student *ptr = &student;

  ptr->roll = 4;
  ptr->age = 15;
  ptr->name = "Upp";

  printf("Roll: %d\nAge: %d\nName: %s\n", ptr->roll, ptr->age, ptr->name);

  return 0;
}
