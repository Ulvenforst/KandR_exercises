#include <stdio.h>

/* 
 * Write a program to count blanks, tabs, and newlines.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 20). Pearson Education. Kindle Edition. 
 */
int main(){
  int c, blanks, tabs, nl;

  blanks = 0;
  tabs   = 0;
  nl     = 0;

  while((c = getchar()) != EOF){
    if (c == ' '){++blanks;}
    else if (c == '\t'){++tabs;}
    else if (c == '\n'){++nl;}
  }

  printf("\nblanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, nl);
}
