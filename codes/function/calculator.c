#include <stdio.h>
int add(int, int);
void sub(int,int);

void main(){
	int a,b,choice;
	printf("Select Any one from the below\n1.Addition\n2. Subtraction\n3. Multiplication \n4. Division\n");
	printf("Enter Any Options(1-4): ");
	scanf("%d",&choice);
	printf("Enter any Two numbers: ");
	scanf("%d%d",&a,&b);
	switch(choice){
		case 1:
			printf("Your Sum is %d: ",add(a,b));
			break;
		case 2:
			sub(a,b);
			break;
		default:
			printf("Enter Only Given Options\n");
	}
}
int add(int a, int b){
	return a+b;
}
void sub(int a,int b){
	printf("Your Subtracted value is %d\n",a-b);
}