/*
 * External Variables and Scope
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 31). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */

// Definitions; storage is assigned.
int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */

int get_line(void);
void copy(void);

/* print longest input line; specialized version */
int main() {
  int len;
  // Declaration; nature of the variable is stated but no storage is allocated.
  extern int max; // Since everything is in the same file, there's no need for "extern" declaration.
  extern char longest[];  /* longest line saved here */

  max = 0;
  while ((len = get_line()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }

  if (max > 0)  /* there was a line */
    printf("%s", longest);

  return 0;
}

/* get_line: read a line into s, return length */
int get_line(void) {
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
