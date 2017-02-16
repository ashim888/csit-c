#include <stdio.h>
void swap(int *,int *); 
void main(){	
	int a=99,b=98;
	printf("BEFORE function calling, a and b are: %d\t %d\n",a,b);	
	swap(&a,&b); 	/* function call by reference*/	
	printf("AFTER calling function, a and b are: %d\t %d\n",a,b );
}
void swap(int *x, int *y){	
	printf("The address of x: %p\n", x);
	printf("The address of y: %p\n", y);
	int temp;	
	temp=*x;	
	printf("The value of temp: %d\n",temp);
	*x=*y;
	printf("The value of *x: %d\n",*x);
	*y=temp;	
	printf("The value of *y: %d\n",*y);
}