#include<stdio.h>
// prime number less tha   500
int prime()
{
	int i,j;
	int	n=0;
	for(i=2;i<500;i++)
	{
		for(j=1;j<=i;j++){
			if(i%j==0){
				n++;
			}
		}
		if(n==2){
			printf("%d\t",i);
		}
		n=0;
	}
	return 0;
}
int main(void)
{

	prime();

}
