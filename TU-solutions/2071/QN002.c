/**
 * Write a program to accept 10 numbers and sort them using pointer.
 */

#include <stdio.h>

int main()
{
  int a[10], i, j, temp;

  printf("Enter numbers: \n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", (a + i));
  }

  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (*(a + i) > *(a + j))
      {
        temp = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = temp;
      }
    }
  }
  printf("\nThe elements in the array after sorting: \n");
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", *(a + i));
  }
  printf("\n");

  return 0;
}
