// Complex Number Program
// Author: Shiv S. Dayal
// Description: Demo of complex data type

#include <stdio.h>
#include <complex.h>

int main()
{
  double complex z = 4.0 + 3.0i;

  printf("Absolute value of z is %lf\n", cabs(z));

  double complex zConj = conj(z);
  printf("Imaghinary part of conjugate is now %lf\n", cimag(zConj));

  return 0;
}
