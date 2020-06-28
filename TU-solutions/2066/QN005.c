/**
 * Make a program using structure of booklist having data members title, author,
 * and cost. Enter four data and calculate total cost.
 */

#include <stdio.h>

struct book
{
  char title[20];
  char author[20];
  int cost;
};

int main()
{
  struct book b[5];
  int i, totalCost = 0;

  printf("Enter details of book:\n");
  for (i = 0; i < 4; i++)
  {
    printf("Book %d:\n", i + 1);
    printf("Title: ");
    scanf("%s", b[i].title);
    printf("Author: ");
    scanf("%s", b[i].author);
    printf("Cost: ");
    scanf("%d", &b[i].cost);
  }

  for (i = 0; i < 4; i++)
  {
    totalCost += b[i].cost;
  }
  printf("Total cost: %d\n", totalCost);

  return 0;
}
