#include<stdio.h>
#include<conio.h>
main(void)
{
	int n, i, elem, loc = -1;  //variable declaration and initialization
	printf("\nEnter the number of element:"); //prompt to enter number of elements
	scanf("%d", &n); //get the number and stores it in variable n
	int a[n]; //creates an integer array, a, of size n
	for(i = 0; i <= n - 1; i++) //loop n-times (ie from 0 to n-1)
	{
		printf("Enter integer number %d: ", i+1); //prompt to enter i-th integer number
		scanf("%d", &a[i]);  //get i-th number and store in the array
	}
	printf("Enter element to be searched: "); //prompt to enter element to search
	scanf("%d", &elem);  //gets the element to search and stores in variable elem
	for(i = 0; i <= n - 1; i++)  //loop through the integer array n-times
	{
		if(elem == a[i]) //if element is equal to i-th integer
		{
			loc = i;  //assign value of variable i to variable loc
			break; //jump out of the loop
		}
	}
	if(loc >= 0) //if value of variable loc is greater than or equal to 0
		printf("\n%d is found in position %d", elem, loc+1); //element is found and printed
	else  //otherwise
		printf("\nElement not found!"); //element is not found
	getch(); //keep the output screen until a key is pressed.
}

