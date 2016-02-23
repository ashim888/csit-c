/* WAP in c to copy the element of one Matrix to another. */
#include <stdio.h>
int main(void){
	int i,j,m,n;
	
	printf("Enter Number of Rows: ");
	scanf("%d",&m);
	printf("Enter Number of Columns: ");
	scanf("%d",&n);
	int matrix[m][n],see[m][n];

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter Matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("\nThe Another Matrx is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			see[i][j]=matrix[i][j];
			printf("see[%d][%d]: %d\t ",i,j,see[i][j]);
		}
		printf("\n");
	}
}