#include <stdio.h>

/* C=(5/9)(F-32) */

main()
{

  int lowF = -100;
  int hiF = 200;

  int f;
  float c;
  int step = 10;

  printf("%6s %8s\n", "Fahr", "Celsius");
  f = lowF;
  while (f <= hiF) {
    //c = (5.0 / 9.0) * (f - 32);
    c = 5 * (f - 32) / 9.0;
    printf("%6d %7.2f\n", f, c); 
    f = f + step;
  }
}

