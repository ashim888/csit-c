/* Define a function myPercentage() which calculates the percentage of 
the marks in two subjects and marksGotInExams() asks for marks in two 
subjects and returns your marks and percentage to the main function.

 */

#include <stdio.h>

 int total(float a,float b){
 	
 	return a+b;
 }

float percentage(float total){

	return total/2;
}

 int main(void){
 	float a,b,mysum;
 	float myfloat;
 	printf("Enter marks in two subjects: \n");
 	scanf("%f%f",&a,&b);
 	mysum=total(a,b);

 	printf("My total in two subjects: %.2f\n", mysum);
 	
 	myfloat=percentage(mysum);
 	printf("My percentage is: %.2f \n",myfloat );

 }