//Author: Shiv S. Dayal
//Description: Iterative Fibonacci series.

#include <stdio.h>

void fibonacci(int input);

int main()
{
  int input=0;
  
  printf("How many Fibonacci numbers you want?\n");
  scanf("%d", &input);

  fibonacci(input);

  return 0;
}

void fibonacci(input)
{
  int fib0=0, fib1=1;

  if(input==0)
    return;
  else if(input==1)
  {
    printf("%d\n", fib0);
  }
  else if(input==2)
  {
    printf("%d %d\n", fib0, fib1);
  }
  else if(input>2)
  {
    printf("%d %d", fib0, fib1);
    while(input>1)
    {
      fib1=fib1+fib0;
      fib0=fib1-fib0;
      printf(" %d", fib1);
      input--;
    }
  }
  printf("\n");
}
  
