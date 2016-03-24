// 2065 BscCSIT Q.no 8
// Write a program that uses pointers to copy an array of double.

#include <stdio.h>
#include <stdlib.h>
// #define m 7
double * copy(double *arr, int size) {
    double *new_arr = malloc(sizeof(double) * size);
    for(int i=0;i<size; i++) {
        new_arr[i] = arr[i];
    }
    return new_arr;
}

int main() {
    int size;
	printf("Enter Size of an array: \t");
    scanf("%d",&size);

    double arr[size];
    for(int i=0;i<size;i++){
        scanf("%lf",&arr[i]);
    }
    printf("THE REVERSE ORDER IS:\n");
    printf("index\t\tvalue\t\taddress\n");

    double *new_arr = copy(arr, size);

	for(int i=0;i<size;i++){
    
        printf("%d\t\t%.2f\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
    
    free(new_arr);

}