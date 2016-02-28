ASSIGNMENT
========================================================
###Functions###
1. Write a Program in C to input a number and find whether the number is exactly divisible by 5 and 7 or not using functions: 
	+	No return no argument 

	+	No return with argument 

	+	Return with no argument 

	+	Return with argument 

2.	WAP in C to input a number and check whether the number is palindrome or not using function.
3.	WAP in C to find whether the given number is prime or not using function
4.	WAP in C to print all prime number less than 500 using function
5.	WAP in C to print print TWIN PRIME less than 500 using function. [if two consecutive odd numbers are both prime then they are known as twin prime].
6.	WAP in C to convert decimal number to binary using functions
7.	WAP in C to find all the divisor of a given number using functions
8.	Write a function Power that computes X raised to the power Y for integer X and Y and return double type value.


###Recursion###
1.	Write a program in C to find factorial of a given number using Recursive Function
2.	WAP in C to generate the Fibonacci series using recursive Function. 
3.	Write a recursive function to generate the particular term in Fibonacci Series. ( eg. 8the 
term: 13). 

4.	WAP in C to display the reverse number using Recursion. 

5.	WAP to find the sum of digits entered by the user. 

6.	WAP to find the sum of Natural number up to 10 using recursion. 
7.	WAP in C to ask a number and Power to be calculated for that number. 

###C Program to Display Prime Numbers Between Intervals Using User-defined Function###
```
#include<stdio.h>
int check_prime(int num);
int main(){
   int n1,n2,i,flag;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d",&n1, &n2);
   printf("Prime numbers between %d and %d are: ", n1, n2);
   for(i=n1+1;i<n2;++i)
   {
      flag=check_prime(i);
      if(flag==0)
         printf("%d ",i);
   }
   return 0;
}
int check_prime(int num) /* User-defined function to check prime number*/
{
   int j,flag=0;
   for(j=2;j<=num/2;++j){
        if(num%j==0){
            flag=1;
            break;
        }
   }
   return flag;
}
```
###C Program to Check Prime and Armstrong Number by Making Function
(Armstrong Numbers: 0,1,153,370,371,407 etc)###
```
/* C program to check either prime number or Armstrong number depending upon the data entered by user. */
#include <stdio.h>
int prime(int n);
int armstrong(int n);
int main()
{
    char c;
    int n,temp=0;
    printf("Eneter a positive integer: ");
    scanf("%d",&n);
    printf("Enter P to check prime and  A to check Armstrong number: ");
    c=getche();
    if (c=='p' || c=='P')
    {
        temp=prime(n);
        if(temp==1)
           printf("\n%d is a prime number.", n);
        else
           printf("\n%d is not a prime number.", n);
    }
    if (c=='a' || c=='A')
    {
        temp=armstrong(n);
        if(temp==1)
           printf("\n%d is an Armstrong number.", n);
        else
           printf("\n%d is not an Armstrong number.",n);
    }
    return 0;
}
int prime(int n)
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
    {
       if(n%i==0)
       {
          flag=0;
          break;
       }
    }
    return flag;
}
int armstrong(int n)
{
    int num=0, temp, flag=0;
    temp=n;
    while(n!=0)
    {
        num+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (num==temp)
       flag=1;
    return flag;
}
```