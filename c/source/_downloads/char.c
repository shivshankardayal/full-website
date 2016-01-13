// Program for ASCII table
// Author: Shiv Shankar Dayal
// Description: ASCII tables

#include <stdio.h>

int main()
{
  int c=0;

  for(c=0; c<127; c+=16)
    {
      printf("%c %c %c %c %c %c %c %c %c %c %c %c %c \
              %c %c %c \n", c, c+1, c+2, c+3, c+4, c+5,\
	     c+6, c+7, c+8, c+9, c+10, c+11, c+12, \
	     c+13, c+14, c+15);
    }

  return 0;
}
