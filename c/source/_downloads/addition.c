#include <stdio.h>

int main()
{
	int x=0, y=0, sum=0;

	printf("Please enter an integer for x:\n");
	scanf("%d", &x);

	printf("Please enter another integer for y:\n");
	scanf("%d", &y);

	sum = x + y;

	printf("The sum of %d and %d is %d\n", x, y, sum);

	return 0;
}
