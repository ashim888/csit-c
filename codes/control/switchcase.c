#include <stdio.h>
int bitwise();
int shiftOperator();
int evenOrOdd();
int gcd();
int perfectorNot();
int positiveOrNegative();
int primeOrNot();
int specialOperator();
int sumOfAll();
int sum_of_even_numbers();
int sum_of_series();

int main(void){
	int choice,value;
	LOOP:
	printf("\n\n\n\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~~~~~~~~~~~~~ MY PROGRAM TO FIND WHAT YOU WANT TO DO ~~~~~~~~~~~~~~~~\n");
	// printf("Select 1 for file, 2 for Edit and 3 for Save\n");
	printf("1==> Bitwise Operation\n2==> Shift Operation\n3==> Even Or Odd\n4==> GCD\n5==> PERFECT OR NOT\n6==> POSITIVE OR NEGATIVE\n7==> PRIME OR NOT\n8==> SPECIAL OPERATOR\n9==> SUM OF ALL\n10==> SUM OF EVEN NUMBERS\n11==> SUM OF SERIES\n12==> Sure you don\'t want to spend some time\n");
	printf("\n ENTER YOUR CHOICE: ");
	scanf("%d",&choice);

	switch(choice){

		case 1:
		printf("||||||||||||||||||||||||");
		printf("\nBitwise Operation\n");
		printf("||||||||||||||||||||||||");
		bitwise();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 2:
		printf("||||||||||||||||||||||||");
		printf("\nShift Operation\n");
		printf("||||||||||||||||||||||||");
		shiftOperator();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 3:
		printf("||||||||||||||||||||||||");
		printf("\nEven Or Odd\n");
		printf("||||||||||||||||||||||||");
		evenOrOdd();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 4:
		printf("||||||||||||||||||||||||");
		printf("\nGCD\n");
		printf("||||||||||||||||||||||||");
		gcd();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 5:
		printf("||||||||||||||||||||||||");
		printf("\nPERFECT OR NOT\n");
		printf("||||||||||||||||||||||||");
		perfectorNot();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 6:
		printf("||||||||||||||||||||||||");
		printf("\nPOSITIVE OR NEGATIVE\n");
		printf("||||||||||||||||||||||||");
		positiveOrNegative();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 7:
		printf("||||||||||||||||||||||||");
		printf("\nPRIME OR NOT\n");
		printf("||||||||||||||||||||||||");
		primeOrNot();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 8:
		printf("||||||||||||||||||||||||");
		printf("\nSPECIAL OPERATOR\n");
		printf("||||||||||||||||||||||||");
		specialOperator();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 9:
		printf("||||||||||||||||||||||||");
		printf("\nSUM OF ALL\n");
		printf("||||||||||||||||||||||||");
		sumOfAll();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 10:
		printf("||||||||||||||||||||||||");
		printf("\nSUM OF EVEN NUMBERS\n");
		printf("||||||||||||||||||||||||");
		sum_of_even_numbers();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 11:
		printf("||||||||||||||||||||||||");
		printf("\nSUM OF SERIES\n");
		printf("||||||||||||||||||||||||");
		sum_of_series();
		printf("||||||||||||||||||||||||");
		goto LOOP;

		case 12:
		printf("||||||||||||||||||||||||");
		printf("\nBYE BYE :D\n\n");
		printf("||||||||||||||||||||||||\n\n");
		break;
		
		default:
		printf("||||||||||||||||||||||||");
		printf("\n WRONG CHOICE\n");
		printf("\nPLEASE PRESS THE CORRECT OPTION\n\n");
		printf("||||||||||||||||||||||||");
		goto LOOP;
		// break;

	}
	// return 0;
}

int bitwise(){
	int n1=60,n2=51,AND, OR, XOR;
	AND=n1 & n2;
	OR=n1 | n2;
	XOR=n1 ^ n2;
	printf("\n");
	printf("AND=%d\n",AND );
	printf("OR=%d\n",OR );
	printf("XOR=%d\n",XOR );

	return 0;
}
int shiftOperator(){

	unsigned int n1=60 ,left, right;
	left =n1 << 3;
	right =n1 >> 3;
	printf("\n");
	printf("left=%d \n", left);
	printf("right=%d\n", right);
	printf("ones=%d\n", ~n1 );

	return 0;
}
int evenOrOdd(){
	int n;
	printf("\nEnter Any Number\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("The number %d is even\n", n);
	}
	else{
		printf("The number %d is odd\n", n);
	}

	return 0;
}
int gcd(){
	int num;

	printf("\nenter number n");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("the divisor %d\n",i);
 		}
	}

	return 0;
}
int perfectorNot(){
	int num;
	int sum=0;

	printf("\nenter number: ");
	scanf("%d",&num);

	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
			printf("SUM:%d\n",sum );
 		}
	}
	if(sum==num){
		printf("%d is perfect \n",num );
	}
	else{
		printf("%d is not\n", num);
	}


	return 0;
}
int positiveOrNegative(){
	int n;
	printf("\nEnter Any Number\n");
	scanf("%d",&n);
	if(n==0 ||n==-0){
		printf("The number %d is neither positive or negative\n", n);	
	}
	else if(n>0){
		printf("The number %d is positive\n", n);
	}
	else{
		printf("The number %d is negative\n", n);
	}

	return 0;
}
int primeOrNot(){

  int n, i, c = 0;
  printf("\nEnter any number n:");
  scanf("%d", &n);

  for (i=1 ; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }
  if (c == 2) {
  	printf("%d is a Prime number\n",n);
  }
  else {
 	 printf("%d is not a Prime number\n",n);
  }
  return 0; 
	// return 0;
}
int specialOperator(){
	unsigned int n1;
	printf("\n");
	printf("Integer Variable => %lu\n",sizeof(n1) );
	printf("Double Constant => %lu\n",sizeof(15.11) );
	printf("Long int Data type qualifier => %lu\n",sizeof(15L) );

	return 0;
}
int sumOfAll(){

	int num;
	int sum=0;

	printf("\nhow many numbers do you want to enter??");
	scanf("%d",&num);

	int myarr[num];

	for(int i=1;i<=num;i++){
		scanf("%d",&myarr[i]);
	}
	for(int i=1;i<=num;i++){
		sum=sum+myarr[i];
	}
	
	printf("sum of all entered numbers: %d\n",sum);	

	return 0;
}
int sum_of_even_numbers(){
	int num,sum=0,oddsum=0;
	printf("\n");
	printf("enter number n: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(i%2==0){
			printf("Even number found: %d\n",i );
			sum=sum+i;
		}
		else{
				printf("ODD number found: %d\n",i );
				oddsum=oddsum+i;
		}
		
	}

	printf("the Sum of all even numbers from 0 to %d = %d\n",num,sum);
	printf("the Sum of all even numbers from 0 to %d = %d\n",num,oddsum);
	
	return 0;
}
int sum_of_series(){
	int num,sum=0;
	printf("\n");
	printf("enter number n: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		sum=sum+i;
	}

	printf("the Sum of series from 1 to %d is %d\n",num,sum);
	return 0;
}
 
