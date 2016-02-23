#include <stdio.h>
int main(){
    char name[30],ch;
    int i=0;
    printf("Enter name: ");
    while(ch!='\n')    // terminates if user hit enter
    {
        ch=getchar();
        name[i]=ch;
        i++;
    }
    name[i]='\0';       // inserting null character at end
    printf("Name: %s",name);
    return 0;
}