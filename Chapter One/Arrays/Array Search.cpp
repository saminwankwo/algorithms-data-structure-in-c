#include <stdio.h>
#include<stdlib.h>

main(void) {
	int position, i, j = 0, n, item;
	
   	printf("Enter number of elements in array: ");
   	scanf("%d", &n);
   	int array[n];
 
   	printf("Enter %d elements\n", n);
   	for (i = 0; i < n; i++)
      	scanf("%d", &array[i]);
    
	printf("Enter item you wish to search for: ");
   	scanf("%d", &item);
   	
   	while( j < n){
      	if( array[j] == item ) {
         	break;
      	}
      	j = j + 1;
   	}
	
   	printf("Found element %d at position %d\n", item, j + 1);
   	system("pause");
}
