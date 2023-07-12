#include <stdio.h>
#define B 2

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[B];
    printf("Enter information of students:\n");
    for(int i=0; i<B; ++i) {
        s[i].roll = i+1;
        printf("\nFor roll number %d\nEnter name & marks obtained : ", s[i].roll);
        scanf("%49s%f", s[i].name, &s[i].marks);
    }

    printf("\nDisplaying information of students:\n");
    for(int i=0; i<B; ++i) {
        printf("\nInformation for roll number %d:\nName: %s\nMarks: %.1f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}

/* edit made
Changed the loop variable i to be declared within the for loop header.

Combined the printf statements for getting input for name and marks into a single line.

Added the marks to the scanf function to get the input in a single line.

Removed the newline character '\n' in the second printf statement for displaying student information, and added it to the first printf statement to separate it from the input prompt.

Combined the printf statements for displaying student information into a single line to make it shorter.
*/
