#include<stdio.h>

int main(){
	unsigned int n1=60 ,left, right;
	left =n1 << 3;
	right =n1 >> 3;

	printf("left=%d \n", left);
	printf("right=%d\n", right);
	printf("ones=%d\n", ~n1 );
}
