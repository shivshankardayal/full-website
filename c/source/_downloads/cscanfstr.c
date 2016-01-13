// Author: Shiv S. Dayal
// Description: Corrected demo of string input

#include <stdio.h>

int main()
{
  char str[128] = {0};

  scanf("%[^\n]s", str);
  printf("You entered:\n%s\n", str);

  return 0;
}
