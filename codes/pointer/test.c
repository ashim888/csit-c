#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define m 7
float * returnArray(float *arr, int size) {
    float *new_arr = malloc(sizeof(float) * size);
    for(int i = size-1,j=0;i>=0; i--,j++) {
        new_arr[j] = arr[i];
    }
    return new_arr;
}

int main() {

	int i,j;
	char str1[10],str2[10];
	printf("Enter first String\n");
	scanf("%s",str1);

	printf("Enter second String\n");
	scanf("%s",str2);

	// printf("%lu\n",strlen(str1) );
	for(i=0;i<strlen(str1);i++){
		for(j=0;j<strlen(str2);j++){
				if (str1[i]!=str2[j])
				{
					// printf("STRINGS NOT EQUAL\n");
				}
				else{
					printf("EQUAL\n");
					exit(0);
				}
		}
	}
}