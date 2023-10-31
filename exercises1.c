#include <math.h>
#include <stdio.h>

// Chapter 1.
#define LOWER 0
#define UPPER 300
#define STEP 20
#define IN 1
#define OUT 0
#define ASCII_SIZE 127
#define ASCII_START 32
#define MAXLINE 100

// Function prototypes
float conversion(float fahr);
int getliner(char line[], int maxline); /* Use liner to avoid conflicts */
void copier(char to[], char from[]);
int getliner_v2(char line[], int maxline); /* Use liner to avoid conflicts */
void reverser(char string[], int len);

int main(){
  //printf("Chapter 1, temperature program.\n\n");

  //int fahr;
  //// Header
  //printf("%3s%6s\n", "Fahr", "Cels");
  //for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
  //  printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  //}

  //// Exercise 1-5.
  //printf("\nExercise 1-5\n");
  //for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
  //  printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  //}

  //// Copy input to output; 2nd version.
  //printf("\n\nChapter 1, Copy input to output.\n");
  //int c;
  //while ((c = getchar()) != EOF) {
  //  putchar(c);
  //}

  //// Exercise 1-7.
  //printf("EOF: %d\n", EOF);

  //// Count charcters in input; 2nd version.
  //printf("\n\nChapter 1, Count charcters in input.\n");
  //double nc;
  //for (nc = 0; getchar() != EOF; ++nc);
  //printf("%.0f\n", nc);

  //// Exercise 1-8.
  //int nb = 0, nt = 0, nl = 0, nc = 0;
  //while ((nc = getchar()) != EOF){
  //  (nc == ' ') ? ++nb : (nc == '\t') ? ++nt : (nc == '\n') ? ++nl: 0;
  //}
  //printf("NB: %d\nNT: %d\nNL: %d\n", nb, nt, nl);

  //// Exercise 1-9.
  //int nb = 0, nc = 0;
  //while ((nc = getchar()) != EOF){
  //  nb = (nc == ' ') ? ++nb : 0;
  //  nc = (nb > 1 && nc == ' ') ? 0 : nc;
  //  putchar(nc);
  //}

  //// Exercise 1-10.
  //int nc = 0;
  //while ((nc = getchar()) != EOF){
  //  (nc == '\t') ? printf("\\t") :
  //  (nc == ' ') ? printf("\\b") :
  //  (nc == '\\') ? printf("\\\\") : putchar(nc);
  //}
  
  // Count lines, words, and characters in input.
  //int c, nl, nw, nc, state;
  //state = OUT;
  //nl = nw = nc = 0;
  //while ((c = getchar()) != EOF) {
  //  ++nc;
  //  if (c == '\n') {
  //    ++nl;
  //  }
  //  if (c == ' ' || c == '\n' || c == '\t'){
  //    state = OUT;
  //  } else if (state == OUT) {
  //    state = IN;
  //    ++nw;
  //  }
  //}

  // Exercise 1-11
  /* 
   * The way i'll taste the program is using different characters as symbols
   * I didn't find any bug. Maybe findind new scape characters related to spaces
   * */

  // Exercise 1-12
  //int c = 0, state = OUT;
  //while ((c = getchar()) != EOF) {
  //  if (c == ' ' || c == '\n' || c == '\t') {
  //    c = '\n';
  //    state = OUT;
  //  }
  //  else if (state == OUT) {
  //    state = IN;
  //  }
  //  putchar(c);
  //}

  // Exercise 1-13
  //printf("--------------------\n");
  //int c = 0, nc = 0, max_word = 100;
  //int length_words[max_word];
  //for (int i = 0; i < max_word; ++i)
  //  length_words[i] = 0;

  //printf("INPUT: "); 
  //while ((c = getchar()) != EOF) {
  //  (c != ' ' && c != '\n' && c != '\t') ? ++nc : 0 ;
  //  if (c == ' ' || c == '\n' || c == '\t') {
  //    ++length_words[nc-1];
  //    nc = 0;
  //  }
  //}

  //printf("%20s\n--------------------\n","Horizontal Histogram");
  ////for (max_word; length_words[max_word-1] == 0; --max_word);
  //for (int i = 0; i < max_word; ++i) {
  //  if (length_words[i] != 0) {
  //    printf("%2d: ", i+1);
  //    for (int j = 0; j < length_words[i]; ++j)
  //      putchar('#');
  //    putchar('\n');
  //  }
  //}

  //// Exercise 1-14
  //int c = 0;
  //char characters[ASCII_SIZE];
  //for (int i = 0; i < ASCII_SIZE; ++i) 
  //  characters[i] = 0;

  //while ((c = getchar()) != EOF)
  //  ++characters[c];
  
  //for (int i = ASCII_START; i < 127; ++i) {
  //  if (characters[i] != 0){
  //    printf("\'%c\' [%3d]: ", (char)i, i);
  //    for (int j = 0; j < characters[i]; ++j)
  //      putchar('#');
  //    putchar('\n');
  //  }
  //}

  //// Exercise 1-15
  //float fahr = LOWER;
  //while (fahr <= UPPER) {
  //  printf("%3.0f%6.1f\n", fahr, conversion(fahr));
  //  fahr += STEP;
  //}
  //return 0;
  
  //// Chapter 1.9 Character Array
  //int len, max = 0;
  //char line[MAXLINE], longest[MAXLINE];
  //
  //while ((len = getliner(line, MAXLINE)) > 0)
  //  if (len > max) {
  //    max = len;
  //    copier(longest, line);
  //  }
  //if (max > 0)
  //  printf("%s", longest);

  // Exercise 1-16
  //int len, max = 0;
  //char line[MAXLINE], longest[MAXLINE];
  //
  //while ((len = getliner(line, MAXLINE)) > 0){
  //  printf("Line length: %d\n", len);
  //  if (len > max) {
  //    max = len;
  //    copier(longest, line);
  //  }
  //}
  //if (max > 0)
  //  printf("Longest word: %s\n", longest);

  //// Exercise 1-17
  //int len;
  //char line[MAXLINE];
  //
  //while ((len = getliner(line, MAXLINE)) > 0)
  //  (len > 80) ? printf("input > 80: %s\n", line) : 0; 

  //// Exercise 1-18
  //int len;
  //char line[MAXLINE];
  //
  //while ((len = getliner_v2(line, MAXLINE)) > 0){
  //  printf("- %s", line); 
  //}

  // Exercise 1-19 
  int len;
  char line[MAXLINE];
  
  while ((len = getliner(line, MAXLINE)) > 0){
    reverser(line, len);
    printf("%s", line);
  }

  return 0;
}

float conversion(float fahr) {
  return (5.0/9.0)*(fahr - 32.0);
}

// 1.9 Character Array
/* getline: read a line into s, return length; s_i in s[], lim in Z > 0*/
int getliner(char s[], int lim) {
  int c, i;
  for (i = 0; (c = getchar()) != EOF; ++i){
    if (i < lim-1) 
      s[i] = c;
    if (c == '\n'){
      ++i;
      break;
    }
  }

  if(i < lim-1)
    s[i] = '\0';
  return i;
}

/* copier: copier 'from' into 'to'; len(to) > 0 and len(from) > 0 */
void copier(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

/* getline_v2: For exercise 1-18, removes trailing spaces and blanks...
 * better option would be another function*/ 
int getliner_v2(char s[], int lim) {
  int c, i;
  for (i = 0; (c = getchar()) != EOF; ++i){
    if (i < lim-1) 
      s[i] = c;
    if (c == '\n'){
      ++i;
      break;
    }
  }

  if(i < lim-1){
    int j;
    for (j = i-2; s[j] == ' ' || s[j] == '\t' || s[j] == '.'; j--);
    s[j+1] = '\n';
    s[j+2] = '\0';
  }

  return i;
}

/* reverser: gets a char line and reverses */
void reverser(char string[], int len) {
  char copy[MAXLINE];
  int i, j=0;
  for(i = 0; string[i] != '\0'; ++i)
    copy[i] = string[i];

  for(i -= 2; i >= 0; --i){
    string[j] = copy[i];
    ++j;
  }
}
