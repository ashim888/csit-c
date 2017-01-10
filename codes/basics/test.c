//This is just a basic example
#include<stdio.h>

int main(){
	int value_test=1;
	//int value_test=4294967295;
	printf("the value of a is %u\n",value_test);
	//printf("size of an integer value_test is %lu",sizeof(value_test));	

	/*
	unsigned char a='A';
	signed char b='a';
	printf("The character is unsigned=%d and signed=%d",a,b);
	
	typedef int ashim;
	ashim nepal=56;
	printf("value of ashim nepal is %d",nepal);
	*/

	int a=60,b=15;
	// printf("%d\n", a-b);
	// printf("%d\n", b-a);
	// printf("%d\n", b%a);
	// printf("%d\n", a%b);

	// printf("a =%d\n",a);
	// printf("a =%d\n",++a);
	// printf("a =%d\n",a++);
	// printf("a =%d\n",a);

	// Conditional operator
	// int larger= a>b ? a : b;
	// printf("The larger number is %d\n", larger);

	// Bitwise And
	// printf("%lu\n",sizeof(a));
	// printf("%d\n",a&b);	

	// Bitwise Shift
	printf("%d\n",a<<3 );
	printf("%d\n",a>>4 );
	printf("%d\n",~a );

	int c=(a=1,b=2,a+b);
	printf("%d\n",c );	
}
