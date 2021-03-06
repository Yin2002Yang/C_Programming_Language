#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 * using function FtoC
 */

float FtoC(float F);

main()
{
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;

  while (lower <= upper)
    {
      printf("%3d\t%6.1f\n", lower, FtoC(lower));
      lower = lower + step;
    }

  return 0;
}

float FtoC(float F)
{
  float c;
  c = (5.0 / 9.0) * (F - 32.0);
  return c;
}
