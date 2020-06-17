/**
 * Create a structure student having data members name, roll-number and percentage.
 * Complete the program to display the name of the student having percentage greater
 * than or equal to 60.
 */

#include <stdio.h>

struct Student
{
  char name[20];
  int roll;
  float percentage;
};

int main()
{
  struct Student s[100];
  int n, i;

  printf("Enter the number of students: ");
  scanf("%d", &n);
  printf("Details of student:\n");
  for (i = 0; i < n; i++)
  {
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Roll: ");
    scanf("%d", &s[i].roll);
    printf("Percantage: ");
    scanf("%f", &s[i].percentage);
    printf("\n");
  }

  printf("Name of student having percentage greater or equal to 60:\n");
  for (i = 0; i < n; i++)
  {
    if (s[i].percentage >= 60)
      printf("%s\n", s[i].name);
  }

  return 0;
}
