#include <stdio.h>
#include <stdlib.h>
void filewrite(){
	FILE *fptr;

	fptr=fopen("/Users/ashim/Documents/colg/ccodes/codes/filehandling/test.txt","w");
	if(fptr==NULL){
		printf("\nFILE CANNOT BE CREATED");
		exit(0);
	}
	else{
		printf("File has been successfully created\n");
	}
	fputs("Well this is the first file write",fptr);
	fclose(fptr);
}
void fileread(){
	FILE *fptr;
	char s[100];
	fptr=fopen("/Users/ashim/Documents/colg/ccodes/codes/filehandling/test.txt","r");
	if(fptr==NULL){
		printf("\nFILE CANNOT BE CREATED");
		exit(0);
	}
	else{
		fgets(s,110,fptr);
		printf("This is what we got from file:\t%s\n",s);
		fclose(fptr);	
	}
	
}
int main(){
	filewrite();
	fileread();

}