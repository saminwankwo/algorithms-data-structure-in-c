#include <stdio.h>
int main()
{
   int count, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements: ");
   scanf("%d", &n);
 
   for (count = 0; count < n; count++)
   {
		printf("Enter integer number %d: ", count+1);
		scanf("%d", &array[count]);
   }
 
   printf("Enter value to be searched: ");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first + last) / 2;
 
   while (first <= last)
   {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle + 1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last) / 2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the array.\n", search);
   return 0;   
}
