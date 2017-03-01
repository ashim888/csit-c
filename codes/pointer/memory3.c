#include <stdio.h>
int main()
{
	/* code */
	int v=10, *p;
	p=&v;
	printf("address of v=%p \n",&v );

	printf("address of v=%p \n",p );

	printf("value of v=%d \n",v );
	printf("value of v=%d \n",*p );

	printf("address of p=%p \n",&p );
	
}