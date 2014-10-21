//Author: Shiv S. Dayal
//Description : Demo of break statement.

#include <stdio.h>

int main()
{

  for(int i = 0;;i +=10)
    {
      if(i>100)
	break;
      printf("%d\n", i);
    }

  return 0;
}
