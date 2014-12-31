// Floating-point constants
// Author: Shiv S. Dayal
// Description: Demo of floating-point constants

#include <stdio.h>

int main()
{
  float f = 7.5384589234;
  double d = 13.894578834538578234784;
  long double ld = 759.8263478234729402354028358208358230829304;

  printf("%f %lf, %Lf\n", f, d, ld);

  return 0;
}
