//Author: Shiv S. Dayal
//Description: Iterative factorial.

#include <stdio.h>

long long fact(int input);

int main()
{
  int input=0;

  printf("Enter a number whose factorial has to be computed:\n");
  scanf("%d", &input);

  printf("Factorial of %d is %lld.\n", input, fact(input));

  return 0;
}

long long fact(int input)
{
  long long output=1;
  while(input!=0)
  {
    output*=input;
    input--;
  }

  return output;
}
