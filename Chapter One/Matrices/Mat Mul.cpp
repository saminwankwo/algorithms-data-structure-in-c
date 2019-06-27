#include <stdio.h>
#include<conio.h> 

int main()
{
   int n, i, j, k, A[10][10], B[10][10], C[10][10], sum = 0;
 
   printf("Enter the dimension of the matrix: ");
   scanf("%d", &n);
   
   printf("Enter the elements of matrix A\n");
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &A[i][j]);
 
   printf("Enter the elements of matrix B\n");
   for (i = 0; i < n; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &B[i][j]);
 
   printf("Product of entered Matrices:\n");
   for (i = 0; i < n; i++) {
      for (j = 0 ; j < n; j++) {
      	for(k = 0; k < n; k++){
      		sum = A[i][k] * B[k][j] + sum;
      	}
      	C[i][j] = sum;
      	sum = 0;
      	printf("%d\t", C[i][j]);
      }
      printf("\n\n");
   }
 	getch();
   return 0;
}
