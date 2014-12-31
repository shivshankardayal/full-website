// Author : Shiv S. Dayal
// Description : Demo of relational operator

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int i = 4, j = 5;
  _Bool result = 0;

  result = i < j;
  printf("%d\n", result);

  result = i > j;
  printf("%d\n", result);

  result = i <= j;
  printf("%d\n", result);

  result = i >= j;
  printf("%d\n", result);

  return 0;
  
}
