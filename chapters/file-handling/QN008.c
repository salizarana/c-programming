/**
 * Write a program to input n numbers from user and store them in ascending order.
 */

#include <stdio.h>

void ascendingOrder(int number[], int n)
{
  int temp, i, j, k;

  for (j = 0; j < n; j++)
  {
    for (k = j + 1; k < n; k++)
    {
      if (number[j] > number[k])
      {
        temp = number[j];
        number[j] = number[k];
        number[k] = temp;
      }
    }
  }
  printf("Numbers in ascending order:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", number[i]);
}

int main()
{
  FILE *fptr;
  int number[100], n, i;

  printf("Enter the size of elements:\n");
  scanf("%d", &n);
  printf("Enter numbers:\n");
  fptr = fopen("Numbers", "w");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
    putw(number[i], fptr);
  }
  fclose(fptr);

  fptr = fopen("Numbers", "r");
  ascendingOrder(number, n);
  fclose(fptr);

  return 0;
}
