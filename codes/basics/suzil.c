/* finding prime number
 if there is any number between [2,half of given number] that divides our given number with remainder 0  then it is not prime(composite) else it is prime. */
#include <stdio.h>

int main (){
    int a,c;
    printf ("Enter any number : ");
    scanf("%d",&a);
    for(int i = 2;i<=a/2;i++){
        if(a%i==0){
            c=1;
            break;
           
        }
    }
    if(c==1){
        printf("%d is composite",a);
    }
    else{
        printf("%d is prime",a);
    }
}
