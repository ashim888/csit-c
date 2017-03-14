#include <stdio.h>
#define m 2

struct student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct student s[m];
    int i;
    printf("Enter information of students:\n");
    for(i=0;i<m;++i)
    {
        s[i].roll=i+1;
        printf("\nFor roll number %d\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying information of students:\n\n");
    for(i=0;i<m;++i)
    {
        printf("\nInformation for roll number %d:\n",i+1);
        printf("Name: %s",s[i].name);
        // puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
   }
   return 0;
}


