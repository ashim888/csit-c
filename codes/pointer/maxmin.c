//WAP a program to read an array of n integers using dynamic memory allocation and display the largest and smallest element
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i;
	int *num,max,min;

	printf("Enter number of elements in your array: \t");
	scanf("%d",&n);
	num=(int *)calloc(n,sizeof(int));
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",num+i);
	}
	max=*num;
	min=*num;
	// printf("max=%d min=%d\n",max,min );
	for (int i = 0; i < n; i++)
	{
		if(max < *(num+i)){
			max=*(num+i);
		}
		if (min > *(num+i))
		{
			min=*(num+i);
		}
	}
	printf("\nThe Max number is: %d\n",max);
	printf("\nThe Min number is: %d\n",min);
}