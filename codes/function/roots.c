/* receives three coefficients a,b,c of quadratic equation ax^2+bx+c=0 as its argument 
and then calculates and displays roots */
#include <stdio.h>
#include <math.h>

void calculateroot(float ,float,float);

int main(void){
	float a,b,c;
	printf("Enter values of a , b and c: ");
	scanf("%f%f%f",&a,&b,&c);
	calculateroot(a,b,c);
}

void calculateroot(float a,float b,float c){
	float under_sq,root1,root2;
	under_sq= pow(b,2)-4*a*c;

	if(under_sq>0){
		root1= (-b+sqrt(under_sq))/(2*a);
		root2= (-b-sqrt(under_sq))/(2*a);
		printf("Roots are: %.2f and %.2f\n",root1 , root2);
	}
	else if(under_sq==0){
	    root1 = root2 = -b/(2*a);
	    printf("Roots are: %.2f and %.2f\n", root1, root2);
 	}
 	else{
	    printf("Roots are imaginary\n");
  	}
}