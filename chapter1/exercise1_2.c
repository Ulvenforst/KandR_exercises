#include <stdio.h>

/*
 * Experiment to find out what happens when printf’s argument string contains \c, where c is some character not listed above.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 8). Pearson Education. Kindle Edition.
 */
int main() {
  printf("Hello,\tworld!\n");
  printf("Hello,\bworld!\n"); // Removes last char.
}
