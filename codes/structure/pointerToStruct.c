#include <stdio.h>
#include <string.h>

int main(void){
	struct book
	{
		char name[50];
		int pages;
		float price;
	};
	struct book b,*bptr;
	printf("Enter Book's name:\t");
	scanf("%s",b.name);

	printf("Number of Pages: \t");
	scanf("%d",&b.pages);	

	printf("Enter Price: \t");
	scanf("%f",&b.price);
	bptr=&b;
	printf("\n\n\n");         
	printf("Book name:\tPages:\tPrice\n");
	// printf("\n\nBook Info Using Pointer i.e arrow operator\n\n");
	printf("\n%s\t\t%d\t%.2f\tBook Info Using Pointer i.e arrow operator\n",bptr->name,bptr->pages,bptr->price);

	// printf("\n\nBook Info Using Pointer i.e *Operator\n\n");
	printf("\n%s\t\t%d\t%.2f\tBook Info Using Pointer i.e *Operator\n",(*bptr).name,(*bptr).pages,(*bptr).price);

	// printf("\n\nBook Info Using Structure variable i.e dot operator\n\n");
	printf("\n%s\t\t%d\t%.2f\tBook Info Using Structure variable i.e dot operator\n",b.name,b.pages,b.price);
	printf("\n\n\n");  
}