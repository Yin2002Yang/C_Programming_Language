#include <stdio.h>
#include "utility.h"
#define MAXLINE 1000 /* maximum input line size */
#define DESIREDLINELENGTH 80

/* print lines with more than 80 characters */
int main()
{
  int len; /* current line length */
  char line[MAXLINE];
  while ((len = Getline(line, MAXLINE)) > DESIREDLINELENGTH)
    printf("%s", line);
  return 0;
}
