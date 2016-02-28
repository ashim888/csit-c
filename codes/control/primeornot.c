/*
Author: Ashim Lamichhane
PROGRAM: DISPLAY IF NUMBER IS PRIME OR NOT
*/

/* 
Step 1: Start
Step 2: Initialize c=0,n and i=1
Step 3: Read any number n
Step 4: Repeat until i<=n  else go to Step 7
Step 5: Check if n divided by i leaves remainder 0
					then increase c by 1
			else:
				go to step 6
Step 6: increase counter i by 1 and go to step 4
Step 7: Stop
*/

#include <stdio.h>  
int main() {

  int n, i, c = 0;
  printf("Enter any number n:");
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
}
