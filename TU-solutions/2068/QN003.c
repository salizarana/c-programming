/**
 * Write a program to accept two numbers and sort them using pointer.
 */

#include <stdio.h>

int main()
{
  int a[2], i, j, temp;

  printf("Enter numbers: \n");
  for (i = 0; i < 2; i++)
  {
    scanf("%d", (a + i));
  }

  for (i = 0; i < 2; i++)
  {
    for (j = i + 1; j < 2; j++)
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
  for (i = 0; i < 2; i++)
  {
    printf("%d\n", *(a + i));
  }

  return 0;
}
