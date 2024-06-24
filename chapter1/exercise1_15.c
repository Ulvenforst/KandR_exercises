/*
 * Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 27). Pearson Education. Kindle Edition. 
 */
#include <stdio.h>

float fahr_to_celsius(float fahr);

int main() {
  float fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;
  
  fahr = lower;
  while(fahr <= upper) {
    printf("%3.0f%6.1f\n", fahr, fahr_to_celsius(fahr));
    fahr += step;
  }
}

/* fahr_to_celsius: given a fahr measure it returns its respective celsius conversion */
float fahr_to_celsius(float fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
}
