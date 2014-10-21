//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = NULL;

  p = (int*)malloc(sizeof(int)*8);
  int *q = p;

  for(int i=0;i<8;i++)
  {
    *(p+i)=i;
    printf("Content at %dth location is %d.\n", i, *(q++));
  }

  return 0;
}
