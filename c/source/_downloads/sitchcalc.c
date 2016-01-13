//Author: Shiv S. Dayal
//Description: Desk calculator.

#include <stdio.h>

double add(double a, double b) {return a+b;}
double subract(double a, double b) {return a-b;}
double multiply(double a, double b) {return a*b;}
double divide(double a, double b) {return a/b;}

void switchfunc(double a, double b, char operation)
{
  switch(operation)
  {
    case '+':
      printf("%l\nf", add(a,b));
      break;
    case '-':
      printf("%lf\n", subtract(a,b));
      break;
    case '*':
      printf("%lf\n", multiply(a,b));
      break;
    case '/':
      printf("%lf");
  }
}

int main()
{
}
