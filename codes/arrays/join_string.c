#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[30];

    printf("\nEnter String 1 :");
    scanf("%s",a);
    printf("\nEnter String 2 :");
    scanf("%s",b);

    int i, j;

    i = strlen(a);
    printf("i\tj\ta[i]\t[j]\n");
    for (j = 0; b[j] != '\0'; i++, j++) {
        printf("%d\t%d\ta[%d]\t%c\n",i,j,i,b[j]);
        a[i] = b[j];
    }

    a[i] = '\0';
    printf("Concated string is :%s\n", a);
}