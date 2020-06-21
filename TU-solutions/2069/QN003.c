/**
 * Write a program to accept record of 15 person which includes name, age and
 * address and also display them.
 */

#include <stdio.h>

struct Record
{
  char name[150];
  char address[150];
  int age;
};

int main()
{
  struct Record r[15];
  int i;

  printf("Enter details:");
  for (i = 0; i < 15; i++)
  {
    printf("\nName: ");
    scanf("%s", r[i].name);
    printf("Address: ");
    scanf("%s", r[i].address);
    printf("Age: ");
    scanf("%d", &r[i].age);
  }

  printf("\nDisplaying details:");
  for (i = 0; i < 15; i++)
  {
    printf("\nName: %s\n", r[i].name);
    printf("Address: %s\n", r[i].address);
    printf("Age: %d\n", r[i].age);
  }

  return 0;
}
