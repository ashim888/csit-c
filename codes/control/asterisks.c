#include <stdio.h>
int main(){
	int n;
	printf("enter Value: ");
	scanf("%d",&n);

	for (int i = n; i>= 1; i--)
	{
		// for (int j = 1; j<=i; j++)
		// {
		// 	printf("*\t");
		// }
		for (int j = i; j>=1; j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}