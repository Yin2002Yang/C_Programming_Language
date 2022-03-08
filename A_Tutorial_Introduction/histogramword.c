#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */
#define MAX 10000 /* Maximum number of words allowed */

/* A program to show histogram of length of words given as input */
main()
{
  // if we are inside a word
  // print the word while counting the letters
  // Once we are outside of word save the length inside the array
  // show number of '#' equal to length of the word
  int c, state, i;
  int word[MAX], count_of_words, length_of_words;

  count_of_words = length_of_words = 0;
  state = OUT;
  while ((c = getchar()) != EOF)
    {
      if (c == ' ' || c == '\n' || c == '\t')
	{
	  state = OUT;
	  if (length_of_words == 0)
	    continue;
	  else
	    {
	      if (length_of_words < 8)
		printf(":\t\t");
	      else
		printf(":\t");
	      for (i = 0; i < length_of_words; ++i)
		printf("#");
	    }
	  if (c == '\n')
	    printf("\n");
	}
      
      else if (state == OUT)
	{
	  state = IN;
	  length_of_words = 0;
	  printf("\n");
	}
      if (state == IN)
	{
	  ++length_of_words;
	  putchar(c);
	}
    }
}













