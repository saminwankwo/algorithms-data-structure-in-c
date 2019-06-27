#include <stdio.h>
#include<conio.h> 

int main()
{
   int m, n, c, d, A[10][10], B[10][10], C[10][10];
 
   printf("Enter the number of rows of the matrix: ");
   scanf("%d", &m);
   printf("Enter the number of columns of the matrix: ");
   scanf("%d", &n);
   
   printf("Enter the elements of matrix A\n");
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &A[c][d]);
 
   printf("Enter the elements of matrix B\n");
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &B[c][d]);
 
   printf("Sum of entered matrices:\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         C[c][d] = A[c][d] + B[c][d];
         printf("%d\t", C[c][d]);
      }
      printf("\n\n");
   }
 	getch();
   return 0;
}
