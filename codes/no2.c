/* 
WAP a program to read n numbers in an array and remove the duplicate numbers from the array.
SAMPLE: 1 2 1 2 3
*/


#include <stdio.h>
int main(void){
	int x,n,myvar=0;
	printf("Enter a number: \t");
	scanf("%d",&n);
	int arr[n],changedarr[n];

	for(x=0;x<n;x++){
		printf("Enter a number for array[%d]: ",x);
		scanf("%d",&arr[x]);
	}
	printf("\nOriginal Number in an array\n");
	for(x=0;x<n;x++){
		printf("%d\t",arr[x]);
	}

	int i=0,j=0;
	// printf("i\tj\tarr\tchanged\n");

	for (int i = 0; i < n; i++)
	{
		// printf("%d\t%d\t%d\t%d\n",i,j,arr[i],changedarr[i] );
		for (int j = 0; j <n; j++)
		{	
			if (i==j)
			{
				continue;

			}
			else if(arr[i]==arr[j]){
				changedarr[j]=0;

			}
			else{
				changedarr[i]=arr[i];

			}
		// printf("%d\t%d\t%d\t%d\n",i,j,arr[i],changedarr[i] );
		}
		myvar+=1;
	}
	// printf("\n\nmyvar=%d\n",myvar);
	int count=0;
	printf("\nThe unique items:\n");
	for (int i = 0; i < myvar; i++)
	{
			if(changedarr[i]!=0){
				count+=1;
				printf("%d\t",changedarr[i]);	
			}
	}
	printf("\n");
}
					






