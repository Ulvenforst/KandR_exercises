/*
 * Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 31). Pearson Education. Kindle Edition.
 */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
int rm_trailing_blanks(char line[], int len);
void reverse(char line[], int len);

int main() {
  int len;                /* current line length */
  char line[MAXLINE];     /* current input line  */

  while ((len = get_line(line, MAXLINE)) > 0) {
    len = rm_trailing_blanks(line, len);
    reverse(line, len);
    printf("%s", line);
  }

  return 0;
}

/* reverse: given a string and its length, it reverses it */
void reverse(char line[], int len) {
  int counter, buff;
  for (counter = 0; counter < len - 2; ++counter){
    buff = line[counter];
    line[counter] = line[len-2];
    line[len - 2] = buff;
    --len;
  }
}

/* rm_trailing_blanks: removes trailing blanks from a string, returns new size */
int rm_trailing_blanks(char s[], int len) {
  int ni; // New index
  for (ni = len - 1; s[ni] == ' ' || s[ni] == '\t' || s[ni] == '\n'; --ni);
  if (ni != -1) {
    s[ni + 1] = '\n';
    ++ni;
  }
  s[ni + 1] = '\0';
  return ni + 1;
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
