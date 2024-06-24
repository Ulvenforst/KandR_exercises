/*
 * Verify that the expression getchar() != EOF is 0 or 1.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 17). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

int main(){
  /* Prints false (0) when CTRL + D, in Linux, is pressed */
  printf("%d\n", getchar() != EOF); 
}
