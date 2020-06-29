/**
 * Write a function that is passed an array of n pointers to the maximum
 * of the n floats.
 */

#include <stdio.h>

void max(float *p, int n)
{
  int i;
  float m;

  m = *(p + 0);
  for (i = 0; i < n; i++)
  {
    if (*(p + i) > m)
    {
      m = *(p + i);
    }
  }

  printf("Maximum = %f", m);
}

int main()
{

  int i, n;
  float num[100];

  printf("Enter array size: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%f", &num[i]);
  }
  max(num, n);

  return 0;
}
