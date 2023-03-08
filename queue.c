#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1, rear=-1;
void insert()
{
	int value;
	if(rear==MAX-1)
	{
		printf("Queue is overflow!!!\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("Enter the insert value: ");
		scanf("%d",&value);
		rear=rear+1;
		queue[rear]=value;
	}
}
void delete()
{
	if(front>rear || front==-1)
	{
		printf("Queue is underflow!!!\n");
	}
	else
	{
		printf("Deleted element is %d\n",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front>rear || front==-1)
	{
		printf("Queue is underflow!!!\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("----------------Sarthak Tripathi 22MCB0030------------------\n");
		printf("-------------QUEUE--------------\n");
		printf("1. INSERT ELEMENT\n");
		printf("2. DELETE ELEMENT\n");
		printf("3. DISPLAY ELEMENT\n");
		printf("4. EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Wrong choice!!!\n");
					 break;
		}
	}
	return 0;
}