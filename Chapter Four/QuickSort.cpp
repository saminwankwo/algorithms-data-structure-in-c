#include<stdio.h>
#include<conio.h>

#define max 100
int a[max], n, i, l, h;

void input(void);
void output(int a[],int n);
void quick_sort(int a[], int l, int h);

main(void)
{	
	input(); //function call
	getch();
}

void input(void)
{
	printf("How many elements in the array: ");
	scanf("%d", &n);
	printf("\n");
	
	for(i = 0; i <= n - 1; i++)
	{
		printf("Enter elemennts %d: ", i+1);
		scanf("%d", &a[i]);
	}
	l = 0;
	h = n - 1;
	quick_sort(a, l, h); //function call
	printf("\nSorted Array: ");
	output(a, n);  //function call
}

void quick_sort(int a[], int l, int h)
{
	int temp, key, low, high;
	low = l;
	high = h;
	key = a[(low + high) / 2];
	do
	{
		while(key > a[low])
		{
			low++;
		}
		while(key < a[high])
		{
			high--;
		}
		if(low <= high)
		{
			temp = a[low];
			a[low++] = a[high];
			a[high--] = temp;
		}
	}while(low <= high);
	if(l < high)
		quick_sort(a, l, high);
		if(low<h)
			quick_sort(a, low, h);
}

void output(int a[], int n)
{
	for(i = 0; i <= n - 1; i++)
	{
		printf("%d  ", a[i]);
	}
}
