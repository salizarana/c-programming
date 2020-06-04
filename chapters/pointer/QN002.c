/**
 * Arithmetic operations using pointer.
 */

#include <stdio.h>

int main()
{
  float num1, num2, result;
  float *ptr1, *ptr2;

  ptr1 = &num1;
  ptr2 = &num2;

  printf("Enter any two real numbers: ");
  scanf("%f%f", ptr1, ptr2);

  result = (*ptr1) + (*ptr2);
  printf("Sum = %.2f\n", result);

  result = (*ptr1) - (*ptr2);
  printf("Difference = %.2f\n", result);

  result = (*ptr1) * (*ptr2);
  printf("Product = %.2f\n", result);

  result = (*ptr1) / (*ptr2);
  printf("Quotient = %.2f\n", result);

  return 0;
}
