//Write a program that uses a “for” loop to compute and prints the sum of a given numbers of squares.
#include <stdio.h> 

int main()
{
int i, n, sum=0;
printf("Enter the number:"); 
scanf("%d",&n); 
for(i=1;i<n;i++){
	sum=i*i+sum; 
}
printf("\n Sum=%d\n",sum);
}