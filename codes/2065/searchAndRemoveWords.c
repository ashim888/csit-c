#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
 {
 char a[50],b[10];
 int i,j,temp,p[10]={0},ch,x,pos;
 printf("Enter a string\n");
 gets(a);
 printf("Enter a substring\n");
 gets(b);
 printf("\n1.Searching\n2.Deletion\nEnter your choice\n");
 scanf("%d",&ch);
 for(i=0,x=0;i<strlen(a);i++)
  {
  j=0;
  temp=0;
  if(a[i]==b[0])
   {
   pos=i;
   while(a[i]==b[j])
    {
    temp=1;
    i++;
    j++;
    }
   }
  if((j>=strlen(b))&&(temp==1))
   {
   p[x]=pos+1;
   x++;
   }
  }
 if(ch==1)
  {
  if(p[0]==0)
  printf("\nThe substring not found\n");
  else
   {
   printf("\nSubstring is found at the position:");
   for(i=0;i<x;i++)
   printf(" %d",p[i]);
   }
  printf("\n");
  exit(0);
  }
 else if(ch==2)
  {
  if(p[0]!=0)
   {
   printf("\nString after deletion\n");
   pos=0;
   for(x=0;p[x]!=0;x++)
    {
    for(i=pos;i<p[x]-1;i++)
    printf("%c",a[i]);
    pos=p[x]-1+strlen(b);
    }
   for(i=pos;a[i]!='\0';i++)
   printf("%c",a[i]);
   }
  else
  printf("\nDeletion is not possible\n");
  }
 else
 printf("\nInvalid choice\n");
 printf("\n");
 }