/**
 * Write a function that uses pointers to search for the address of a given 
 * integer in a given array. If the given integer is found, the function 
 * returns its address, otherwise it returns NULL.
 */

#include <stdio.h>

int toSearch(int num[], int searchedNumber, int n);

int main()
{
  int i, n, num[50], search, address;

  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
  }

  printf("Enter element to search: ");
  scanf("%d", &search);

  address = toSearch(num, search, n);

  if (address == -1)
    printf("Searched element not found.\n");
  else
    printf("Address of searched number %d is %d.\n", search, address);

  return 0;
}

int toSearch(int num[], int searchedNumber, int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    if (*(num + i) == searchedNumber)
    {

      return (long)(num + i);
    }
  }

  return -1;
}
