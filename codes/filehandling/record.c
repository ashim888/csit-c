#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int num[10],i;
	f=fopen("read","wb");
   if(f==NULL){
      printf("FILE CAN NOT BE CREATED\n");
      exit(0);
   }
   
   printf("Enter 10 numbers:\n");
   for (int i = 0; i < 10; i++)
   {
      scanf("%d",&num[i]);
   }

   fwrite(&num,sizeof(num),1,f);
   
   printf("\n");
   fclose(f);
}