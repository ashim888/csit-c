#include <stdio.h> 
/* With static variables */
void increment(){
	static int i=1;
	printf("%d\t",i);
	i++;
}
int main(void){
	increment();
	increment();
	increment();
	increment();
}
