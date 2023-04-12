/*
WAP to find whether the given string is palindrome or not. 
reference:
http://www.w3schools.in/c/program/check-palindrome-string/
*/

#include<stdio.h>
#include<string.h>

int main(void) {
    char string1[20];
    int i, length, flag = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i = 0; i < length; i++) {
        if(string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag) {
        printf("%s is not a palindrome\n", string1);
    }    
    else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}


/* edits made:
1.initialized flag to 0 in the same line it was declared.
2.added a statement to calculate the length of the string using strlen.
3.changed the loop condition to i < length.
4.changed the comparison in the loop to string1[length - i - 1].
5.added a return 0 statement at the end of main.
*/
