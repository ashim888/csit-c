#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
FILE *fp;
int driver,mode;
void heading();
void main()
{
	char user[10],pass[10],Stream[20],update[20],search[20];
	int i,x,y,admf,mnthf,annf,lbf,driver,mode;
	driver=DETECT;
	initgraph(&driver,&mode,"");
	heading();
	settextstyle(1,0,6);
	outtextxy(200,170,"WELCOME");
	getch();
	closegraph();
	d:
	heading();
	printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter Username:");
	scanf("%s",user);
	printf("\n\n\t\tEnter Password:");
	scanf("%s",pass);
	x=strcmp(user,"MBM");
	y=strcmp(pass,"College");
	if(x==0&&y==0)
	{
	   printf("\n\n\t\tLogin Granted");
	   getch();
	   heading();
	   a:
	   printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter 1 to Insert new data\n");
	   printf("\t\tEnter 2 to Update data\n");
	   printf("\t\tEnter 3 to Search data\n");
	   scanf("%d",&i);
	   switch(i)
	   {
	    case 1: b:
		    heading();
		    fp=fopen("MBM.XLS","a");
		    printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter stream:");
		    scanf("%s",Stream);
		    fprintf(fp,"%s\t",Stream);
		    printf("\n\t\tEnter admission fee:");
		    scanf("%d",&admf);
		    fprintf(fp,"%d\t",admf);
		    printf("\n\t\tEnter monthly fee:");
		    scanf("%d",&mnthf);
		    fprintf(fp,"%d\t",mnthf);
		    printf("\n\t\tEnter annual fee:");
		    scanf("%d",&annf);
		    fprintf(fp,"%d\t",annf);
		    printf("\n\t\tEnter lab fee:");
		    scanf("%d",&lbf);
		    fprintf(fp,"%d\n",lbf);
		    fclose(fp);
		    for(i=1;i<=74;i++)
			printf("*");
		    printf("\nStream\t\tAdmission Fee\tMonthly Fee\tAnnual Fee\tLab Fee\n");
		    for(i=1;i<=74;i++)
			printf("*");
		    fp=fopen("MBM.XLS","r");
		    while((fscanf(fp,"%s%d%d%d%d",Stream,&admf,&mnthf,&annf,&lbf))!=EOF)
		    printf("\n%s\t%d\t\t%d\t\t%d\t\t%d",Stream,admf,mnthf,annf,lbf);
		    fclose(fp);
		    printf("\n\n\t\tPress 0 to return to main menu\n");
		    printf("\t\tpress 1 to enter another set of data \n");
		    printf("\t\tpress 2 to exit \n");
		    scanf("%d",&i);
		    switch(i)
		    {
			case 0:goto a;
			case 1:closegraph();
			initgraph(&driver,&mode,"");
			goto b;
			case 2:closegraph();
			initgraph(&driver,&mode,"");
			goto c;
			default:printf("Enter Valid Number");
			break;
		    }
		    break;
	    case 2:closegraph();
	    initgraph(&driver,&mode,"");
	    heading();
		   fp=fopen("MBM.XLS","r");
		   printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter stream:");
		   scanf("%s",update);
		   while((fscanf(fp,"%s%d%d%d%d",Stream,&admf,&mnthf,&annf,&lbf))!=EOF)
		   {
		       if(strcmp(update,Stream)==0)
		       {
			 fclose(fp);
			 fp=fopen("MBM.XLS","w");
			 fprintf(fp,"%s\t",Stream);
			 printf("\n\t\tEnter new admission fee:");
			 scanf("%d",&admf);
			 fprintf(fp,"%d\t",admf);
			 printf("\n\t\tEnter new monthly fee:");
			 scanf("%d",&mnthf);
			 fprintf(fp,"%d\t",mnthf);
			 printf("\n\t\tEnter new annual fee:");
			 scanf("%d",&annf);
			 fprintf(fp,"%d\t",annf);
			 printf("\n\t\tEnter lab fee:");
			 scanf("%d",&lbf);
			 fprintf(fp,"%d\t",lbf);
			 fclose(fp);
			 fp=fopen("MBM.XLS","r");
			 fscanf(fp,"%s%d%d%d%d",Stream,&admf,&mnthf,&annf,&lbf);
			 for(i=1;i<=74;i++)
			 printf("*");
			 printf("\nStream\t\tAdmission Fee\tMonthly Fee\tAnnual Fee\tLab Fee\n");
			 for(i=1;i<=74;i++)
			 printf("*");
			 printf("\n%s\t%d\t\t%d\t\t%d\t\t%d\n",Stream,admf,mnthf,annf,lbf);
		       }
		   }
		   break;
	    case 3:closegraph();
	    initgraph(&driver,&mode,"");
	    heading();
		   printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter stream to search:");
		   scanf("%s",search);
		   fp=fopen("MBM.XLS","r");
		   for(i=1;i<=74;i++)
			printf("*");
		   printf("\nStream\t\tAdmission Fee\tMonthly Fee\tAnnual Fee\tLab Fee\n");
		   for(i=1;i<=74;i++)
			printf("*");
		   while((fscanf(fp,"%s%d%d%d%d",Stream,&admf,&mnthf,&annf,&lbf))!=EOF)
		   {
		       if(strcmp(search,Stream)==0)
		       {
			 printf("\n%s\t%d\t\t%d\t\t%d\t\t%d\n",Stream,admf,mnthf,annf,lbf);
		       }
		   }
		   fclose(fp);
		   getch();
		   break;

	   }

	}
	else
	{
		printf("\n\n\t\tLogin failed");
		printf("\n\t\tEnter 1 to end the program\n\t\tEnter 0 to try again");
		e:
		scanf("%d",&i);
		switch(i)
		{
		    case 0:goto d;
		    case 1:goto c;
		    default:printf("\n\t\tenter either 0 or 1");
		    goto e;
		}
	}
	c:
	getch();
}
void heading()
{

     driver=DETECT;
     initgraph(&driver,&mode,"");
     settextstyle(4,0,4);
     outtextxy(90,10,"Madan Bhandari Memorial College");
     settextstyle(1,0,2);
     outtextxy(165,50,"Vinayaknagar,Kathmandu");
     settextstyle(1,0,3);
     outtextxy(230,70,"Project On");
     settextstyle(1,0,3);
     outtextxy(155,100,"FEE MANAGEMENT SYSTEM");
}