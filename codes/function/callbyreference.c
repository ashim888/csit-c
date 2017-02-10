#include <stdio.h>
void swap(int *,int *); 

int main(void){	
	int a=9,b=8;
	printf("BEFORE function calling a and b are: %d \t %d\n",a,b);	
	swap(&a,&b); 	/* function call by reference*/	
	printf("After calling function, a and b are: %d\t %d\n",a,b );
}
void swap(int *x, int *y){	
	int temp;	
	temp=*x;
	*x=*y;	
	*y=temp;	
}
