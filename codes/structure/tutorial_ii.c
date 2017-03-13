#include <stdio.h>
#include <string.h>
 
struct student 
{
   int id;
   char name[20];
   float percentage;
};

 
int main() 
{
   struct student record;

   record.id=419;
   strcpy(record.name, "ragas");
   record.percentage = 39.5;

   printf(" Id is: %d \n", record.id);
   printf(" Name is: %s \n", record.name);
   printf(" Percentage is: %f \n", record.percentage);
   return 0;
}