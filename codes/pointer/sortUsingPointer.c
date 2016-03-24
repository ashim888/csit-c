// Write a program to sort 'n' numbers in ascending order using dynamic memory.
#include <stdio.h>
#include <stdlib.h>

void get(float *,int);
void sort(float *,int);
void display(float *,int);

int main(){
	int size;
	printf("Enter the size of an array: \t");
	scanf("%d",&size);
	float *arr=(float *)malloc(size*sizeof(float));

	get(arr,size);
	sort(arr,size);
	display(arr,size);
}

void get(float *arr,int size){
	printf("Enter %d numbers: \t", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%f",arr+i);
	}
}

void sort(float *arr,int size){
	float temp;
	int i,j;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if(*(arr+i)<*(arr+j)){

				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}

void display(float *arr,int size){
	printf("Sorted  array: \t");
	for (int i = 0; i < size; i++)
	{
		printf("%.2f\n", *(arr+i));
	}	
}