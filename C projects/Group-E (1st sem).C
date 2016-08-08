#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
FILE *f,*t;
int i;
struct
{
	int id,stock,price;
	char name[20],manufact[20];
}item;
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
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"C:\\Turboc3\\BGI");
	setcolor(12);
	settextstyle(4,0,8);
	outtextxy(225,70,"SSIX");
	settextstyle(3,0,2);
	setcolor(CYAN);
	outtextxy(195,150,"Stock Management System");
	setcolor(GREEN);
	setlinestyle(3,0,1);
	rectangle(190,90,460,180);
	setlinestyle(1,0,1);
	rectangle(185,85,465,185);
	rectangle(180,80,470,190);
	setcolor(WHITE);
	setlinestyle(1,0,3);
	rectangle(100,50,550,400);
	line(102,226,548,226);
	setlinestyle(0,0,1);
	rectangle(98,48,552,402);
	rectangle(102,52,548,398);
	line(102,225,548,225);
	line(102,228,548,228);
	outtextxy(120,240,"Project Work By:");
	settextstyle(0,0,1);
	setcolor(150);
	outtextxy(290,253,"> Sarbagya Dhaubanjar");
	outtextxy(290,273,"> Sanam Maharjan");
	outtextxy(290,293,"> Shrawan Poudel");
	outtextxy(290,313,"> Shikha Nepal");
	outtextxy(290,333,"> Shekhar Koirala");
	outtextxy(290,353,"> Saroj Bahadur Thapaliya");
	setcolor(YELLOW);
	settextstyle(0,0,0);
	outtextxy(200,383,"Please Enter Any Key To Countinue");
	getch();
	closegraph();
}
void heading()
{
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"C:\\Turboc3\\BGI");
	settextstyle(4,0,8);
	setcolor(12);
	outtextxy(90,10,"SSIX");
	settextstyle(3,0,1);
	setcolor(CYAN);
	outtextxy(300,30,"Stock Management System");
	setlinestyle(1,0,1);
	rectangle(300,55,530,90);
	setcolor(150);
	settextstyle(2,0,4);
	outtextxy(310,60,"A Project By Sarbagya,Sanam,Shrawan,");
	outtextxy(310,71,"Shikha,Shekhar,Saroj.");
	printf("\n\n\n\n\n\n\n\n\n\n");
}
void login()
{
	char username[20],password[20];
	heading();
	printf("\t\t\t\t||LOGIN PAGE||\n\n\n");
	printf("\t\t\b\b\b\bEnter Username:");
	scanf("%s",username);
	if(strcmp(username,"store")!=0)
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
		if(strcmp(password,"project")==0)
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
	int id,x;
	printf("\t\t\t\t ||Main Menu||\n\n\n");
	printf("\t\t\t\t\b\b\b\b\bAdd New Item         [1]\n");
	printf("\t\t\t\t\b\b\b\b\bSearch Item          [2]\n");
	printf("\t\t\t\t\b\b\b\b\bUpdate Stock         [3]\n");
	printf("\t\t\t\t\b\b\b\b\bRemove Item          [4]\n");
	printf("\t\t\t\t\b\b\b\b\bShow Item List       [5]\n");
	printf("\t\t\t\t\b\b\b\b\bClose                [6]\n");
	printf("\n\n\t\t\t   Please Enter Your Choice:");
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
	f=fopen("store.xls","a");
	b:
	printf("\nEnter Product ID:");
	scanf("%d",&item.id);
	fprintf(f,"%d\t",item.id);
	printf("Enter Product Name:");
	scanf("%s",item.name);
	fprintf(f,"%s\t",item.name);
	printf("Enter Manufacturer:");
	scanf("%s",item.manufact);
	fprintf(f,"%s\t",item.manufact);
	printf("Enter Stock:");
	scanf("%d",&item.stock);
	fprintf(f,"%d\t",item.stock);
	printf("Enter Unit Price:");
	scanf("%d",&item.price);
	fprintf(f,"%d\n",item.price);
	c:
	printf("\nEnter 0 To End System\n");
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
		printf("\t\t\t\t||SEARCH ITEM||");
		printf("\nEnter Product ID:");
		scanf("%d",&id);
		for(i=1;i<=74;i++)
			printf("*");
		printf("\nProduct ID\tProduct Name\tManufacturer\tStock Unit\tUnit Price\n");
		for(i=1;i<=74;i++)
			printf("*");
		f=fopen("store.xls","r");
		x=0;
		while((fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
		{
			if(item.id==id)
			{
				printf("\n%d\t\t%s\t%s\t%d\t\t%d",item.id,item.name,item.manufact,item.stock,item.price);
				x++;
			}
		}
		if(x==0)
			printf("\n\n\t\t\t\tItem Not Found.");
		fclose(f);
		getch();
		clrscr();
		heading();
		mainmenu();
}
void update()
{
	int x,id,stock;
	char name[20],manufact[20];
	clrscr();
	heading();
	printf("\t\t\t\t||UPDATE STOCK||");
	printf("\nEnter Product ID:");
	scanf("%d",&id);
	f=fopen("store.xls","r");
	t=fopen("temp.xls","w");
	while((fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		if(id!=item.id)
			fprintf(t,"%d\t%s\t%s\t%d\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
		else
		{
			strcpy(name,item.name);
			strcpy(manufact,item.manufact);
		}
	}
	fclose(f);
	fclose(t);
	t=fopen("temp.xls","r");
	f=fopen("store.xls","w");
	while((fscanf(t,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		fprintf(f,"%d\t%s\t%s\t%d\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
	}
	fclose(t);
	fclose(f);
	f=fopen("store.xls","a");
	fprintf(f,"%d\t",id);
	fprintf(f,"%s\t",name);
	fprintf(f,"%s\t",manufact);
	printf("Enter Latest Stock:");
	scanf("%d",&item.stock);
	fprintf(f,"%d\t",item.stock);
	printf("Enter New Unit Price:");
	scanf("%d",&item.price);
	fprintf(f,"%d\n",item.price);
	fclose(f);
	f=fopen("store.xls","r");
	for(i=1;i<=74;i++)
		printf("*");
	printf("\nProduct ID\tProduct Name\tManufacturer\tStock Unit\tUnit Price\n");
	for(i=1;i<=74;i++)
		printf("*");
	while((fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		printf("\n%d\t\t%s\t%s\t%d\t\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
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
	printf("\nProduct ID\tProduct Name\tManufacturer\tStock Unit\tUnit Price\n");
	for(i=1;i<=74;i++)
		printf("*");
	f=fopen("store.xls","r");
	while((fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		printf("\n%d\t\t%s\t%s\t%d\t\t%d",item.id,item.name,item.manufact,item.stock,item.price);
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
	printf("\t\t\t\t||REMOVE ITEM||");
	printf("\nEnter Product ID:");
	scanf("%d",&id);
	f=fopen("store.xls","r");
	t=fopen("temp.xls","w");
	while((fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		if(id!=item.id)
		{
			fprintf(t,"%d\t%s\t%s\t%d\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
		}
	}
	fclose(f);
	fclose(t);
	t=fopen("temp.xls","r");
	f=fopen("store.xls","w");
	for(i=1;i<=74;i++)
		printf("*");
	printf("\nProduct ID\tProduct Name\tManufacturer\tStock Unit\tUnit Price\n");
	for(i=1;i<=74;i++)
		printf("*");
	while((fscanf(t,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price))!=EOF)
	{
		fprintf(f,"%d\t%s\t%s\t%d\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
		fscanf(f,"%d%s%s%d%d",&item.id,item.name,item.manufact,&item.stock,&item.price);
		printf("\n%d\t\t%s\t%s\t%d\t\t%d\n",item.id,item.name,item.manufact,item.stock,item.price);
	}
	fclose(t);
	fclose(f);
	getch();
	clrscr();
	heading();
	mainmenu();
}