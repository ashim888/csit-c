#include <stdio.h> 
void swap(int x, int y);	 /* function declaration */ 
int main () { 
	int a = 100; int b = 200; 	/* local variable definition */ 
	printf("Before swap, value of a : %d\n", a ); 
	printf("Before swap, value of b : %d\n", b ); 
	swap(a, b); 		/* calling a function to swap the values */ 
	printf("After swap, value of a : %d\n", a ); 
	printf("After swap, value of b : %d\n", b ); 
	return 0; 
}
/* function definition to swap the values */
 void swap(int x, int y) { 
	int temp; 
	temp = x; /* save the value of x */ 
	x = y; 	/* put y into x */ 
	y = temp; 	/* put temp into y */ 
	return; 
}