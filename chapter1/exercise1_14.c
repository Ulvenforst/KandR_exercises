/* 
 * Write a program to print a histogram of the frequencies of different characters in its input.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 24). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define ABC 26

int main() {
  int c, i, j;
  int char_frequency[ABC]; // I'm just reading the alphabet, but expanding to all ASCII is the same.
  
  for (i = 0; i < ABC; ++i)
    char_frequency[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z')
      ++char_frequency[c - 'a'];
    else if (c >= 'A' && c <= 'Z' ) 
      ++char_frequency[c - 'A'];
  }

  putchar('\n');
  for (i = 0; i < ABC; ++i) {
    printf("%c | ",i + 65);
    for (j = 0; j < char_frequency[i]; ++j)
      putchar('#');
    putchar('\n');
  }

}
