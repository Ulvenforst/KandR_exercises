#include <stdio.h>

/* 
 * Character Input and Output
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 15). Pearson Education. Kindle Edition.
 */
int main(){
  /* sub 1: File Copying */
  int c, nl; /* sub 3: Line Counting (nl) */
  double nc; /* sub 2: Character Counting */
  nl = 0;
  for(nc = 0; (c = getchar()) != EOF; ++nc){
    if(c == '\n'){++nl;}
    putchar(c);
  }
  printf("nc: %.0f\n", nc);
  printf("nl: %d\n", nl);
}
