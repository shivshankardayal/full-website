//Author: Shiv S. Dayal
//Description : Demo of continue statement.

#include <stdio.h>

int main()
{

  for(int i = 0;i<=100;i +=10)
    {
      if(i==50)
	continue;
      printf("%d\n", i);
    }

  return 0;
}
