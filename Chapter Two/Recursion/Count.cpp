#include<stdio.h>
#include<conio.h>

void count(int, int);

main(void)
{
	int start, stop;
	
	printf("Enter the count start value: ");
	scanf("%d", &start);
	printf("Enter the count stop value: ");
	scanf("%d", &stop);
	
  	count(start, stop); //function call
  	getch();
}

void count(int s, int e )
{
	//we only keep counting if we have a value less than e (the stop value)
	if ( s <= e )
	{
		printf("%d  ", s);
		count( s + 1, e );
	}
}
