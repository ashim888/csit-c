#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr;
	char c;
	fptr=fopen("read","a+b");
    if(fptr==NULL){
      printf("FILE CAN NOT BE CREATED\n");
      exit(0);
   }
   fputs("WELCOME TO MY WORLD",fptr);
   rewind(fptr);
   printf("The content from file: ");
   while((c=fgetc(fptr))!=EOF){
   	printf("%c", c);
   }
   printf("\n");
   fclose(fptr);
}