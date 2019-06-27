#include<stdio.h>
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
    
	printf("Enter the position you wish to update: ");
   	scanf("%d", &position);
   	
   	printf("Enter new item to update the position: ");
   	scanf("%d", &item);
   	
   	array[position - 1] = item;
   	
   	printf("The array elements after update operatio: ");	
   	for(i = 0; i<n; i++) {
	   printf("%d   ", array[i]);
   	}
   	printf("\n");
   	system("pause");
}
