//Author: Shiv S. Dayal
//Description: Demo of function

#include <stdio.h>

void swap(int*, int*);

int main()
{
  int a=5, b=7;

  printf("Before swap a=%d and b=%d\n", a, b);
  swap(&a, &b);
  printf("After swap a=%d and b=%d\n", a, b);

  return 0;
}

void swap(int *firstArg, int *secondArg)
{
  int temp=*firstArg;
  *firstArg=*secondArg;
  *secondArg=temp;
}
