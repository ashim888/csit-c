// Define a structure of employee having data members name, address, age, and salary. 
// Take data for n employee in an array dynamically and find the average salary.
#include <stdio.h> 
#include <stdlib.h> 
struct employee{
	char name[50]; 
	char add[50]; 
	int age;
	int salary;
};

int main() {
	struct employee *p; 
	int i, n;
	float avg,sum=0;
	printf("Enter the number of employee:");
	scanf("%d", &n);
	p=(struct employee *) calloc (n,sizeof(struct employee)); 
	if(p==NULL){
		exit(0);
	}
	for(i=0;i<n;i++){
		printf("Enter name:"); 
		gets((p+1)->name); 
		printf("Enter address:"); 
		gets((p+i)->add); 
		printf("Enter age:"); 
		scanf("%d",&(p+i)->age); 
		printf("Enter salary:"); 
		scanf("%d",&(p+i)->salary);
	} 

	for(i=0;i<n;i++) {
		sum=sum+(p+i)->salary;
	}
	
	avg=sum/n;
	printf("Average salary=%.2f",avg);
}