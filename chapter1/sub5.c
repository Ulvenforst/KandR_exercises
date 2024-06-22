#include <stdio.h>

#define IN  1
#define OUT 0

/* 
 * Character Input and Output
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 15). Pearson Education. Kindle Edition.
 */
int main(){
  /* sub 1: File Copying */
  int c, nl; /* sub 3: Line Counting (nl) */
  int nw, state; /* sub 4: Word Counting */
  double nc; /* sub 2: Character Counting */

  nl = nw = 0;
  state = OUT;

  for(nc = 0; (c = getchar()) != EOF; ++nc){
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }

    putchar(c);
  }

  printf("nc: %.0f\nnl: %d\nnw: %d\n", nc, nl, nw);
}
