/* A program to display memory location reserved by a variable */
#include <stdio.h>
int main(){
	int a=20;
	int *p=&a;
	printf("The address of a is: %p\n", p);
	printf("The value of a is: %d\n", *p);
	return 0;

}