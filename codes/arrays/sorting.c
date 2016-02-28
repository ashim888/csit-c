#include <stdio.h>

int main(void)
{
	int nums[50],i,j,n,temp;
	printf("How many Numbers are there?\t");
	scanf("%d",&n);

	printf("\nEnter %d numbers: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	printf("ORIGINAL LIST\n");
	printf("\n-----------------------------------\n");

	for(i=0; i<n; i++){
		printf("\t%d",nums[i]);
	}
	printf("\n-----------------------------------\n");

	printf("\n\n");
	printf("i\tj\tnums[i]\tnums[j]\ttemp\n");
	for (i = 0; i < n-1; i++)
	{
		// printf("i\t");
		/* code */

		for (j=i+1; j < n;j++)
		{	
			printf("%d\t%d\t%d\t%d\t%d\n",i,j,nums[i],nums[j],temp);
			/* code */
			if(nums[i]>nums[j]){
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
				
				
			}
			printf("%d\t%d\t%d\t%d\t%d\n",i,j,nums[i],nums[j],temp);
		}
		printf("\n-----------------------------------\n");
	}
	printf("\nThe numbers in ascending order:\n");
	for(i=0; i<n;i++){
		printf("\t%d",nums[i]);
	}
	printf("\n");
}