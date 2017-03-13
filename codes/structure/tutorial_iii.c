#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student 
{
   int id;
   char name[20];
   float percentage;
}record;

 
int main() 
{
   struct student record = {0}; //Initializing to null

   record.id=419;
   strcpy(record.name, "ragas");
   printf("Enter percentage:\t");
   scanf("%f",&record.percentage);
   if (record.percentage>100)
   {
      printf("Percentage Cannot be greater than 100\n");
      exit(0);
   }

   printf(" Id is: %d \n", record.id);
   printf(" Name is: %s \n", record.name);
   printf(" Percentage is: %f \n", record.percentage);
   return 0;
}