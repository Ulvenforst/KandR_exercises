#include <stdio.h>

/*
 * The For Statement
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 13). Pearson Education. Kindle Edition. 
 */
int main(){
  int fahr;
  for(fahr = 0; fahr <= 300; fahr += 20)
    printf("%3d%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
