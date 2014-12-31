#include <stdio.h>

int main()
{
  int a=0, b=0, r=1;

  printf("Enter two positive integers separated by space:\n");
  scanf("%d %d", &a, &b);

  while(r != 0) {
    r = a % b;
    if(r == 0)
      break;
    else {
      a = b;
      b = r;
    }
  }

  printf("GCD is %d\n", b);

  return 0;
}
