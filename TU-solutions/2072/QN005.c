/**
 * Write a program to read all numbers from the input file "values.dat" and
 * store only even numbers in an output file named as "result.res".
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1, *f2;
  int num, n, i;

  printf("Enter the size of number:\n");
  scanf("%d", &n);
  printf("Enter numbers:\n");
  f1 = fopen("values.dat", "w");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num);
    putw(num, f1);
  }
  fclose(f1);

  f1 = fopen("values.dat", "r");
  f2 = fopen("result.res", "w");
  while ((num = getw(f1)) != EOF)
  {
    if (num % 2 == 0)
      putw(num, f2);
  }
  fclose(f1);
  fclose(f2);

  f2 = fopen("result.res", "r");
  printf("Contents of Even file:\n");
  while ((num = getw(f2)) != EOF)
    printf("%d\n", num);
  fclose(f2);

  return 0;
}
