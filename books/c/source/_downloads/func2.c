//Author: Shiv S. Dayal
//Description: Demo of function

#include <stdio.h>

//not how argument names are not required
void add(int, int);

int main()
{
  int a=5, b=7;

  add(a, b);

  return 0;
}

void add(int firstInt, int secondInt)
{
  printf("%d+%d=%d\n", firstInt, secondInt, firstInt+secondInt);
}
