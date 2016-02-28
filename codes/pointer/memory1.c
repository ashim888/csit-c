/* A program to illustrate addresses reserved by different data types */
#include <stdio.h>
int main()
{
	/* code */
	int a=20, b=50;
	float c=10.4;
	char d='A';
	printf("The Base Address of a is: %u\n", &a);
	printf("The Base Address of b is: %u\n", &b);
	printf("The Base Address of c is: %u\n", &c);
	printf("The Base Address of d is: %u\n", &d);
	return 0;
}