#include <stdio.h>
#include <conio.h>

void display(char empName[], int id, float sa1){
	printf("Name: %s\n", empName);
	// printf("%s\n",empName);
	printf("Employee id%d\n",id);
	printf("Salary: %.1f\n",sa1);
}

void main(){
	struct employee
	{
		char name[20];
		int id;
		float salary;
	};
	struct employee emp;
	
	printf("Employee Name:\t");
	scanf("%s",emp.name);

	printf("Employee id:\t");
	scanf("%d",&emp.id);

	printf("Salary of the Employee:\t");
	scanf("%f",&emp.salary);

	display(emp.name,emp.id,emp.salary);

}