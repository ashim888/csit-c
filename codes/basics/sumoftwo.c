/*
Author: Ashim Lamichhane
PROGRAM: To Display Sum Of Two Numbers
*/

/* 
Step 1: Start
Step 2: Declare variables a,b and sum=0
Step 3: Operate sum=a+b
Step 4: Finally display the value of sum
Step 5: Stop
*/

#include <stdio.h>  
int main() {

  int a,b,sum = 0;
  printf("Enter Two numbers: ");
  scanf("%d%d", &a,&b);
  sum=a+b;
  printf("The Sum of two numbers is %d\n",sum);
}
