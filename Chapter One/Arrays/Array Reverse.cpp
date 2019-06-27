#include <stdio.h>
#include<conio.h> 

main(void)
{
   int n, c, d;
 
   	printf("Enter the number of elements in array: ");
   	scanf("%d", &n);
 	int a[n], b[n];
 	
   	printf("Enter the array elements\n");
   	for (c = 0; c < n ; c++)
	   scanf("%d", &a[c]);
 
   	/*
    * Copying elements into array b starting from end of array a
    */
 
   	for (c = n - 1, d = 0; c >= 0; c--, d++)
	   b[d] = a[c];
 
   	/*
    * Copying reversed array into the original.
    * Here we are modifying original array, this is optional.
    */
 
   	for (c = 0; c < n; c++)
	   a[c] = b[c];
 
   	printf("Reversed array is: ");
   	for (c = 0; c < n; c++)
	   printf("%d  ", a[c]);
 	getch();
   	return 0;
}
