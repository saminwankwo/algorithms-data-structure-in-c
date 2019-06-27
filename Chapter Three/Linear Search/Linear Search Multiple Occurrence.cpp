#include<stdio.h>
#include<stdlib.h>
main(void)
{
   int array[100], search, i, n, count = 0;
 
   printf("Enter the number of elements in array: ");
   scanf("%d", &n);
 
   printf("Enter %d numbers. Press enter key after each number.\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("\nEnter the number to search: ");
   scanf("%d", &search);
 
   for (i = 0; i < n; i++) {
      if (array[i] == search) {
         printf("%d is present at location %d.\n", search, i+1);
         count++;
      }
   }
   if (count == 0){
   	printf("\n%d isn't present in the array.\n\n", search);
   }
   else{
   	printf("\n%d is present %d times in the array.\n\n", search, count);
   }
   system("pause");
}
