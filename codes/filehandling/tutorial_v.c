/*
*Write a program to read a file named student.txt 
*and read name roll, address and marks of a student to this file
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *f;
	char name[20],address[20];
	int roll;
	float marks;
	char filename[20];
	// printf("Enter the name of the file:\t");
	// scanf("%s",filename);

	f=fopen("student","w+");

	if(f==NULL){
		printf("FILE CANNOT BE CREATED\n");
		exit(0);
	}
	printf("Enter name of student: \t");
	scanf("%s",name);
	printf("Enter roll of student: \t");
	scanf("%d",&roll);
	printf("Enter address of student: \t");
	scanf("%s",address);
	printf("Enter marks of student: \t");
	scanf("%f",&marks);

	fprintf(f, "Name=%s\nRoll=%d\nAddress=%s\nMarks=%f",name,roll,address,marks);
	// fprintf(f, "%s ",name);
	fclose(f);
}