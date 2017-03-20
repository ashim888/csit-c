#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	struct employee
	{
		char empName[20];
		int age;
		float salary;
	};
	struct employee emp;
	FILE *fptr;
	char yes_no,name[15];
	int dataFound=0;
	fptr=fopen("read","w+b");
    if(fptr==NULL){
      printf("FILE CAN NOT BE CREATED\n");
      exit(0);
   }
   do
   {
   	printf("Employee Name: \t");
   	scanf("%s",emp.empName);
   	printf("Employee Age: \t");
   	scanf("%d",&emp.age);
   	printf("Employee salary: \t");
   	scanf("%f",&emp.salary);
   	
   	fwrite(&emp,sizeof(emp),1,fptr);
   	printf("Do you want to add another employee? Press y or Y: \t");
   	fflush(stdin);
   	yes_no=getchar();
   } while (yes_no=='Y' || yes_no=='y');

   printf("Enter the name of employee which is to be searched:\t");
   fflush(stdin);
   gets(name);
   rewind(fptr);
   
   while(fread(&emp,sizeof(emp),1,fptr)==1){
   	if (strcmp(emp.empName,name)==0)
   	{
   		dataFound=1;
   		printf("Name\tAge\tSalary\n");
   		printf("=========================");
   		printf("\n%s\t%d\t%.2f",emp.empName,emp.age,emp.salary);
   	}

   }
   if(dataFound==0){
   	printf("Matching Document Not found\n");
   }

}