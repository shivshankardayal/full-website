// printf demo
// Author: Shiv Shankar Dayal
// Description: printf demo

#include <stdio.h>

int main()
{
	printf("%d %d\n", 3, 8);

	//do not mess it. undefined behavior
	printf("%d %d\n", 5);

	//extra arguments ignored
	printf("%d %d\n", 3, 5, "hello");

	//legal because char is integer type
	printf("%d\n", 's');

	//wrap around of integer as char
	printf("%c\n", 836);

	//do not mess with type-safety
	int i = printf("%d\n", "hello");
	printf("%d\n", i);
	return 0;
}
