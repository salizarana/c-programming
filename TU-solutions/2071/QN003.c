/**
 * Write a program to read the data file which has name, age, test player and total run.
 */

#include <stdio.h>

struct Player
{
  char name[20];
  int playerRanking;
  int age;
  int totalRun;
};
int main()
{
  FILE *fp;
  int i, n;

  printf("Enter the total number of player: ");
  scanf("%d", &n);

  struct Player p[n];

  printf("Enter details:\n");
  fp = fopen("Details.bin", "w");
  for (i = 0; i < n; i++)
  {
    printf("Name: ");
    scanf("%s", p[i].name);
    printf("Test player ranking: ");
    scanf("%d", &p[i].playerRanking);
    printf("Age: ");
    scanf("%d", &p[i].age);
    printf("Total run: ");
    scanf("%d", &p[i].totalRun);
    fprintf(fp, "%s %d %d %d", p[i].name, p[i].playerRanking, p[i].age, p[i].totalRun);
  }
  fclose(fp);

  fp = fopen("Details.bin", "r");
  printf("\nDisplaying information:\n");
  for (i = 0; i < n; i++)
  {
    fscanf(fp, "%s %d %d %d", p[i].name, &p[i].playerRanking, &p[i].age, &p[i].totalRun);
    printf("\nName: %s\nPlayer ranking: %d\nAge: %d\nTotal run: %d\n", p[i].name, p[i].playerRanking, p[i].age, p[i].totalRun);
  }
  fclose(fp);

  return 0;
}
