#include <stdio.h>

void count_to_ten ( int count )
{
    /* we only keep counting if we have a value less than ten */
       if ( count < 10 )   
       {
	printf("\nbefore call %d",count);
           count_to_ten( count + 1 );
	printf("\n:after call %d",count);
       }
}
int main()
{
  count_to_ten ( 0 ); 
}
