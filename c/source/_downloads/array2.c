//Author: Shiv S. Dayal
//Description : Demo of array.

#include <stdio.h>

int main()
{
  int i=0;
  char c[i];

  printf("Enter the value of i:\n");
  scanf("%d\n", &i);

  printf("Enter a string which contains one less no. of chars than i:\n");
  gets(c);
  puts(c);

  return 0;
}
