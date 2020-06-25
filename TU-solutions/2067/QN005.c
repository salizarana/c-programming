/**
 * Define a structure of student having data members name, address, marks in
 * C language and marks in information system. Take data for n students in an
 * array dynamically and find the total marks obtained.
 */

#include <stdio.h>
#include <stdlib.h>

struct Student
{
  char name[20];
  char address[20];
  int cLanguage;
  int informationSystem;
};

int main()
{
  int i, n, totalMarks;
  struct Student *std;

  printf("Enter the number of records:\n");
  scanf("%d", &n);

  std = (struct Student *)malloc(n * sizeof(struct Student));
  printf("Enter the details of student:\n");
  for (i = 0; i < n; i++)
  {
    printf("Name:\n");
    scanf("%s", &(std + i)->name);
    printf("Address:\n");
    scanf("%s", &(std + i)->address);
    printf("Marks of c-language:\n");
    scanf("%d", &(std + i)->cLanguage);
    printf("Marks of Information System:\n");
    scanf("%d", &(std + i)->informationSystem);

    totalMarks = (std + i)->cLanguage + (std + i)->informationSystem;
    printf("Total marks: %d\n", totalMarks);
  }
  free(std);

  return 0;
}
