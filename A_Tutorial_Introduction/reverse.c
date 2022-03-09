#include <stdio.h>
#include "utility.h"

#define MAXLINE 1000 /* maximum length of line allowed */

const char* reverse(char[]);

int main()
{
  int len;
  char line[MAXLINE];

  while ((len = Getline(line, MAXLINE)) > 0)
    printf("%s", reverse(line));

  return 0;
}

const char* reverse(char line[])
{
  int len; /* how long the line is */
  int i, j;

  i = 0;
  len = 0;
  while (line[i] != '\0')
    {
      ++len;
      ++i;
    }

  j = 0;
  i = 0;
  char reverse[len+1];
  for (i = len-2; i >= 0; --i)
    {
      reverse[j] = line[i];
      ++j;
    }
  reverse[j] = '\n';
  reverse[++j] = '\0';
  line = reverse;
  
  return line;
}
