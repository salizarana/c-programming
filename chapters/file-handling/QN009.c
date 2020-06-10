/**
 * Write a program to store 10 friends name and find your bestfriend name if exist.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *fptr;
  int i;
  char ch[20], ch1[20];

  fptr = fopen("Names.txt", "w");
  printf("Enter names:\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%s", ch);
    fprintf(fptr, "%s ", ch);
  }
  fclose(fptr);

  printf("Enter you bestfriend name:\n");
  scanf("%s", ch1);

  fptr = fopen("Names.txt", "r");
  while ((fscanf(fptr, "%s", ch)) != EOF)
  {
    if ((strcmp(ch, ch1)) == 0)
    {
      printf("Found your besfriend: %s\n", ch1);
      exit(0);
    }
  }
  printf("Not found\n");
  fclose(fptr);

  return 0;
}
