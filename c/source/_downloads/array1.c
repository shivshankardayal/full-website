//Author: Shiv S. Dayal
//Description : Demo of array.

#include <stdio.h>

int main()
{
  const int MAX = 8;
  //An initialized array
  int a[8] = {0};
  //An initialized array to 0
  int b[MAX];
  
  for(int i=0; i<8; i++)
    {
      b[i] = i;
      printf("b[%d]=%d\n", i, b[i]);
    }

  for(int i=0; i<8; i++)
    {
      printf("a[%d]=%d\n", i, a[i]);
    }

  return 0;
}
