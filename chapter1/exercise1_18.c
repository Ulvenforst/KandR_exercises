/*
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 31). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);

int main() {
  int len;    /* current line length */
  char line[MAXLINE];     /* current input line */

  while ((len = get_line(line, MAXLINE)) > 0) {
    printf("%s", line);
  }

  return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
  int c, i, j, s_index, sc;

  sc = 0;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ') ++sc;
    else if (c != ' ') {
      s_index = i - sc;
      for (j = s_index; j < s_index + sc; ++j)
        s[j] = '*';
      s[i] = c;
      sc = 0;
    }
  }
  if (c == '\n') {
    if ((i - sc) != 0) s[i - sc] = c;
    else s[0] = '\b';
    ++i;
  }
  s[i - sc] = '\0';
  
  return i;
}
