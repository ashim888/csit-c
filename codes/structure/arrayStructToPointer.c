#include <stdio.h>
#include <conio.h>
//-------------------------------------
struct Example
{
  int num1;
  int num2;
}s[3];
//-------------------------------------
void accept(struct Example sptr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
  printf("\nEnter num1 : ");
  scanf("%d",&sptr[i].num1);
  printf("\nEnter num2 : ");
  scanf("%d",&sptr[i].num2);
  }
}
//-------------------------------------
void print(struct Example sptr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
  printf("\nNum1 : %d",sptr[i].num1);
  printf("\nNum2 : %d",sptr[i].num2);
  }
}
//-------------------------------------
void main()
{
int i;
accept(s,3);
print(s,3);

}