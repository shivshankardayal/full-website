// Author: Shiv S. Dayal
// Description: Demo of enum

#include <stdio.h>

int main()
{
  typedef enum {zero, one, two} enum1;
  typedef enum {alpha=-5, beta, gamma, theta=4, delta, omega} enum2;

  printf("zero = %d, one = %d, two=%d\n", zero, one, two);
  printf("alpha = %d, beta = %d, gamma=%d, tehta=%d, delta=%d, omega=%d\n", \
		 alpha, beta, gamma, theta, delta, omega);

  return 0;
}
