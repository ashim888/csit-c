#include<stdio.h>
int main(){
	int a=1,b=20,c=21;


	if(a&&b){
		printf("if condition");
	}
	else{
		printf("else cond");
	}

	if(a>b && a>c){
		printf("A is greater");
	}
	
	else if(b>c&&b>a){
		printf("B is greater");
	}
	else{
		printf("C is greater");
	}	

}
