#include <stdio.h>
#include <conio.h>
#define m 2
#define n 2
int trans[10][10];

void matrix(void)
{
	int mat[10][10],i,j;
	// printf("Enter the number of rows and column ");
	// scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element [%d][%d]",i,j);
			scanf("%d",&mat[i][j]);

		}
	}
	printf("Your matrix is : \n ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[j][i] = mat[i][j];
		}
	}
	// return 0;
}

int main(void){
	int i,j;
	matrix();
	printf("Transposed matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	getch();
}
