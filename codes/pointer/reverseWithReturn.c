#include <stdio.h>
#include <stdlib.h>
// #define m 7
float * returnArray(float *arr, int size) {
    float *new_arr = malloc(sizeof(float) * size);
    for(int i = size-1,j=0;i>=0; i--,j++) {
        new_arr[j] = arr[i];
    }
    return new_arr;
}

int main() {
    int size;
	printf("Enter Size of an array: \t");
    scanf("%d",&size);

    float arr[size];
    for(int i=0;i<size;i++){
        scanf("%f",&arr[i]);
    }
    printf("THE REVERSE ORDER IS:\n");

    printf("index\t\tvalue\t\taddress\n");
    float *new_arr = returnArray(arr, size);

	for(int i=0;i<size;i++){
    
        printf("%d\t\t%.2f\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
    
    free(new_arr);

}