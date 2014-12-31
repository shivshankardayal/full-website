//Author: Shiv S. Dayal
//Description : Demo of if-else statements.

#include <stdio.h>

int main()
{
  int i = 0, j= 0;

  printf("Please enter two integers i and j:\n");
  scanf("%d%d", &i , &j);

  if(i==4)
    printf("you entered 4 for i.\n");

  if(i==7)
    {
      printf("you entered 7 for i.\n");
      printf("I am happy for you.\n");
    }
  else
    {
      printf("You did not enter 7 for i.\n");
    }
  if(i==7)
    {
      printf("you entered 7 for i.\n");
      printf("I am happy for you.\n");
    }
  else if(j==8)
      printf("You entered 8 for i.\n");

  if(i==7)
    printf("you entered my lucky number.\n");
  else if((i==7) &&(j==8))
    printf("May god bless you!\n");
  else
    printf("You entered bad numbered.\n");

  return 0;
}
