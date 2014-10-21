//Author: Shiv S. Dayal
//Description: iRecursive Fibonacci series.

#include <stdio.h>

long long fibonacci(int input);

int main()
{
  int input=0;
  
  printf("Which Fibonacci number you want?\n");
  scanf("%d", &input);
  
  printf("%lld\n", fibonacci(input));

  return 0;
}

long long fibonacci(int input)
{
  long long fib0=0, fib1=1;

  if(input==0)
  {
    return fib0;
  }
  else if(input==1)
  {
    return fib1;
  }
  else
  {
    long long fib = fibonacci(input-1)+fibonacci(input-2);
    return fib;
  }
}
