/* Insertion sort ascending order */
 
#include <stdio.h>
#include<stdlib.h>

int main()
{
  	int n, i, d, t;
 
  	printf("Enter number of elements: ");
  	scanf("%d", &n);
	int array[n];
  	
	  printf("Enter %d integers\n", n);
 
  	for(i = 0; i < n; i++) {
    	scanf("%d", &array[i]);
  	}
 
  	for(i = 1 ; i <= n - 1; i++) {
    	d = i;
 
    	while ( d > 0 && array[d-1] > array[d]) {
      		t = array[d];
      		array[d] = array[d-1];
      		array[d-1] = t;
 
      		d--;
    	}
  	}
 
  	printf("Sorted list in ascending order: ");
 
  	for (i = 0; i <= n - 1; i++) {
    	printf("%d  ", array[i]);
  	}
  	printf("\n"); //Print empty line
	system("pause");
  	return 0;
}
