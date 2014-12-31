//Author: Shiv S. Dayal
//Description : Demo of two-dimensional array.

#include <stdio.h>

int main()
{
  int a[2][2] = {{1,2},{3,4}};
  int b[2][2] = {1,2,3,4};
  int c[][3] = {{1},{2},{3}};
  
  //iterating over array
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
  return 0;
}
