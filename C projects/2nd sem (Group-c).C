#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
FILE *fp,*rp,*bp;
time_t t;
void login();
void booking();
void seat();
void ticket();
void main()
{
	int gd = DETECT,gm;
	int a;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	settextstyle(7,0,5);
	outtextxy(80,20,"Welcome to 2MPRCUBE");
	settextstyle(4,0,3);
	delay(100);
	outtextxy(190,70,"Baneshwor,Kathmandu");
	settextstyle(3,0,3);
	setlinestyle(2,1,4);
	line(100,200,600,200);
	line(100,330,600,330);
	line(250,200,250,330);
	line(420,200,420,330);
	setcolor(12);
	outtextxy(150,170,"Developed on cordination of Group C");
	outtextxy(250,200,"-Menuka");
	outtextxy(250,220,"-Mijan");
	outtextxy(250,240,"-Pemba");
	outtextxy(250,260,"-Rinju");
	outtextxy(250,280,"-Rojendra");
	outtextxy(250,300,"-Rupendra");
	setcolor(RED);
	setlinestyle(3,2,3);
	rectangle(60,30,570,100);
	setcolor(GREEN);
	rectangle(40,20,600,130);

	setcolor(WHITE);
	settextstyle(1,0,1);
	outtextxy(200,340,"Press Any Key To Continue");
	getch();
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setlinestyle(1,0,11);
	setcolor(GREEN);
	line(10,150,700,150);
	line(10,250,700,250);
	line(10,160,700,160);
	line(10,240,700,240);
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress 1 for Administrator Login \n\n\t\tPress 2 for Ticket booking\n\n\n\t\t\t=>" );
	scanf("%d",&a);
	closegraph();
	switch(a)
	{
		case 1:login();
		       break;
		case 2:booking();
		       ticket();
		       break;
	}
	clrscr();
	cleardevice();
	printf("\n\n\n\n\n\n\n\n\n\n\t\tThank-You for co-operating with us");
	getch();
}
void login()
{
       char user[10], pass[10],name[20];
       int a,x,y,gd=DETECT,gm,b;
       clrscr();
       d:
       clrscr();
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter username:");
       scanf("%s",user);
       printf("\t\tEnter password:");
       scanf("%s",pass);
       x=strcmp(user,"ADMIN") ;
       y=strcmp(pass,"*****");
       if(x==0&&y==0)
       {
	    clrscr();
	    initgraph(&gd,&gm,"C:\\TC\\BGI");
	    settextstyle(4,0,5);
	    outtextxy(120,100,"Login granted");
	    getch();
	    cleardevice();
	    setcolor(RED);
	    line(70,150,500,150);
	    line(70,250,500,250);
	    setcolor(BLUE);
	    line(70,170,500,170);
	    line(70,230,500,230);
	    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t Press 1 for Updating 2d movies\n\n\t\t Press 2 for updating 3d movies\n\n\n\t\t\t=>");
	    scanf("%d",&b);
	    switch(b)
	    {

		case 1:
		clrscr();
		cleardevice();
		       fp=fopen("theatre.txt","w");
		       fprintf(fp," ");
		       fclose(fp);
		       back:
		       fp=fopen("theatre.txt","a");
		       rp=fopen("record.txt","a");
		       printf("\n\n\n\t\t\tEnter new movie name:");
		       scanf("%s",name);
		       fprintf( fp,"%s\t",name);
		       fprintf(rp,"%s\t",name);
		       printf("\t\tEnter 1 to update more  movies\n\t\t=>");
		       fclose(fp);
		       fclose(rp);
		       scanf("%d",&a);
		       if(a==1)
		       goto back;
		       break;
		case 2:
		       clrscr();
		       cleardevice();
		       fp=fopen("theatre2.txt","w");
		       fprintf(fp," ");
		       fclose(fp);
		       fp=fopen("theatre2.txt","a");
		       rp=fopen("record2.txt","a");
		       printf("\n\n\n\n\n\t\tEnter new movie name:");
		       scanf("%s",name);
		       fprintf(fp,"%s\t",name);
		       fprintf(rp,"%s\t",name);
		       fclose(fp);
		       fclose(rp);
		       break;

	    }
	    clrscr();
	    cleardevice();
	    printf("\n\n\n\n\n\n\n\n\n\n\t\tUpdate Completed");
      }


       else
       {
	    clrscr();
	    printf("\n\n\n\n\n\n\n\n\n\n\t\t Login failed");
	    printf("\n\t\tPress 1 to try again\n\t\tPress 2 to exit\n\t\t=>");
	    c:
	    scanf("%d",&b);
	    switch(b)
	    {
		 case 1: goto d;
		 case 2:goto e;
		 default:printf("\n\t\tEnter either 1 or 2");
		 goto c;

	    }
       }
       e:
       getch();
}
void booking()
{

		int gd=DETECT,gm;

		int m,n,i;
		char name1[20],name2[20],name3[20],name[20];
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		setcolor(GREEN);
		line(10,150,700,150);
		line(10,220,700,220);
		printf("\n\n\n\n\n\n\n\n\n\n\t\tPress 1 for 7:00-10:00 show\n\t\tPress 2 for 12:00-3:00 show\n\t\tPress 3 for 4:00-7:00 show\n\n\t\t\t=>");
		scanf("%d",&n);

		clrscr();
		cleardevice();
		switch(n)
		{
			case 1:
			       setcolor(GREEN);
			       setlinestyle(0,0,0);
			       line(10,130,700,130);
			       line(10,200,700,200);
			       printf("\n\n\n\n\n\n\n\n\n\n\t\t Press 1 for 2d Movie\n\t\t Press 2 for 3d Movie\n\n\n\t\t\t=>");
			       scanf("%d",&m);
			       clrscr();
			       cleardevice();
			       if(m==1)
			       {
				     bp=fopen("bill.txt","w");
				     fp=fopen("theatre.txt","r");
				     fscanf(fp,"%s%s%s",name1,name2,name3);
				     initgraph(&gd,&gm,"C:\\TC\\BGI");
				     setcolor(GREEN);
				     setlinestyle(3,0,4);
				     line(10,170,700,170);
				      line(10,230,700,230);
				     printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress 1 for Movie:%s\n\t\tPress 2 for Movie:%s\n\t\tPress 3 for Movie:%s\n\n\t\t\t=>",name1,name2,name3);
				     printf(">");
				     scanf("%d",&i);
				     switch(i)
				     {
					case 1:printf("\n\t\tYour movie is %s",name1);
					fprintf(bp,"7:00-10:00 %s 01 200",name1);
						break;
					case 2:printf("\n\t\tYour movie is %s",name2);
					fprintf(bp,"7:00-10:00 %s 02 200",name2);
						break;
					case 3:printf("\n\t\tYour movie is %s",name3);
					fprintf(bp,"7:00-10:00 %s 03 200",name3);
						break;
					}
				     getch();
				     fclose(fp);
				     fclose(bp);
			       }
				if(m==2)
			       {
				  setcolor(GREEN);
			       setlinestyle(0,0,0);
			       line(10,130,700,130);
			       line(10,200,700,200);
			       fp=fopen("theatre2.txt","r");
			       fscanf(fp,"%s",name);
			       printf("\n\n\n\n\n\n\n\n\n\n\t\tYour movie is:%s",name);
			       getch();
			       fclose(fp);
			       bp=fopen("bill.txt","w");
			       fprintf(bp,"7:00-10:00 %s 04 300",name);
			       fclose(bp);
			      }
			      break;
			case 2:
				line(10,150,700,150);
				line(10,200,700,200);
			       printf("\n\n\n\n\n\n\n\n\n\n\t\t Press 1 for 2d Movie\n\t\t Press 2 for 3d Movie\n\n\t\t\t=>");
			       scanf("%d",&m);
			       clrscr();
			       cleardevice();
			       if(m==1)
			       {
				line(10,150,700,150);
				line(10,230,700,230);
				     bp=fopen("bill.txt","w");
				     fp=fopen("theatre.txt","r");
				     fscanf(fp,"%s%s%s",name1,name2,name3);
				     printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress 1 for Movie:%s\n\t\tPress 2 for Movie:%s\n\t\tPress 3 for Movie:%s\n\n\t\t\t=>",name1,name2,name3);
				     printf(">");
				     scanf("%d",&i);
				     switch(i)
				     {
					case 1:printf("\n\t\tYour movie is %s",name1);
					fprintf(bp,"12:00-15:00 %s 01 200",name1);
						break;
					case 2:printf("\n\t\tYour movie is %s",name2);
					fprintf(bp,"12:00-15:00 %s 02 200",name2);
						break;
					case 3:printf("\n\t\tYour movie is %s ",name3);
					fprintf(bp,"12:00-15:00 %s 03 200",name3);
						break;
					}
				     getch();
				     fclose(fp);
				     fclose(bp);
			       }
				if(m==2)
			       {
				  setcolor(GREEN);
			       setlinestyle(0,0,0);
			       line(10,130,700,130);
			       line(10,200,700,200);
			       fp=fopen("theatre2.txt","r");
			       fscanf(fp,"%s",name);
			       printf("\n\n\n\n\n\n\n\n\n\n\t\tYour movie is:%s",name);
			       getch();
			       fclose(fp);
			       bp=fopen("bill.txt","w");
			       fprintf(bp,"12:00-15:00 %s 04 300",name);
			       fclose(bp);
			      }
			      break;
			case 3:
				line(10,150,700,150);
				line(10,200,700,200);
			printf("\n\n\n\n\n\n\n\n\n\n\t\t Press 1 for 2d Movie\n\t\t Press 2 for 3d Movie\n\n\t\t\t=>");
			       scanf("%d",&m);
			       clrscr();
			       cleardevice();
			       if(m==1)
			       {
				     bp=fopen("bill.txt","w");
				     fp=fopen("theatre.txt","r");
				     fscanf(fp,"%s%s%s",name1,name2,name3);
				     printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress 1 for Movie:%s\n\t\tPress 2 for Movie:%s\n\t\tPress 3 for Movie:%s\n\n\t\t\t=>",name1,name2,name3);
				     printf(">");
				     scanf("%d",&i);
				     switch(i)
				     {
					case 1:printf("\n\t\tYour movie is %s",name1);
					fprintf(bp,"16:00-19:00 %s 01 200",name1);
						break;
					case 2:printf("\n\t\tYour movie is %s",name2);
					fprintf(bp,"16:00-19:00 %s 02 200",name2);
						break;
					case 3:printf("\n\t\tYour movie is %s",name3);
					fprintf(bp,"16:00-19:00 %s 03 200",name3);
						break;
					}
				     getch();
				     fclose(fp);
				     fclose(bp);
			       }
				if(m==2)
			       {
			       setcolor(GREEN);
			       setlinestyle(0,0,0);
			       line(10,130,700,130);
			       line(10,200,700,200);
			       fp=fopen("theatre2.txt","r");
			       fscanf(fp,"%s",name);
			       printf("\n\n\n\n\n\n\n\n\n\n\t\tYour movie is:%s",name);
			       getch();
			       fclose(fp);
			       bp=fopen("bill.txt","w");
			       fprintf(bp,"16:00-19:00 %s 04 300",name);
			       fclose(bp);
			      }
			      break;
			}


		}
void ticket()
{
	int gd = DETECT,gm;

	char h[4],n[20],tt[20],p[5];
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	cleardevice();
	settextstyle(7,0,5);
	outtextxy(80,20,"Welcome to 2MPRCUBE");
	settextstyle(4,0,3);
	delay(100);
	outtextxy(190,70,"Baneshwor,Kathmandu");
	setlinestyle(3,2,3);
	rectangle(60,30,570,100);
	setcolor(GREEN);
	rectangle(40,20,600,130);
	outtextxy(210,130,"Booking confirmed");
	time(&t);
	printf("\n\n\n\n\n\n\n\n\n\n\t\tShow Date:%s",ctime(&t));
	bp=fopen("bill.txt","r");
	fscanf(bp,"%s%s%s%s",tt,n,h,p);
	printf("\n\tShow Time:%s",tt);
	printf("\n\tShow Name:%s",n);
	printf("\n\tHall No.:%s",h);
	printf("\n\tPrice:Rs.%s",p);
	srand(time(NULL));
	printf("\n\tSeat No.:%d",rand()%400);

	getch();
}


