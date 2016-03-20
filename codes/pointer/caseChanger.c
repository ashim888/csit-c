#include <stdio.h>

void conversion(char *);

int main(){
	char input;
	printf("Enter character of your choice: ");
	scanf("%c",&input);

	conversion(&input);
	printf("The corresponding character is: %c\n",input );
}


void conversion(char *c){
	if (*c>=97 && *c<=122)
	{
		*c=*c-32;
	}
	else if(*c >=65 && *c<=90){
		*c=*c+32;
	}
}