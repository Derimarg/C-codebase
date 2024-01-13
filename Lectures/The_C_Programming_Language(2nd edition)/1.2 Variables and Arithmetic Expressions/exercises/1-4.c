/*
  Write a program to print the corresponding Celsius to Fahrenheit table.
  The formula for converting Celsius to Fahrenheit  is F = C*(9/5) + 3)
*/

#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; // lower limit of temperature scale
  upper = 300; // upper limit
  step = 20; // step size

  celsius = lower;

  printf("");
  while (celsius <= upper) {
    fahr = (celsius*(9.0/5.0)) + 32.0;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}