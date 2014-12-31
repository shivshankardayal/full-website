// Author : Shiv S. Dayal
// Description : Demo of logical AND & OR operators

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int i = 4, j = 5;
  int result;
  
  result = i&j;
  printf("%d\n", result);

  result = i|j;
  printf("%d\n", result);

  result = i^j;
  printf("%d\n", result);

  return 0;
}
