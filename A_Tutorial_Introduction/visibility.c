#include <stdio.h>

/* Program that copies input to output but
 * replaces tab with \t, backspaces with \b and blackslashes with \\
 */
main()
{
  int c;

  while((c = getchar()) != EOF)
    {
      if (c == '\t')
	{
	  putchar('\\');
	  putchar('t');
	}
      else if (c == '\b')
	{
	  putchar('\\');
	  putchar('b');
	}
      else if (c == '\\')
	{
	  putchar('\\');
	  putchar('\\');
	}
      else
	putchar(c);
    }
}
