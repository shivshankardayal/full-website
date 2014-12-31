// Format Specifiers
// Author: Shiv S. Dayal
//Desciption: It is a demo of several format specifiers

#include<stdio.h>

int main()
{
	int i   = 343456;
	float f = 123; 
	long double ld = 78939.9347;

	printf("% d\n", i);
	printf("%+d\n", i);
	printf("%#o\n", i);
	printf("%#f\n", f);
	printf("%-08i\n", i);
	printf("%08i\n", i);
	printf("%8i\n", i);
	printf("%hhi\n", i);
	printf("%hi\n", i);
	printf("%li\n", i);
	printf("%lli\n", i);
	printf("%ji\n", i);
	printf("%zi\n", i);
	printf("%ti\n", i);
	printf("%8.8f\n", f);
	printf("%8.8Lf\n", ld);
	
	return 0;
}
