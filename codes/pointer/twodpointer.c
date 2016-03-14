/* Illustration of 2D array representation in Memory */

#include <stdio.h>

int main(void){
	int p[2][3]={{1,2,3},{4,5,6}};
	printf("\np[2][3]={{1,2,3},{4,5,6}}\n");
	printf("\n\np=%p \tp+1=%p\n",p,p+1);
	printf("\n*p=%p\t*(p+1)=%p\n",*p,*(p+1));
	printf("\n*(p+0)+1=%p\t*(p+1)+1=%p\n",*(p+0)+1,*(p+1)+1);
	printf("\n*(*(p+0)+1)=%d\t\t*(*(p+1)+1)=%d\n\n",*(*(p+0)+1),*(*(p+1)+1));

}