//Author: Shiv S. Dayal
//Description : Demo of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *strArray[2]={"Hello", "Universe!"};

  for(int i=0; i<2; i++)
    printf("%s\n", strArray[i]);

  return 0;
}
