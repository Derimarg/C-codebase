#include <stdio.h>

int main()
{
  /* copy input to output; 3st version */
  int c;

  c = (getchar() != EOF);
  while(c)
    putchar(c);
}