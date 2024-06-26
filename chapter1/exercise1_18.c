/*
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 31). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void rm_trailing_blanks(char line[], int len);

int main() {
  int len;                /* current line length */
  char line[MAXLINE];     /* current input line  */

  while ((len = get_line(line, MAXLINE)) > 0) {
    rm_trailing_blanks(line, len);
    printf("%s", line);
  }

  return 0;
}

/* rm_trailing_blanks: removes trailing blanks from a string */
void rm_trailing_blanks(char s[], int len) {
  int ni; // New index
  for (ni = len - 1; s[ni] == ' ' || s[ni] == '\t' || s[ni] == '\n'; --ni);
  if (ni != -1) {
    s[ni + 1] = '\n';
    ++ni;
  }
  s[ni + 1] = '\0';
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
  int c, nc;
  for (nc = 0; nc < lim -1 && (c = getchar()) != EOF && c != '\n'; ++nc)
    s[nc] = c; 
  if (c == '\n') {
    s[nc] = c;
    ++nc;
  }
  s[nc] = '\0';
  return nc;
}

