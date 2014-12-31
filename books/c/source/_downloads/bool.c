// Boolean Program
// Author: Shiv S. Dayal
// Description: Demo of boolean data typec

#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool bcpp      = 4;
  _Bool bc       = 5;
  bool True      = true;
  _Bool False    = false;
  bool bFalseCPP = -4;
  _Bool bFalseC  = -7;

  printf("%d %d %d %d %d %d\n", bcpp, bc, True, False, bFalseCPP, bFalseC);
  
  getchar();

  return 0;
}
