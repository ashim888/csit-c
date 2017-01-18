#include <stdio.h>
int main(){
	int max_limit,flag=0;
	printf("Enter any number: ");
	scanf("%d",&max_limit);
	for (int i = 1; i <= max_limit; i++)
	{	
		flag=0;
		for (int j = 1; j<=i; j++)
		{
			if (i%j==0){
				flag++;
			}
		}
		if (flag==2){
			printf("%d is prime\n",i );
		}	
	}
	return 0;
}