#include <stdio.h>

/* A program that copies input to output but changes multiple blanks to singe one */
main()
{
  int current, previous;

  current = 0;
  previous = 0;
  while ((current = getchar()) != EOF)
    {
      if ((current == ' ') && (previous == current))
	continue;
      putchar(current);
      previous = current;
    }
}
