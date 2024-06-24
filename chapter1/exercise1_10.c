/* 
 * Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
 *
 * W., Kernighan Brian; Ritchie Dennis. C Programming Language (p. 20). Pearson Education. Kindle Edition. 
 */
#include <stdio.h>

int main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == '\t')
      printf("\\t");
    else if(c == '\b')
      printf("\\b");
    else if(c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}
