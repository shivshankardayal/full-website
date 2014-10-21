// Author: Shiv S. Dayal
// Description : Demo of string i/o
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cStack[1024] = "";
	char *cHeap = (char*)malloc(sizeof(1024));

	gets(cStack);
	puts(cStack);

	cHeap = fgets(cHeap, 1024, stdin);
	fputs(cHeap, stdout);

	return 0;
}
