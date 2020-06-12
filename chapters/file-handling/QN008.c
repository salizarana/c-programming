/**
 * Write a program to input n numbers from user and store them in ascending order.
 */

#include <stdio.h>

void ascendingOrder(int number[], int n)
{
  int temp, j, k;

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
}

int main()
{
  FILE *fptr;
  int number[100], n, i;

  printf("Enter the size of elements:\n");
  scanf("%d", &n);
  printf("Enter numbers:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
  }

  fptr = fopen("Numbers.bin", "w");
  fprintf(fptr, "Array before sorting:\n");
  for (i = 0; i < n; i++)
  {
    fprintf(fptr, "%d", number[i]);
    printf("%d", number[i]);
    printf("\n");
  }

  ascendingOrder(number, n);

  fprintf(fptr, "\nArray after sorting:\n");
  for (i = 0; i < n; i++)
  {
    fprintf(fptr, "%d", number[i]);
    printf("%d", number[i]);
    printf("\n");
  }
  fclose(fptr);

  return 0;
}
