/*
  Modify the temperature conversion program to print the table
  in reverse order, that is, from 300 degress to 0.
*/

#include <stdio.h>

int main()
{
  int fhr;

  for( fhr = 300; fhr >= 0; fhr = fhr - 20)
    printf("%3d %6.1f\n", fhr, (5.0/9.0) * (fhr-32));
}