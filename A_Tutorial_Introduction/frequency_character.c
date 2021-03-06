#include <stdio.h>

#define ASCII_MAX 128

main()
{
  int frequency[ASCII_MAX], c, i;

  for (i = 0; i < ASCII_MAX; ++i)
    frequency[i] = 0;

  while ((c = getchar()) != EOF)
    ++frequency[c - 0];

  for (i = 0; i < ASCII_MAX; ++i)
    printf("Character:%c\tFrequency:%d\tASCII_VALUE:%d\n", i, frequency[i], i);
}
