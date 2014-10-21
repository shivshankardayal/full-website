//Author: Shiv S. Dayal
//Description : Demo of if-else statements.

#include <stdio.h>
#include <string.h>

int main()
{
  char fName[128]={0}, lName[128]={0};

  printf("Enter your first name and last name in that order:\n");
  gets(fName);
  gets(lName);

  if(strcmp(fName, "Shiv") == 0)
    {
      if(strcmp(lName, "Dayal") == 0)
	printf("Your name is Shiv Dayal.\n");
    }
  else
    {
      printf("Your name is %s %s.\n", fName, lName);
    }

  return 0;
}
