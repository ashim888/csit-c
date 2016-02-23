/* WAP a program to read two arrays and merge these two arrays into third array. */
#include <stdio.h>	

int main(void)
{
	int m,n;
    int c[100];    
    printf("Enter Size of first Array: \n");
    scanf("%d",&m);
    printf("Enter Size of Second Array: \n");
    scanf("%d",&n);

    int a[m],b[n]; //Declaring array a and b with its size m and n accordingly

    int myval=m+n; //Size of the new array

    for(int i=0;i<m;i++){
    	printf("Enter value for first[%d]:",i);	
    	scanf("%d",&a[i]);
    }

    for(int i=0;i<m;i++){
		printf("Enter value for Second[%d]:",i);	
		scanf("%d",&b[i]);
	}
    
    int nbr_a = sizeof(a)/sizeof(a[0]); //this gives the actual size of an array
    int nbr_b = sizeof(b)/sizeof(b[0]);
    int i=0, j=0, k=0;

    while( i<nbr_a && j<nbr_b )
    {
        if( a[i] <= b[j] )
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while( i < nbr_a )
        c[k++] = a[i++];
    while( j < nbr_b )
        c[k++] = b[j++];

    for(i=0;i<myval;i++){
    	printf("c[%d]:%d\n",i,c[i] );
    }
}
