#include <stdio.h>

int main()
{
  /* copy input to output; 2st version */
  int c;

  c = getchar();
  while((c = getchar()) != EOF)
    putchar(c);
}