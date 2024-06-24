/* 
 * Modify the temperature conversion program to print a heading above the table.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 13). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  printf("%3s%6s\n", "°F", "°C");

  fahr = lower;
  while(fahr <= upper){
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f%6.1f\n", fahr, celsius);
    fahr += step;
  }

}
