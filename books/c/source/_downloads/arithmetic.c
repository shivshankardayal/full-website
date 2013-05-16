// Arithmetic operators
// Author: Shiv S. Dayal
// Description: Demo of arithmetic operators

#include <stdio.h>

int main()
{
  int i = 10;
  float f= 6.45;
  char c = 'A';
  int iResult = 0;
  float fResult = 0.0;
  char cResult = '\0';

  cResult = c + i;
  printf("cResult = %c\n", cResult);
  cResult = cResult - 5;
  printf("cResult = %c\n", cResult);

  iResult = i - 10;
  printf("iResult = %d\n", iResult);
  iResult = i * c;
  printf("iResult = %d\n", iResult);
  iResult = (i + c)/3;
  printf("Result = %d\n", iResult);
  iResult = (i + c)%2;
  printf("iesult = %d\n", iResult);

  fResult = f * 2.12;
  printf("fesult = %f\n", fResult);
  fResult = f - i;
  printf("fesult = %f\n", fResult);  
  fResult = f / 1.12;
  printf("fesult = %f\n", fResult);
  fResult = 1 % 3;
  printf("fesult = %f\n", fResult);

  return 0;
}
