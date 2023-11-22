#include<stdio.h>
#include<stdlib.h>

void create_record();

void mychoice();

char calc_grade(int per);

char *format_grade_message(char grade);

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
		break;
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
	char name[20],grade,sign='%';
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
	grade = calc_grade(per);
	printf("\n\t*\tGrade = %c", grade);
	printf("\n\t*\t\t\t%s !!! ", format_grade_message(grade));
}

char calc_grade(int per)
{
	if (per >= 80)
		return 'A';
	else if (per >= 60)
		return 'B';
	else if (per >= 45)
		return 'C';
	else if (per >= 35)
		return 'D';
	else
		return 'E';
}

char *format_grade_message(char grade)
{
	switch (grade)
	{
	case 'A' :
		return "DISTINCTION";
	case 'B' :
		return "FIRST DIVISION";
	case 'C' :
		return "SECOND DIVISION";
	case 'D' :
		return "THIRD DIVISION";
	default :
		return "Fail";
	}
}
