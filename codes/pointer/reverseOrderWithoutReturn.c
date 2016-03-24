// Q no 8. BSCcsit 2066 
/* Write a function that is passed an array of n pointers to floats 
and returns a newly created array that contains those n float values in reverse order. */

#include <stdio.h>
#include <stdlib.h>

float reverse(float *addr,int n); 

int main(){
    int size;
    
    //ask user to enter the size of an array
    printf("Enter Size of an array: \t");
    scanf("%d",&size);
    
    //declaring the size of an array
    float *myarr=(float *)malloc(sizeof(float) * size);
    float *catcharray=(float *)malloc(sizeof(float) * size);

    //take input from user
    for(int i=0;i<size;i++){
        scanf("%f",myarr+i);
    }
    reverse(myarr,size);
}

float reverse(float *addr,int n){
    printf("THE REVERSE ORDER IS:\n");

    float *myrev=(float *)malloc(sizeof(float) * n);
    printf("index\t\tvalue\t\taddress\n");
    for(int i=n-1,j=0;i>=0;i--,j++){
        myrev[j]=*(addr+i);
        printf("%d\t\t%.2f\t\t%p\n",j,*(myrev+j),myrev+j);
    }
    return 0;

}



