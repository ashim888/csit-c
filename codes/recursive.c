#include <stdio.h> 
long int factorial(int i) { 
	if(i <= 1) {
		return 1;
	}
		
	else  {
		printf("%ld ", i* factorial(i - 1));
		return i * factorial(i - 1); 
		}
} 
int main() { 
int i = 5; 
printf("fact(i-1)\n");
printf("Factorial of %d is %ld\n", i, factorial(i)); 
return 0; 
}
