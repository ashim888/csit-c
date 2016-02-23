/* WAP in C to input any 10 numbers in an array and search an element.   */

#include <stdio.h>

int main(void){

int myarr[10],n,pos;
printf("ENTER 10 numbers\n");
for(int i=0;i<5;i++){
	scanf("%d",&myarr[i]);
}
printf("ENTER a number to search: \n");
scanf("%d",&n);

for(int i=0;i<10;i++){
	if(myarr[i]==n){
		printf("NUMBER FOUND AT POSITION: %d\n",i);
		break;
	}
	else{
		if(i==5){
			printf("NOT FOUND\n");
		}
	}
}

}

