//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int **intPtr;

  intPtr = (int**)malloc(sizeof(sizeof(int*)*2));  

  *intPtr = (int*)malloc(sizeof(int)*3);
  *(intPtr+1) = (int*)malloc(sizeof(int)*4);

  **intPtr     = 1;
  *(*intPtr+1) = 2;
  *(*intPtr+2) = 7;
 
 
  **(intPtr+1)      = 3;
  *(*(intPtr+1)+1)  = 5;
  *(*(intPtr+1)+2)  = 9;
  *(*(intPtr+1)+3)  = 11;

  for(int i=0; i<3; i++)
    printf("Memory location=%p content=%d\n", *intPtr+i, *(*intPtr+i));

  for(int i=0; i<4; i++)
    printf("Memory location=%p content=%d\n", *(intPtr+1)+i, *(*(intPtr+1)+i));

  return 0;
}
