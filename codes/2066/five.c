// Write a program to enter two 3x3 matrices and calculate the product of given matrices.
#include <stdio.h> 
int main(){

	int a[3][3],b[3][3],c[3][3]; 
	int i,j,k;
	printf("Enter matrix A:\n"); 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]); 
		}
	}
	printf("Enter matrix B:\n"); 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) {
			scanf("%d",&b[i][j]); 
		}
	} 

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	printf("\n Product of two matrix: \n"); 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) {
			printf("%d\t",c[i][j]); 
		}
		printf("\n"); 
	}

}