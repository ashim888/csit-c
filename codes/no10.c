/*
WAP to find whether the given string is palindrome or not. 
reference:
http://www.w3schools.in/c/program/check-palindrome-string/
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    for(i=0;i < strlen(string1);i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
	   }
	}
    
    if (flag) {
        printf("%s is not a palindrome\n", string1);
    }    
    else {
        printf("%s is a palindrome\n", string1);
    }
    
}