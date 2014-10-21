//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *intArray[2];
  
  intArray[0] = (int*)calloc(3, sizeof(int));
  intArray[1] = (int*)calloc(2, sizeof(int));

  *intArray[0]     = 4;
  *(intArray[0]+1) = 5;
  *(intArray[0]+2) = 6;
  

  *intArray[1]     = 1;
  *(intArray[1]+1) = 2;

  for(int i=0; i<3; i++)
  {
    printf("Memory location=%p Content=%d\n", intArray[0]+i, *(intArray[0]+i));
  }
  
  for(int i=0; i<2; i++)
  {
    printf("Memory location=%p Content=%d\n", intArray[1]+i, *(intArray[1]+i));
  }

  return 0;
}
