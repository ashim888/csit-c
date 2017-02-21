
#include<stdio.h>


void twin()
{
     int j, i, count, add=0;
     int a[1000];
     for (j=3; j<500; j++)
    {
        count = 0;
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                      count++;
            }
         }
        if(count==0)
        {
                  a[add] = j;
                  add++;
        }
    }
       printf("\nTwin Primes are :  \n");
       for(i=1;i<=add;i++)
       {
              if(a[i] - a[i-1] == 2)
              {
                     printf("\t\t %d %d\n",a[i-1],a[i]);
              }
       }
}
int main()
{   
    twin();
    
    return 0;
}
