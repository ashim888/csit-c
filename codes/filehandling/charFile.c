#include <stdio.h>
#include <stdlib.h>

void filewrite(){
	FILE *fptr;
	char filename[20];
	char c;
	printf("Enter the name of the file:\t");
	scanf("%s",filename);
	fptr=fopen(filename,"w");

	if(fptr!=NULL){
		printf("\nEnter Text. Hit enter key to stop writing:\t");
		// for (c = 'A' ; c <= 'Z' ; c++){
 		//	fputc ( c , fptr );
  		//}
		while((c=getchar())!='\n'){
			fputc(c,fptr);	
      		}
		fclose(fptr);
	}
	//calls fileread function and passes the name of the file
	fileread(filename);
}

void fileread(char myfilename[]){
	FILE *fptr;
	// char filename[20];
	char c;
	int n=0;
	fptr=fopen(myfilename,"r");
	
	if (fptr==NULL) {
		printf("\nFILE CANNOT BE OPENED");
		exit(0);
	}
  	else{
    	do {
		      c = fgetc (fptr);
		      if (c == '$') 
		      	{
		      		n++;
		      	}
    	} while (c != EOF);
    fclose (fptr);
    printf ("The file contains %d dollar sign characters ($).\n",n);
  }
	
}
int main(){
	filewrite();
	// fileread();

}