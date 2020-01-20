/**
 * Write a program to convert degree celcius into fahrenheit.
 */

#include <stdio.h>

int main()
{
  float celcius, fahrenheit;

  printf("Enter temperature in celcius: ");
  scanf("%f", &celcius);

  fahrenheit = (celcius * 9 / 5) + 32;

  printf("%f Celcius = %.2f Fahrenheit\n", celcius, fahrenheit);

  return 0;
}
