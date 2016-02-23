/* WAP to find the Row Sum and Column Sum of a Matrix. */

#include <stdio.h>
int main(void){
	int i,j,m,n,sum=0;
	
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
	printf("\n\nTHE ENTERED MATRIX iS:\n\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nThe Row and Colum Sum of Matrx is:\n");
	for(i=0;i<m;i++){
		sum=0;
		for(j=0;j<n;j++){
			sum+=matrix[i][j];
		}
		printf("ROW SUM of %d row=%d \t",i,sum);

		printf("\n");
	}
	printf("\n\n");
	for(j=0;j<n;j++){
		sum=0;
		for(i=0;i<m;i++){
			sum+=matrix[i][j];
		}
		printf("Column SUM of %d col=%d \t",j,sum);

		printf("\n");
	}

}