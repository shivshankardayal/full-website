// Author: Shiv S. Dayal
// Description: Single character funciton demo

#include<stdio.h>

int main()
{
  char c ='\0';

  c = getchar();
  putchar(c);
  
  c = getchar();
  putchar(c);

  c = fgetc(stdin);
  fputc(c, stdout);
  
  c = getchar();
  putchar(c);

  c = getc(stdin);
  putc(c, stdout);

  return 0;
}
