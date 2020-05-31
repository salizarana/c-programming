/**
 * Write a program to print the values of members of union immediately after values are assigned to them.
 */

#include <stdio.h>

union Mobile {
  int model;
  int cost;
} mobile;

int main()
{
  mobile.model = 111;
  printf("Model: %d\n", mobile.model);

  mobile.cost = 10000;
  printf("Cost: %d\n", mobile.cost);

  return 0;
}
