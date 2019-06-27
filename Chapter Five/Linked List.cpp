#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int info;
	struct node *next;
};

typedef struct node NODE;
NODE *start;

void createEmptyList(NODE *start)
{
	*start = (NODE *)NULL;
}

void traversInorder(NODE *start)
{
	while(start != (NODE *) NULL)
	{
		printf("%d\n", start->info);
		start = start->next;
	}
}

void insertAtBegin(int item)
{
	NODE *ptr;
	ptr = (NODE *)malloc(sizeof(NODE));
	ptr->info = item;
	if(start == (NODE *)NULL)
		ptr->next = (NODE *)NULL;
	else
		ptr->next = start;
	start = ptr;
}
 
void insertAtEnd(int item)
{
	NODE *ptr, *loc;
	ptr = (NODE *)malloc(sizeof(NODE));
	ptr->info = item;
	ptr->next = (NODE *)NULL;
	if(start == (NODE*)NULL)
		start = ptr;
	else
	{
		loc = start;
		while(loc->next != (NODE *)NULL)
			loc = loc->next;
		loc->next = ptr;
	}
}

void insertSpecial(NODE *start, int item)
{
	NODE *ptr, *loc;
	int temp, k;
	for(k = 0, loc = start; k < temp; k++)
	{
		loc = loc->next;
		if(loc == NULL)
		{
			printf("Node in the list at less than one\n");
			return;
		}
	}
	ptr = (NODE *)malloc(sizeof(NODE));
	ptr->info = item;
	ptr->next = loc->next;;
	loc->next = ptr;
}

main(void)
{
	int choice, item, after;
	char ch;
	createEmptyList(start);
	do
	{
		printf("1. Insert element at begin \n");
		printf("2. Insert element at end \n");
		printf("3. Insert element at specific position\n");
		printf("4. Travers the list inorder\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					printf("Enter the item\n");
					scanf("%d", &item);
					insertAtBegin(item);
					break;
				}
			case 2:
				{
					
				}
		}
		fflush(stdin);
		printf("do your want continous\n"); scanf("%c",&ch);
	}while((ch = 'y') || (ch = 'y'));
	getch();
}

