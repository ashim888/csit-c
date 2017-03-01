#include <stdio.h>

int main(){

	int x[5]={20,40,60,80,100},k;
	printf("\narray element \t\telements value \t\taddress\n");
	for(k=0;k<5;k++){
		printf("x[%d]\t\t\t%d\t\t\t%p\n",k,*(x+k),x+k );
	}
}



