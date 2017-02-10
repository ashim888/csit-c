#include<stdio.h>
#include<math.h>
//8.	Write a function Power that computes X raised to the power Y for integer X and Y and return double type value.
double power(int,int);
int main ()
{
	int x,y;
	int a,b;
	double catch;
	printf("Enter Two integers:\n");
	scanf("%d%d",&a,&b);
	catch= power(a,b);
	printf("Required ans is %e\n",catch);

}
double power (int x,int y)
{
	double p;
	p=pow(x,y);
	return p;
}
