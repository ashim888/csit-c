/* 
@author: Ashim Lamichhane
PROGRAM: TO FINDOUT FIBONACCI SERIES
*/
#include <stdio.h>

int main(){

	int first=0,second=1,new,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("iteration\tfirst\tsecond\tnew");
	for(int i=0;i<=n;i++){
		if(i<=1){
			new=i;
		}
		else{
			new = first + second;
			first = second;
			second = new;
		}
		
		printf("\n%dth\t\t%d\t%d\t%d\n",i,first,second,new);
	}
	return 0;
}