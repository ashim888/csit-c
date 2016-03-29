#include <stdio.h>
#include <stdlib.h>

// The C library function 
// void rewind(FILE *stream) sets the file position to the beginning of the file of the given stream.
int main()
{
   FILE *fptr;
   int i, numFromFile;
   fptr=fopen("read","w+");
   if(fptr==NULL){
      printf("FILE CANNOT BE CREATED\n");
      exit(0);
   }
   for (i = 1; i <=20; i++)
   {
      fprintf(fptr, "%d\n", i);
   }
   rewind(fptr);

   printf("The twice of natural number:\n");
   for (int i = 1; i <=20; i++)
   {
      fscanf(fptr,"%d\n",&numFromFile);
      printf("%d\t", numFromFile*2);
   }
   printf("\n");
   fclose(fptr);
}