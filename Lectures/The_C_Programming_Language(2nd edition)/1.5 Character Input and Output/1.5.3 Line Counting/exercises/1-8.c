// Exrcise 1-8 Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main(){
  int c,bl, tb, nl;

  bl = 0;
  tb = 0;
  nl= 0;

  while((c = getchar()) != EOF){
    if(c == ' '){
      ++bl;
    } else if(c == '\t'){
      ++tb;
    } else if(c == '\n'){
      ++nl;
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", bl, tb, nl);
  }

}