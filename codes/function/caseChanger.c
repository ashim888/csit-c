#include <stdio.h>
#include <string.h>
// #define m 5

char convert(char string[30]){
	for(int i=0;i<strlen(string);i++){

		if(string[i]>=97&&string[i]<=122){
			string[i]=string[i]-32;
		}
		else{
			string[i]=string[i]+32;	
		}
	}
	printf("CHANGED: %s\n",string );
	return 0;
}

int main(void){
	char string[30];
	printf("ENTER STRING: \t");
	scanf("%s",string);
	convert(string);
}