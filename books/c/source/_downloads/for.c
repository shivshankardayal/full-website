//Author: Shiv S. Dayal
//Description : Demo of for statement.

#include <stdio.h>

int main()
{
  for(int i=1, j=1; i<=10||j<=10; i++, j++)
    printf("%2d * %2d = %4d\n", i, j, i*j);

  return 0;
}
