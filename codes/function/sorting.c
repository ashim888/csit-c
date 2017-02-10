#include <stdio.h>
#define m 5
void disp(int []);

int main(void){
	int arr[m],i,j;
	printf("Enter 5 numbers\n");
	// printf("size of arr: %lu\n", (sizeof(int)));
	for (int i = 0; i < m; i++)
	{
		scanf("%d",&arr[i]);
	}
	disp(arr);
}

void disp(int arr[]){
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The sorted list is: ");
	for (int i = 0; i < m; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}