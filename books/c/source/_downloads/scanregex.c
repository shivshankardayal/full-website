// Author: Shiv. S Dayal
// Description: Demo of []

#include <stdio.h>

int main()
{
  char c[100]={0};
  
  scanf("%[ A-Za-z0-9!.]", c);
  printf("%s\n", c);
  
  return 0;
}
