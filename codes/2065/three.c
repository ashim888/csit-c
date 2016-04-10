/* Write a program for the interest charged in installments for following case. 
A cassette player costs Rs. 2000. A shopkeeper sells it for Rs. 100 down payment and Rs. 100 for 21 more months. 
What is the monthly interest Charged?
*/

#include <stdio.h> 
// #include <conio.h>
int main(){
	float c_price,t_price,t_interest,m_interest; //cost price, total price, total interest, monthly interest
	c_price=2000;
	t_price=100+(100*21);//down payment Rs. 100 and Rs. 100 for 21 installments 
	t_interest=(t_price-c_price)/c_price*100;
	m_interest=t_interest/22;//payment is for 22 months
	printf("\nThe monthly interest charged is %.2f\n",m_interest); //result is 0.45% per month 
}