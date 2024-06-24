/*
 * Write a program to print all input lines that are longer than 80 characters.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 31). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE   1000 /* maximum input line size */
#define LONGLINE  80   /* Lines whose size are greater are going to be printed */

int get_line(char line[], int maxline);

/* Prints lines whose size is grater than 80 */
int main() {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > LONGLINE) printf("%s", line);

  return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}
