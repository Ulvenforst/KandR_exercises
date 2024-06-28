/*
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 34). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define TABSTOP 8

int get_line(char line[], int limit);
void copy(char to[], char from[], int index_to, int index_from);
void detab(char line[]);

int main() {
  char line[MAXLINE];
  int limit = MAXLINE;

  while (get_line(line, limit) > 0) {
    detab(line);
    printf("%s", line);
  }

  return 0;
}

/* deta: given a string line, it replaces tabs with the proper number of blanks */
void detab(char line[]) {
  char buff[MAXLINE];
  for(int i = 0; line[i] != '\0'; ++i) {
    if (line[i] == '\t') {
      int num_tabs = TABSTOP - i % TABSTOP;
      copy(buff, line, 0, i);
      for (int j = 0; j < num_tabs; ++j) {
        line[i] = '*';
        ++i;
      }
      copy(line, buff, i, -1);
      --i;
    }
  }
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

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[], int j, int i) {
  ++i;
  while ((to[j] = from[i]) != '\0'){
    ++i;
    ++j;
  }
}
