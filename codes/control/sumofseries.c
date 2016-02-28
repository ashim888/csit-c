/*
Author: Ashim Lamichhane
PROGRAM: SUM OF SERIES
*/

#include<stdio.h>

int main(){

	int num,sum=0;

	printf("enter number n: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		sum=sum+i;
	}

	printf("the Sum of series from 1 to %d is %d\n",num,sum);
	return 0;
}