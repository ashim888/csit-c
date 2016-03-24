/*
WAP to read number of students and then marks of each student and print average
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n,i;
	float *p,sum=0,avg;
	printf("How many students are there?\t" );
	scanf("%d",&n);
	printf("Enter Marks of each Student\n");
	
	p=(float *)malloc(n*sizeof(float));

	for (int i = 0; i < n; i++)
	{
		scanf("%f",p+i);
		sum+=*(p+i);
	}
	avg=sum/n;
	
	printf("\nThe average marks of");
	for (int i = 0; i < n; i++)
	{
		printf(" %.2f ",*(p+i) );
	}
	printf(" is: %.2f\n", avg);
	free(p);

}