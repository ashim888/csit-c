#include <stdio.h>

void relationship();
int main(void){
	relationship();
}

void relationship(){
	int x[10]; 
	printf("\nThe address of first index is= %p\n", &x[0]);
	printf("\nThe address of first index is= %p\n", x);

	printf("\nThe address of second index is= %p\n", &x[1]);
	printf("\nThe address of second index is= %p\n", x+1);


}
