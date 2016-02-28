#include <stdio.h>

int main(void){	
	int k,m,n,p,q,c,d,f[10][10],s[10][10],M[10][10],sum=0;
	printf("ROWS And Colums\n");	
	scanf("%d%d",&m,&n);
	printf("\nEnter First Matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&f[i][j]);
		}
	}
	// printf("\n\nFirst Matrix:\n");
	// for (int i = 0; i < m; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		printf("%d\t",f[i][j]);
	// 	}
	// 	printf("\n");
	// }

	printf("\nEnter Second Matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	// printf("\n\nSecond Matrix:\n");
	// for (int i = 0; i < m; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		printf("%d\t",s[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// printf("\n\n");
	sum=0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for(k=0;k<m;k++){

				sum+=f[i][k]*s[k][j];
			}
			M[i][j]=sum;
			sum=0;
		}
	}
	printf("\n\nMATRIX MULTIPLICATION\n");

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t",M[i][j]);
		}
		printf("\n");
	}
}