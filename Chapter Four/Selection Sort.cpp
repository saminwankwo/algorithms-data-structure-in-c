#include<stdio.h>
#include<conio.h>
main(void)
{
	int n, i, j, temp, loc, min;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int array[n];
	
	printf("Enter the elements of array\n");
	for(i = 0; i <= n - 1; i++)
	{
		scanf("%d", &array[i]);
	}
	min = array[0];
	for(i = 0; i <= n - 1; i++)
	{
		min = array[i];
		loc = i;
		for(j = i + 1; j <= n - 1; j++)
		{
			if(array[j] < min)
			{
				min = array[j];
				loc = j;
			}
		}
		if(loc != 1)
		{
			temp = array[i];
			array[i] = array[loc];
			array[loc] = temp;
		}
	}
	printf("The number after selection sorting are: ");
	for(i = 0; i <= n - 1; i++)
	{
		printf("%d  ", array[i]);
	}
	getch();
}

