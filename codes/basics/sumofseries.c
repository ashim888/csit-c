// SUM OF SERIES USING WHILE LOOP
#include<stdio.h>

int main(){
	int n,sum=0,a=1;
	printf("Enter any number: ");
	scanf("%d",&n);

	while(a<=n){
		// printf("the number is %d\n", a);
		sum+=a;
		a++;
	}
	printf("the sum is %d\n",sum );

}
