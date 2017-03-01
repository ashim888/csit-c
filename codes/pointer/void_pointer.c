#include <stdio.h>

int main(void){
	int a=10;
	double b=4.5;
	void *vptr;
	
	vptr=&a;
	printf("a=%d\n", *((int *)vptr)); /* not just simply *vptr */
	vptr=&b;
	printf("\nb=%lf\n", *((double *)vptr));
}
