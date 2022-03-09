#include <stdio.h>
#include "utility.h"

#define MAXLINE 1000 /* maximum input line size */

/* remove trailing blanks and tabs from each line input, and to delete entirely
 * blank lines
 */
int main()
{
  char line[MAXLINE];
  int len;

  while ((len = Getline(line, MAXLINE)) > 0)
    {
      if (len == 1)
	continue;
      while(line[len-2] == '\t' || line[len-2] == ' ')
	{
	  line[len-2] = '\n';
	  line[len-1] = '\0';
	  --len;
	}
      printf("%s", line);
    }
  return 0;
}
