#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

/* Copy input to output one word per line */
main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF)
    {
      if (c == ' ' || c == '\n' || c == '\t')
	state = OUT;
      else if (state == OUT)
	{
	  state = IN;
	  putchar('\n');
	}
      if (state == IN)
	putchar(c);
    }
}
