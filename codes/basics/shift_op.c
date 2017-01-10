#include<stdio.h>
int main(){	
	unsigned int n1=60 ,left, right;
	left =n1 << 3;	
	right =n1 >> 3;	

	printf("%u \n", left);	
	printf("%u\n", right);
	printf("%u\n",~n1);
}

