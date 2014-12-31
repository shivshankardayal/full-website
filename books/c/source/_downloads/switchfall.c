//Author: Shiv S. Dayal
//Description : Demo of switch statement.

#include <stdio.h>

int main()
{
  int i  = 65;
 
  switch(i)
    {
    case 'A':
      printf("Value of i is 'A'.\n");
    case 'B':
      printf("Value of i is 'B'.\n");
    default:
      printf("Value of i is %c.\n", i);
      break;
    }

  return 0;
}
