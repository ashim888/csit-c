#include <stdio.h>

int natural(int n){
	if(n==0){
		return 0;
	}
	else{
		return n+natural(n-1);
	}
}

int main(void){
	int n;
	printf("ENTER ANy Number:\t");
	scanf("%d",&n);
	printf("The sum of %d natural numbers is %d\n",n,natural(n) );
}