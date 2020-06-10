/**
 * Write a program to write n numbers into the file from user input. Also,
 * read the numbers from that file and write them to even and odd file respectively.
 */

#include <stdio.h>

int main()
{
  FILE *f1, *f2, *f3;
  int num, n, i;

  printf("Enter the size of number:\n");
  scanf("%d", &n);
  printf("Enter numbers:\n");
  f1 = fopen("Number", "w");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num);
    putw(num, f1);
  }
  fclose(f1);

  f1 = fopen("Number", "r");
  f2 = fopen("Even", "w");
  f3 = fopen("Odd", "w");
  while ((num = getw(f1)) != EOF)
  {
    if (num % 2 == 0)
      putw(num, f2);
    else
      putw(num, f3);
  }
  fclose(f1);
  fclose(f2);
  fclose(f3);

  f2 = fopen("Even", "r");
  f3 = fopen("Odd", "r");
  printf("Contents of Even file:\n");
  while ((num = getw(f2)) != EOF)
    printf("%d\n", num);
  printf("Contents of Odd file:\n");
  while ((num = getw(f3)) != EOF)
    printf("%d\n", num);
  fclose(f2);
  fclose(f3);

  return 0;
}
