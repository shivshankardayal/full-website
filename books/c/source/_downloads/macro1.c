//Author: Shiv S. Dayal
//Description: Demo of macros.

#include <stdio.h>

#define SUM(a, b) a+b

int main()
{
  printf("%d %d\n", SUM(5, 7), SUM(8, 9));

  return 0;
}
