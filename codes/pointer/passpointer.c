#include <stdio.h>

void addGraceMarks(int *m){
	
	*m=*m+10;

}

int main(void){
	int marks;
	printf("Enter Actual Marks\n");
	scanf("%d",&marks);
	addGraceMarks(&marks);
	printf("\nThe grace marks is : %d\n",marks);

}