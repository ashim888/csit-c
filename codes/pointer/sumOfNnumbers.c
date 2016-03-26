/*

	Write a program to display element with their address using array name as a pointer

*/
#include <stdio.h>
#include <stdlib.h>
#define m 2

void firstMethod();
void secondMethod();

int main(void)
{
	//You can use both two methods but use one at a time and see the difference
	firstMethod();
	secondMethod();
	
}
void firstMethod(){
	//Here we have declared a pointer array and defined its size
	int (*arr)[m]=malloc(sizeof(*arr)*m);
	// int arr[5];
	printf("Enter the values");
	for (int i=0;i<5;i++)
	{
		//here we store values accordingly since we are dealing with values we keep *
		scanf("%d",*(arr+i));

	}
	printf("\n");
	for (int i=0;i<5;i++)
	{
		printf("%d\t",*(*(arr+i)));
	}
}

void secondMethod(){
	// Here we declare array in conventional format
	int arr[5];
	printf("Enter the values");
	for (int i=0;i<5;i++)
	{
		// here we keep value in the memory address
		scanf("%d",arr+i);

	}
	printf("\n");
	for (int i=0;i<5;i++)
	{
		//We can simply extract the value by puting * in front 
		printf("%d\t",*(arr+i));
	}	
}