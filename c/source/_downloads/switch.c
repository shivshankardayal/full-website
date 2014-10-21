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
      break;
    case 'B':
      printf("Value of i is 'B'.\n");
      break;
    default:
      break;
    }

  return 0;
}
