#include <stdio.h>
#include <stdlib.h>
int main(){

	FILE *ccr;
	char name[20];
	int i,n;
	//int roll[10],percentage;
	ccr=fopen("test.txt","w");
	if(ccr==NULL)
	{
		printf("File cannot be created");
		exit(0);
	}
	for(i=0;i<=2;i++)
	{
		printf("Enter the name of the student %d : ",i);
		scanf("%s",name);
		fprintf(ccr, "Name = %s\n",name);
	}
	// const char *my_array[] = {"eenie","meenie","miney"};

	// fprintf(ccr, "Name = %s",name);
	// fwrite(name,sizeof(my_array),1,ccr);
	fclose(ccr);
	return 0;
}

// #include<stdio.h>

// int main ()
// {
//    FILE *fp;
//    char str[] = "This is tutorialspoint.com";

//    fp = fopen( "test.txt" , "w" );
//    fwrite(str , 1 , sizeof(str) , fp );

//    fclose(fp);
  
//    return(0);
// }