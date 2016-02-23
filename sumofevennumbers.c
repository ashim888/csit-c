/*
Author: Ashim Lamichhane
PROGRAM: SUM OF SERIES
*/

#include<stdio.h>

int main(){

	int num,sum=0,oddsum=0;


	printf("enter number n: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(i%2==0){
			printf("Even number found: %d\n",i );
			sum=sum+i;
		}
		else{
				printf("ODD number found: %d\n",i );
				oddsum=oddsum+i;
		}
		
	}

	printf("the Sum of all even numbers from 0 to %d = %d\n",num,sum);
	printf("the Sum of all even numbers from 0 to %d = %d\n",num,oddsum);
	return 0;
}