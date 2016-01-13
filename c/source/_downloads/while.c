//Author: Shiv S. Dayal
//Description : Demo of while statement.

#include <stdio.h>

int main()
{
  int i = 0;
  
  while(i<=10)
    {
      printf("%d *%2d = %4d\n", 2, i, 2*i);
      i++;
    }

  return 0;
}
