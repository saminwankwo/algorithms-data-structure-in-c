#include <stdio.h>
#include<conio.h> 

int main()
{
   int n, m, i, j, A[10][10], C[10][10];
 
   printf("Enter the row size of the Matrix: ");
   scanf("%d", &n);
   printf("Enter the column size of the Matrix: ");
   scanf("%d", &m);
   
   printf("Enter the elements of Matrix A\n");
   for (i = 0; i < n; i++)
      for (j = 0; j < m; j++)
         scanf("%d", &A[i][j]);
 
   //Transpose the matrix A
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
      	C[i][j] = A[j][i];
      }
   }
   
   //Print the matrix C
   printf("Transpose of entered Matrix:\n");
   for(i = 0; i < m; i++){
   	for(j = 0; j < n; j++){
   		printf("%d\t", C[i][j]);
   	}
   	printf("\n\n");
   }
   getch();
   return 0;
}
