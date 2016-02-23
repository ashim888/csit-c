#include <stdio.h>
 
int main()
{
   int m, n, c, d ;
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   int matrix[m][n];
   printf("Enter the elements of matrix\n");
 
   for (c = 0; c < m; c++){
      for(d = 0; d < n; d++){
         scanf("%d",&matrix[c][d]);
      }
   }

   printf("The Entered matrix\n");
   for (c = 0; c < m; c++){
      for(d = 0; d < n; d++){
         printf("\t%d",matrix[c][d]);
      }
      printf("\n");
   }
      
   printf("\n\nTranspose of entered matrix :-\n");
 
   for (d = 0; d < m; d++) {
      for (c = 0; c< n; c++)
         printf("%d\t",matrix[c][d]);
      printf("\n");
   }
 
   return 0;
}