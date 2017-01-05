#include <stdio.h>
int main(){
	
	//fieldwidth test
	int d;	
	printf("Enter Max 5 Numbers: ");
	scanf("%5d",&d);
	printf("The value of d is %d",d );

	// Whitespace characters example
	// int d;
	// char ch;
	// printf("Enter Number: ");
	// scanf(" %d",&d);
	// printf("Enter a character: ");
	// scanf("  %c",&ch);
	// printf("\nNumber: %d \t Character: %c",d,ch);

	//Ordinary character

	// int day,year,month;
	// printf("Enter your birthdate in DD-MM-YYYY format");
	// scanf("%d-%d-%d",&day,&month,&year);
	// printf("Bithday %d/%d/%d",day,month,year);

	// String test
	// char string[10];
	// printf("Enter Your Name");
	// scanf("%s",string);
	// printf("Your Name is %s",string);

	// String test II
	// Restricts The user to only allow capital letters
	// char string[10];
	// printf("Enter Your Name in uppercase:");
	// scanf("%[A-Z]",string);
	// printf("Your Name is %s",string);

	// String test III
	// %[^\n] tells the compiler to read a string until a newline character is entered
	// char string[10];
	// printf("Enter Your Name:");
	// scanf("%[^\n]",string);
	// printf("My Name is %s",string);


}