#include<stdio.h>

int main(){
	int n;
	printf("Enter Any Number\n");
	scanf("%d",&n);
	if(n==0 ||n==-0){
		printf("The number %d is neither positive or negative\n", n);	
	}
	else if(n>0){
		printf("The number %d is positive\n", n);
	}
	else{
		printf("The number %d is negative\n", n);
	}


}
