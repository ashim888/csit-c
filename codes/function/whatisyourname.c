#include <stdio.h>

char s[10];

char* without_an_argument()	// OR char return_and_pass(char *s)
{
	printf("Enter Your Name: ");
	scanf("%s",s);
	return s;
}

char* passing_an_argument(char *s){
	printf("Enter Your Name: ");
	scanf("%s",s);
	return s;	
}
 
void call_with_argument(){
	char *c;
	char d[10];
	c=passing_an_argument(d);
	printf("The Name is %s\n",c);
}

void call_without_argument(){
	char *c;
	c=without_an_argument();
	printf("The Name is %s\n",c);
}

int main()
{
	int i;
	printf("1. To Pass string as an arguement\n2. To Pass string without an arguement\n\nEnter Your Choice: ");
	scanf("%d",&i);
	switch(i){
		case 1:
			// Call with passing String
			call_with_argument();		
			break;
		case 2:
			// call without passing String
			call_without_argument();
			break;		

		default:
			printf("You Entered Incorrect Choice\nHave A Nice Day :)\n");
	}
	
	return 0;
}