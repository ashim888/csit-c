#include <stdio.h> 
long int factorial(int i) { 
	if(i <= 1) 
		return 1;
	else  
		return i * factorial(i - 1); 
} 
int main() { 
int i; 
printf("Enter any Number: \n");
scanf("%d",&i);
printf("Factorial of %d is %ld\n", i, factorial(i)); 
return 0; 
}
