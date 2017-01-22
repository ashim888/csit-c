/*
@author: Ashim Lamichhane
PROGRAM: TO FINDOUT ALL THE DIVISOR OF ANY NUMBER
Algorithm:
---------
Step1: Start
Step2: initialize a variable i=1 and Read any number n
Step3: divide number n by i and check
		if number n/i equals to zero
			display the divisor is i and go to step4
		else
			goto step4
Step4: increase i by 1 and check 
		if i is less than n
			go to Step3
		else go to step 5
Step5: Stop

*/
#include<stdio.h>

int main(){

	int num;

	printf("enter number n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("the divisor %d\n",i);
 		}
	}
	return 0;
}
