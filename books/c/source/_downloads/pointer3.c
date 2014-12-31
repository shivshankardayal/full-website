//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  i = 8;
  int *p = &i;

  *p = 7;

  printf("i=%d *p=%d\n", i, *p);

  return 0;
}
