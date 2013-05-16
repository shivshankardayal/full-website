// Author: Shiv S. Dayal
// Description: Demo of compound assignments.

#include <stdio.h>

int main()
{
  int i   = 3;
  int j   = 3;
  float f = 4.7;
  float result=0.0;

  result += i+f;
  printf("%f\n", result);
  
  result -= f;
  printf("%f\n", result);

  j <<= i;
  printf("%d\n", j);

  return 0;
}
