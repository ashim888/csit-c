#include <stdio.h>

void change(int a[]){
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;
	
	
}

int main(void){
	int nums[5]={100,23,44,3,65},i;
	// int a[];

	printf("\nBEFORE FUNCTION CALL: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("\t%d",nums[i]);
	}
	printf("\n");
	change(nums); /* PASSING ARRAYS NUMS TO FUNCTION */
	printf("\nAFTER FUNCTION CALL\n");
	for (int i = 0; i < 5; i++)
	{
		printf("\t%d",nums[i]);
	}
	printf("\n");
}