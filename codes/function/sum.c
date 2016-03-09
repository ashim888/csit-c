#include<stdio.h>

void disp(int[],int);
int main(void)
{
	int arr[5],i;
	printf("Enter the values");
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	disp(arr,5);
	
}
void disp(int ar[],int s){
	int i,sum=0;
	printf("Elements are:");
	for (i=0;i<s;i++)
	{
		printf("%d\t",ar[i]);
		sum=sum+ar[i];
	}
	printf("\nTotal=%d\n",sum);
}