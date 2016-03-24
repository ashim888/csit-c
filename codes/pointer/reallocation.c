#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char *name;
	name=(char *)malloc(11);
	
	strcpy(name,"Ram Dev");
	printf("\nName=%s\n", name);

	name=(char *)realloc(name,23);
	strcpy(name,"Mr. Ramdev Baba");
	printf("Name=%s\n",name );

}