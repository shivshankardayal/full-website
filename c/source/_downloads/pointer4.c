//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  a[4] = {1,2,3,4};
  int *p    = a;
  int *q    = (int*)calloc(10, 4);

  for(int i=0; i<4; i++)
    printf("i=%d *p=%d\n", i, *(p+i));

  printf("Size of a=%d\n", sizeof(a));
  printf("Size of p=%d\n", sizeof(p));
  printf("Size of q=%d\n", sizeof(q));

  return 0;
}
