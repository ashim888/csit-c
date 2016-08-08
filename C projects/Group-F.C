#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
FILE *f,*t;
int i;
struct
{
	int id,rollno,clss,branch;
	char name[20],address[20];
}studentrecord;
void mainmenu();
void mainpage();
void heading();
void add();
void search();
void update();
void show();
void removee();
void login();
void end();
void main()
{
	mainpage();
	heading();
	login();
}
void mainpage()
{
	int a,i,n,x,y;
	int choice;
	char c,d;
	char date1[15],date2[15],string1[20];
    label3:
	clrscr();
	printf("\t\t\t\tSTUDENT MANAGEMENT SYSTEM\n");

	printf(" \t\t\tPlease Enter Today's Date to Continue\n\n\n\n");
	printf("\t\t\t\tDate(yyyy/mm/dd)\n");
	printf("\t\t\t\t");
	scanf("\t\t\t%[^\n]",date2);
	if((date2[4]!='/')||(date2[7]!='/')||(date2[5]>'3')||(date2[8]>'3'))
	{
		clrscr();

		printf("Wrong Entry");
		goto label3;
printf("\tSTUDENT \n");
printf("\t\n");
printf("\t\t\tSYSTEM \n\n\n\n");
printf("press any key to continue ");
getch();

}
}
void heading()
{
	clrscr();
	printf("\t\t|||||STUDENT MANAGEMENT SYSTEM|||||| \n");
}
void login()
{
	char username[20],password[20];
	heading();
	printf("\t\t\t\t||LOGIN PAGE||\n\n\n");
	printf("\t\t\b\b\b\bEnter Username:");
	scanf("%s",username);
	if(strcmp(username,"student")!=0)
	{
		printf("\n\t\t\b\b\b\bIncorrect Username!!\n\n");
		printf("\t\t\b\b\b\bPress 0 To Exit The System.\n");
		printf("\t\t\b\b\b\bPress 1 To Try Again\n");
		a:
		scanf("%d",&i);
		if(i>=0&&i<=1)
		{
			switch(i)
			{
				case 0:end();
				break;
				case 1:clrscr();
				heading();
				login();
				break;
				default:break;
			}
		}
		else
		{
			printf("\t\t\b\b\b\bEnter a valid number:");
			goto a;
		}
	}
	else
	{
		printf("\t\t\b\b\b\bEnter Password:");
		scanf("%s",password);
		if(strcmp(password,"password")==0)
		{
			printf("\n\n\n\t\t\tYou Have Successfully Logged In!");
			printf("\n\n\t\t\t   Press Any Key To Continue.");
			getch();
			heading();
			mainmenu();
		}
		else
		{
			printf("\n\t\t\b\b\b\bIncorrect Password!!\n\n");
			printf("\t\t\b\b\b\bPress 0 To Exit The System.\n");
			printf("\t\t\b\b\b\bPress 1 To Try Again\n");
			b:
			scanf("%d",&i);
			if(i>=0&&i<=1)
			{
				switch(i)
				{
					case 0:end();
					break;
					case 1:clrscr();
					heading();
					login();
					break;
					default:break;
				}
			}
			else
			{
				printf("\t\t\b\b\b\bEnter a valid number:");
				goto b;
			}
		}
	}
}
void mainmenu()
{
	int i,x;
	printf("\t\t\t\t ||Main Menu||\n\n\n");
	printf("Press 1 to add new records of students\n");
	printf("Press 2 to Search student records\n");
	printf("Press 3 to Update student records\n");
	printf("Press 4 to Remove student records\n");
	printf("Press 5 to Show all list of students\n");
	printf("Press 6 to Exit the Program \n");
	printf("\n  Please Enter Your Choice:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:add();
		break;
		case 2:search();
		break;
		case 3:update();
		break;
		case 4:removee();
		break;
		case 5:show();
		break;
		case 6:end();
		break;
		default:printf("Invalid Entry ");
		break;
	}
	getch();
}
void end(){}
void add()
{
	clrscr();
	heading();
	printf("\t\t\t\t||ADD ITEMS||");
	f=fopen("student.xls","a+");
	b:
	printf("\nEnter reg/id:");
	scanf("%d",&studentrecord.id);
	fprintf(f,"%d\t",studentrecord.id);
	printf("Enter student Name:");
	scanf("%s",studentrecord.name);
	fprintf(f,"%s\t",studentrecord.name);
	printf("Enter address:");
	scanf("%s",studentrecord.address);
	fprintf(f,"%s\t",studentrecord.address);
	printf("Enter rollno:");
	scanf("%d",&studentrecord.rollno);
	fprintf(f,"%d\t",studentrecord.rollno);
	printf("Enter clss:");
	scanf("%d",&studentrecord.clss);
	fprintf(f,"%d\n",studentrecord.clss);
	c:
	printf("\nEnter 0 to quit main menu.\n");
	printf("Enter 1 To Continue Adding Items\n");
	printf("Enter 2 To Return To Main Menu\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0:goto a;
		case 1:goto b;
		case 2:clrscr();
		heading();
		mainmenu();
		break;
		default:printf("Invalid Entry\n");
		goto c;
	}
	a:
	fclose(f);
}
void search()
{
		int id,x;
		clrscr();
		heading();
		printf("\t\t\t\t||SEARCH Student detail||");
		printf("\nEnter Students ID:");
		scanf("%d",&id);
		for(i=1;i<=74;i++)
			printf("*");
		printf("\nREG  ---ID\tSTUDENT NAME\tADDRESS    \tROLLNUMBER\tclss\n");
		for(i=1;i<=74;i++)
			printf("*");
		f=fopen("student.xls","r");    ////READ MODE
		x=0;
		while((fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
		{
			if(studentrecord.id==id)
			{
				printf("\n%d\t\t%s\t%s\t%d\t\t%d",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
				x++;
			}
		}
		if(x==0)
			printf("\n\n\t\t\t\tStudent Record Not Found.");
		fclose(f);
		getch();
		clrscr();
		heading();
		mainmenu();
}
void update()
{
	int x,id,stock;
	char name[20],QWERTY[20];
	clrscr();
	heading();
	printf("\t\t\t\t||UPDATE STUDENT RECORD||");
	printf("\nEnter REGISTRATION ID:");
	scanf("%d",&id);
	f=fopen("student.xls","r");
	t=fopen("temp.xls","w");
	while((fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		if(id!=studentrecord.id)
			fprintf(t,"%d\t%s\t%s\t%d\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
		else
		{
			strcpy(name,studentrecord.name);
			strcpy(QWERTY,studentrecord.address);
		}
	}
	fclose(f);
	fclose(t);
	t=fopen("temp.xls","r");
	f=fopen("student.xls","w");
	while((fscanf(t,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		fprintf(f,"%d\t%s\t%s\t%d\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
	}
	fclose(t);
	fclose(f);
	f=fopen("student.xls","a+");
	fprintf(f,"%d\t",studentrecord.id);
	fprintf(f,"%s\t",studentrecord.name);
	fprintf(f,"%s\t",studentrecord.address);
	printf("Enter NEW  ROLL NO:");
	scanf("%d",&studentrecord.rollno);
	fprintf(f,"%d\t",studentrecord.rollno);
	printf("Enter New clss:");
	scanf("%d",&studentrecord.clss);
	fprintf(f,"%d\n",studentrecord.clss);
	fclose(f);
	f=fopen("student.xls","r");
	for(i=1;i<=74;i++)
		printf("*");
	printf("\nREG  ---ID\tSTUDENT NAME\tADDRESS    \tROLLNUMBER\tclss\n");
	for(i=1;i<=74;i++)
		printf("*");
	while((fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		printf("\n%d\t\t%s\t%s\t%d\t\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
	}
	fclose(f);
	getch();
	clrscr();
	heading();
	mainmenu();
}
void show()
{
	clrscr();
	heading();
	printf("\t\t\t\t||ITEM LISTS||\n");
	for(i=1;i<=74;i++)
		printf("*");
	printf("\nREG  ---ID\tSTUDENT NAME\tADDRESS    \tROLLNUMBER\tclss\n");
	for(i=1;i<=74;i++)
		printf("*");
	f=fopen("student.xls","r");
	while((fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		printf("\n%d\t\t%s\t%s\t%d\t\t%d",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
		printf("\n");
	}
	fclose(f);
	getch();
	clrscr();
	heading();
	mainmenu();
}
void removee()
{
	int id;
	clrscr();
	heading();
	printf("\t\t\t\tREMOVE STUDENT RECORD");
	printf("\nEnter Registration ID:");
	scanf("%d",&id);
	f=fopen("student.xls","r");
	t=fopen("temp.xls","w");
	while((fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		if(id!=studentrecord.id)
		{
			fprintf(t,"%d\t%s\t%s\t%d\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
		}
	}
	fclose(f);
	fclose(t);
	t=fopen("temp.xls","r");
	f=fopen("student.xls","w");
	for(i=1;i<=74;i++)
		printf("*");
        printf("\nREG  ---ID\tSTUDENT NAME\tADDRESS    \tROLLNUMBER\tclss\n");
	for(i=1;i<=74;i++)
		printf("*");
	while((fscanf(t,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss))!=EOF)
	{
		fprintf(f,"%d\t%s\t%s\t%d\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
		fscanf(f,"%d%s%s%d%d",&studentrecord.id,studentrecord.name,studentrecord.address,&studentrecord.rollno,&studentrecord.clss);
		printf("\n%d\t\t%s\t%s\t%d\t\t%d\n",studentrecord.id,studentrecord.name,studentrecord.address,studentrecord.rollno,studentrecord.clss);
	}
	fclose(t);
	fclose(f);
	getch();
	clrscr();
	heading();
	mainmenu();
}