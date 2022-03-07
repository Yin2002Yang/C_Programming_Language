#include <stdio.h>

main()
{
  int c;
  while (1)
    {
      c = getchar() != EOF;
      printf("%d", c);
    }
}
