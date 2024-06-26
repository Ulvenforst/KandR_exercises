/*
 * How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 21). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define IN  1
#define OUT 0

int main(){
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  /* There are no bugs in this program. */
  printf("\nnl: %d\nnw: %d\nnc: %d\n", nl, nw, nc);
}
