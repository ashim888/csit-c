/* 1.	WAP a program to read n numbers from user and store in an array 
and then rearrange the array in the reverse order. */

#include <stdio.h>
int main(void){
	int i,n;
	printf("Enter a number: \n");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++){
		printf("Enter a number for array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe reverse order:\t");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i] );
	}
	printf("\n");
}