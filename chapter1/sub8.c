/*
 * Arguments—Call by Value
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 27). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

int power(int base, int n);

int main() {
  return 0;
}

/* power:  raise base to n-th power; n>=0; version 2 */
int power(int base, int n) {
  int p;

  for (p = 1; n > 0; --n)
    p = p * base;
  
  return p;
}
