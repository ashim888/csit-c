#include <stdio.h>
int main(void){
	int matrix[2][3],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter Matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The Entered Matrx\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrix[i][j]);
			
		}
		printf("\n");
	}
}