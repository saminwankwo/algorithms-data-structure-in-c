#include<stdio.h>
#include<stdlib.h>

long linear_search(long [], long, long); //Function signature
 
int main()
{
   long array[100], search, i, n, position;
 
   printf("Enter number of elements in array: ");
   scanf("%ld", &n);
 
   for (i = 0; i < n; i++)
   {
   	printf("Input numbers %d: ", i+1);
   	scanf("%ld", &array[i]);
   }
 
   printf("\nEnter number to be searched: ");
   scanf("%ld", &search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("\n%d isn't present in the array.\n\n", search);
   else
      printf("\n%d is present at location %d.\n\n", search, position+1);

	system("pause") ;
   return 0;
} 
 
long linear_search(long a[], long n, long find){
   int i;
 
   for (i = 0; i < n; i++ ) {
      if (a[i] == find)
         return i;
   }
}
