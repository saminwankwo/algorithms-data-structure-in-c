#include <stdio.h>
#include<stdlib.h> 

main(void)
{
   	int position, i, n, item;
 
   	printf("Enter number of elements in array: ");
   	scanf("%d", &n);
 	int array[n];
 	
   	printf("Enter %d elements\n", n);
   	for (i = 0; i < n; i++)
	   scanf("%d", &array[i]);
 
   	printf("\nEnter the location where you wish to insert an element: ");
   	scanf("%d", &position);
 
   	printf("Enter the value to insert: ");
   	scanf("%d", &item);
 
   	for (i = n - 1; i >= position - 1; i--)
	   array[i + 1] = array[i];
 
   	array[position - 1] = item;
 
   	printf("\n\nResultant array is: ");
 
   	for (i = 0; i <= n; i++)
	   printf("%d  ", array[i]);
	printf("\n\n");
   	system("pause");
}
