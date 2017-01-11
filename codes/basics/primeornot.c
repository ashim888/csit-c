// THIS PROGRAM WAS FROM STUDENT WHICH DOESN'T WORK FOR NUMBERS
#include <stdio.h>

int main(){
	int c=0,n,i=2;
	for (int j=1; j < 100; j++)
	{
		// printf("Enter a vnumber: ");
		// scanf("%d",&num);
		n=j/2;

		for(i=2;i<n;i++){
			if (j % i == 0)
			{
				c=0;
				break;
			}
			else{
				c=1;
			}
		}
		// if(c==0){
		// 	printf("%d is not a prime number\n",j );
		// }else{
		// 	printf("%d is a prime number\n",j );
		// }
		if (c!=0)
		{
			printf("%d is a prime number\n",j );
		}
	}
	// 

}