/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
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

  printf("%3s%6s\n", "°C", "°F");

  celsius = 0;
  while(celsius <= upper){
    fahr = (9.0 * celsius / 5.0) + 32.0;
    printf("%3.0f%6.1f\n", celsius, fahr);
    celsius += step;
  }

}
