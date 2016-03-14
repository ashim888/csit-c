// Write a program to add two m*n matrices using pointer.
#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 2

int main(){
	int (*a)[n]=malloc(sizeof(*a) * m);
	int (*x)[n]=malloc(sizeof(*b) * m);
	int sum[m][n]=malloc(sizeof(*sum) * m);;
	// int a[m][n];
	// int x[m][n];
	int i,j;
	
	printf("Enter first matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}	

	printf("The Sum of matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(*(sum+i)+j)=*(*(a+i)+j)+*(*(x+i)+j);
			printf("\t%d",*(*(sum+i)+j));
		}
		printf("\n");
	}	

}

