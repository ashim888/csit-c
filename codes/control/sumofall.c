/*
Author: Ashim Lamichhane
PROGRAM: SUM OF ALL ENTERED NUMBERS
*/


#include<stdio.h>

int main(){

	int num;
	int sum=0;
	printf("how many numbers do you want to enter??");
	scanf("%d",&num);

	int myarr[num];

	for(int i=1;i<=num;i++){
		scanf("%d",&myarr[i]);
	}
	for(int i=1;i<=num;i++){
		sum=sum+myarr[i];
	}
	
	printf("sum of all entered numbers: %d\n",sum);	

	return 0;
}