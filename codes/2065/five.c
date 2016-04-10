//Write a program to obtain the product of the following matrices and explain it
#include <stdio.h> 
int main()
{
	int a[3][3]={{3,5,7},{2,-3,4},{4,5,2}}; 
	int b[3][2]={{7,6},{6,-5},{4,3}};
	int i,j,k,c[3][2];
	printf("FIRST MATRIX\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d\t",a[i][j]);
			
		}
		printf("\n"); 
	}
	printf("SECOND MATRIX\n");
	for(i=0;i<3;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t",b[i][j]);
			
		}
		printf("\n"); 
	}
	printf("MULTIPLICATION OF MATRIX\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<3;k++) {
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		} 
	}
	for(i=0;i<3;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t",c[i][j]);
			
		}
		printf("\n"); 
	}
}