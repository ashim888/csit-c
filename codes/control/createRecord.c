#include<stdio.h>
#include<stdlib.h>
void create_record();
void mychoice();

int main(void)
{	
	mychoice();
	// create_record();
	// getch();
}

void mychoice(){
	int choice;
	// clrscr();
	printf("\n\n\t*********************************************************\n");
	printf("\n\n\t\t\tPlease Select an option\n");
	printf("\n\n\t*********************************************************\n");
	printf("\n\n\t\t\t1. ADD RECORD:\n");
	printf("\n\n\t\t\t2. PRINT MARKSHEET\n");
	printf("\n\n\t\t\t3. ..........\n");
	printf("\n\n\t\t\t4. ..........\n");
	printf("\n\n\t\t\t5. EXIT\n");
	printf("\n\n\tPlease Enter your choice:\t");
	scanf("%d",&choice);
	
	switch(choice) 
	{
	case 1 : 
		// printf("y pressed\n");
		create_record();
		// break;
	case 2 : 
		printf("Pressed 2\n");
		break;
	case 3 : 
		printf("Pressed 3\n");
		break;
	case 4 : 
		printf("Pressed 4\n");
		break;
	case 5 : 
		printf("Pressed Exit\n");
		break;

	default : 
	 printf("\n\t*\t\tTry again");
	}
}

void create_record()
{
	int roll,it,c,prob,stat,cal;
	float total,per;
	char name[20],grade,sign='%',choice;
	printf("\n\n\t*********************************************************");
	printf("\n\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\t\t CREATE NEW RECORD \t\t\t*");
	printf("\n\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the name of the student : ");
	scanf("%s",name);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter roll no. : ");
	scanf("%d",&roll);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the marks in IT : ");
	scanf("%d",&it);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the marks in C programming : ");
	scanf("%d",&c);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the marks in probability : ");
	scanf("%d",&prob);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the marks in statistics-I : ");
	scanf("%d",&stat);
	printf("\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tEnter the marks in calculus : ");
	scanf("%d",&cal);
	printf("\t*\t\t\t\t\t\t\t*");
	total=it+c+prob+stat+cal;
	per=total/5;
	printf("\n\t*\tTotal marks obtained =  %f  ",total);
	printf("\n\t*\t\t\t\t\t\t\t*");
	printf("\n\t*\tPercentage = %f",per);printf("%c",sign);
	printf("\n\t*\t\t\t\t\t\t\t*");
	if(per>=80)
	{
		printf("\n\t*\tGrade = A");
		printf("\n\t*\t\tDISTINCTION !!! ");
	}
	if(per>=60 && per<80)
	{
		printf("\n\t*\tGrade = B");
		printf("\n\t*\t\tFIRST DIVISION !!! ");
	}
	if(per>=45 && per<60)
	{
		printf("\n\t*\tGrade = C");
		printf("\n\t*\t\tSECOND DIVISION !!! ");
	}
	if(per>=35 && per<45)
	{
		printf("\n\t*\tGrade = D");
		printf("\n\t*\t\t\tTHIRD DIVISION !!! ");
	}
	if(per<35)
	{
		printf("\n\t*\tGrade = E");
		printf("\n\t*\t\tFail !!! ");
	}
}