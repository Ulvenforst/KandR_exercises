#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX 10

/*
 * Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 24). Pearson Education. Kindle Edition.
 */
int main() {
  int c, state, length, i, j;
  int lengths[MAX];

  state = OUT;
  length = 0;
  for (i = 0; i < MAX; ++i)
    lengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        ++lengths[length + 1];
        state = OUT;
      }
      length = 0;
    } else if (state == OUT)
      state = IN;
    else
      ++length;
  }
  if (length > 0)
    ++lengths[length + 1];

  putchar('\n');
  for (i = 1; i < MAX; ++i) {
    printf("%d | ", i);
    for (j = 0; j < lengths[i]; ++j)
      putchar('#');
    putchar('\n');
  }
}
