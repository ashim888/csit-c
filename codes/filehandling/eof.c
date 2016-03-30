#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fptr;
	char c;

	fptr=fopen("/Users/ashim/Documents/colg/ccodes/codes/filehandling/file.txt","r");
	if(fptr==NULL){
		printf("FILE CANNOT BE CREATED\n");
		exit(0);
	}
	while((c=fgetc(fptr))!=EOF){
		printf("%c", c);
	}
	fclose(fptr);
}