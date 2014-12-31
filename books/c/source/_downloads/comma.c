// Author : Shiv S. Dayal
// Description : Demo of conditional operator
#include <stdio.h>

int main()
{
  int a=2, b=3, c=4;

  a=(b,c);

  printf("%d\n", a);

  return 0;
}
