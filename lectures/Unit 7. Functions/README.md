ASSIGNMENT
========================================================

[![Image of Slide](http://image.slidesharecdn.com/functions-160229095817/95/unit-7-functions-1-638.jpg?cb=1456764314)](http://www.ashimlamichhane.com.np/2016/08/unit-7-functions/)

EXAMPLE
========================================================
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
###C Program to Check Prime and Armstrong Number by Making Function###
*(Armstrong Numbers: 0,1,153,370,371,407 etc)*
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