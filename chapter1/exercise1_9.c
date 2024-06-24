/* 
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 20). Pearson Education. Kindle Edition. 
 */
#include <stdio.h>

int main(){
  int c, lc;
  lc = 0;

  while((c = getchar()) != EOF){
    if (c != ' ' || lc != ' ')
      putchar(c);
    lc = c;
  }
}
