#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int num[10];
	f=fopen("read","rb");
   if(f==NULL){
      printf("FILE CAN NOT BE CREATED\n");
      exit(0);
   }
   
   printf("Things read file:\n");
   
   fread(&num,sizeof(num),1,f);
   
   for (int i = 0; i < 10; i++)
   {
      printf("%d\t",num[i]);
   }

   
   
   printf("\n");
   fclose(f);
}