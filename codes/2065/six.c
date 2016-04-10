// Write a function to add, subtract, multiply and divide two complex numbers(x+iy) and (c+id).

#include<stdio.h> 
void add(int,int,int,int); void sub(int,int,int,int); void mul(int,int,int,int); void div(int,int,int,int);
int	 main() {
	int x,y,c,d,i;
	printf("Enter real and imaginary part1:"); 
	scanf("%d%d",&x,&y);
	printf("Enter real and imaginary part2:"); 
	scanf("%d%d",&c,&d);
	add(x,y,c,d);
	sub(x,y,c,d);
	mul(x,y,c,d);
	div(x,y,c,d);
}

void sub(int r1,int ip1, int r2,int ip2) {
	int realsub,imgsub;
	realsub=r1-r2;
	imgsub=ip1-ip2;
	printf("The subtraction of complex numbers=%d+i(%d)\n",realsub,imgsub);
}
void add(int r1,int ip1, int r2,int ip2) {
	int realsum,imgsum;
	realsum=r1+r2;
	imgsum=ip1+ip2;
	printf("The sum of complex numbers=%d+i(%d)\n",realsum,imgsum);
}

void mul(int r1,int ip1, int r2,int ip2) {
	int realmul,imgmul,imgmul1,imgmul2;
	realmul=r1*r2;
	imgmul=ip1*ip2;
	imgmul1=r1*ip2;
	imgmul2=r2*ip1;
	printf("The multiplication of complex numbers=%d+i(%d+%d)%d\n",realmul,imgmul1,imgmul2,imgmul); 
}
void div(int r1,int ip1, int r2,int ip2) {
	printf("The division of complex number is: DO IT YOURSELF :)\n");
	//FILL IT YOURSELF
}