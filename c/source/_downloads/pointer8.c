//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = (int*)malloc(sizeof(int)*2);

  *p     = 5;
  *(p+1) = 7;

  printf("Original 1st element=%d\n", *p);
  printf("Original 2nd element=%d\n", *(p+1));

  p = (int*)realloc(p, sizeof(int)*4);

  *(p+2) = 9;
  *(p+3) = 11;

  printf("Original 1st element=%d\n", *p);
  printf("Original 2nd element=%d\n", *(p+1));
  printf("Original 3rd element=%d\n", *(p+2));
  printf("Original 4th element=%d\n", *(p+3));

  return 0;
}
