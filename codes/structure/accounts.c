#include <stdio.h>

struct account {                  // Account Structure
	int id;
	int money;
	char name[30];
};

int number;


void main() {
	int id,x,input_money;
	char name[50];
	struct account accountarray[50];
	
	printf("How many Number of accounts do you want to enter? ");
	scanf("%d",&x);
	printf("--Make Account--\n");
	for (int i = 0; i < x; i++)
	{
		
		printf("Input ID : ");
		scanf("%d", &accountarray[i].id);
		printf("Insert Money : ");
		scanf("%d", &accountarray[i].money);
		printf("Your Name? : ");
		scanf("%s", accountarray[i].name);
		printf("\n");
	}
	printf("****RECORD INSERTED****\n");
	for (int i = 0; i < x; i++)
	{
		printf("\nID: %d",accountarray[i].id);
		printf("\nNAME: %s",accountarray[i].name);
		printf("\nMONEY: %d",accountarray[i].money);
		
		
	}
	

	// accountarray[number++] = NULL;                // I think there's a problem in this side
	// accountarray[number++]->id = id;
	// accountarray[number++]->money = input_money;
	// *accountarray[number++]->name = name;
}