#include <stdio.h>

struct Employee
{
   char ename[20];
   int id;
   float salary;
   struct date
       {
       int date;
       int month;
       int year; 
       }doj;
}emp = {"Pritesh",1000,1000.50,{22,6,1990}};

int main()
{
  printf("\n\n\n");    
printf("\nEmployee Name   : %s",emp.ename);  
printf("\nEmployee SSN    : %d",emp.id);  
printf("\nEmployee Salary : %f",emp.salary);  
printf("\nEmployee DOB    : %d/%d/%d", \
         emp.doj.date,emp.doj.month,emp.doj.year);  
printf("\n\n\n");    
return 0;
}