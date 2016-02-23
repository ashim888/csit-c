/* ONE ELEMENT AT A TIME */
#include <stdio.h>

void display(int n){
	printf("%d\t",n );
	
}

int main(void){
	int nums[5]={100,23,44,3,65},i;

	printf("\nThe content of array is: \n");
	for (int i = 0; i < 5; i++)
	{
		display(nums[i]);
	}
	printf("\n");
}