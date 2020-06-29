/**
 * Define a structure of employee having data members name, address, age
 * and salary. Take data for n employee in an array dynamically and find
 * the average salary.
 */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
  char name[20];
  char address[20];
  int age;
  int salary;
};

int main()
{
  int i, n;
  float total = 0, average;
  struct Employee *e;

  printf("Enter the total number of employee: ");
  scanf("%d", &n);

  e = (struct Employee *)malloc(n * sizeof(struct Employee));
  printf("Enter details of employee:\n");
  for (i = 0; i < n; i++)
  {
    printf("Name: ");
    scanf("%s", &(e + i)->name);
    printf("Address: ");
    scanf("%s", &(e + i)->address);
    printf("Age: ");
    scanf("%d", &(e + i)->age);
    printf("Salary: ");
    scanf("%d", &(e + i)->salary);
    printf("\n");

    total += (e + i)->salary;
  }
  average = total / n;

  printf("Average salary: %.2f\n", average);
  free(e);

  return 0;
}
