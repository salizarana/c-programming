/**
 * Write a program to find HCF and LCM.
 */

#include <stdio.h>

int main()
{
  int i, num1, num2, hcf;

  printf("Enter any two numbers to find HCF:\n");
  scanf("%d%d", &num1, &num2);

  for (i = 1; i <= num1 || i <= num2; i++)
  {
    /* If i is factor of both number */
    if (num1 % i == 0 && num2 % i == 0)
    {
      hcf = i;
    }
  }

  printf("HCF of %d and %d = %d\n", num1, num2, hcf);
  printf("LCM of %d and %d = %d\n", num1, num2, (num1 * num2) / hcf);

  return 0;
}
