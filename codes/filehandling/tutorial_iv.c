#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fptr;
	char c;

	fptr=fopen("/home/ashim/backups/colg/ccodes/codes/filehandling/rambo.txt","r");
	if(fptr==NULL){
		printf("FILE CANNOT BE CREATED\n");
		exit(0);
	}
	while((c=fgetc(fptr))!=EOF){
		printf("%c", c);
	}
	printf("\n");
	fclose(fptr);
}