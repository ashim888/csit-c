/*

@author: Ashim Lamichhane
PROGRAM: TO FINDOUT ALL THE DIVISOR OF ANY NUMBER
 
 */
#include<stdio.h>

int main(){

	int num;
	int sum=0;

	printf("enter number: ");
	scanf("%d",&num);

	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
			printf("SUM:%d\n",sum );
 		}
	}
	if(sum==num){
		printf("%d is perfect \n",num );
	}
	else{
		printf("%d is not\n", num);
	}
	return 0;
}
