// Author : Shiv S. Dayal
// Description : Demo of shift operators

#include <stdio.h>

int main()
{
  int i  = 4;
  char c ='A';
  int result;
  
  result = c<<i;
  printf("%d\n", result);

  result = c>>i;
  printf("%d\n", result);

  return 0;
}
