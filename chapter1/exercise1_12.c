/* 
 * Write a program that prints its input one word per line.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 21). Pearson Education. Kindle Edition. 
 */
#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
  int c, state;
  
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
    } else if (state == OUT) {
      state = IN;
      putchar(c);
    } else
      putchar(c);
  }
}
