/*
  Modify the temperature conversion program to print a 
  heading above the table
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; // lower limit of temperature scale
  upper = 300; // upper limit
  step = 20; // step size



  printf(".-------------------.\n| Fahrenhei-Celsius |\n|\ttable\t    |\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    if( fahr == 0) 
      printf(".-------------------.\n");
    printf("|    %3.0f | %6.1f   |\n", fahr, celsius);
    fahr = fahr + step;
     if( fahr > 300) 
      printf(".-------------------.\n");
  }
}