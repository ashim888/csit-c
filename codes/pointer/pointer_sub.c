#include <stdio.h>

int main(void){
	int a[]={45,89,54,29},*pf,*p1;
	p1=a;
	pf=a+2;
	printf("pf=%p\n",pf );
	printf("p1=%p\n",p1 );
	printf("So pf-p1=%ld\n",pf-p1 );

	if(p1>pf){
		printf("p1 is larger one\n");
	}
	else{
		printf("pf is larger lol stupid comparison\n");
	}
}