//// singly linked list////
#include <stdio.h>
#include <stdlib.h>
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;

// Function to create list with n nodes initially
void createList()
{
	if (start == NULL) {
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
		if (n != 0) {
			int data;
			struct node* newnode;
			struct node* temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nEnter number to"
				" be inserted : ");
			scanf("%d", &data);
			start->info = data;

			for (int i = 2; i <= n; i++) {
				newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to"
					" be inserted : ");
				scanf("%d", &data);
				newnode->info = data;
				temp = temp->link;
			}
		}
		printf("\nThe list is created\n");
	}
	else
		printf("\nThe list is already created\n");
}

// Function to display the linked list
void  display ()
{
	struct node* temp;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n", temp->info);
			temp = temp->link;
		}
	}
}

// Function to insert at the  begigning (front)
// of the linked list
void insertAtfront ()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	// Pointer of temp will be
	// assigned to start
	temp->link = start;
	start = temp;
}

// Function to insert at the end of(rear)
// the linked list
void insertAtEnd()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	// Enter the number
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);

	// Changes links
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	// Change Links
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}

// Function to delete from the begigning (front) 
// of the linked list
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}

// Function to delete from the  end (rear)
// of the linked list
void deleteEnd()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;

	// If LL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		printf("\nEnter index : ");

		// Position to be deleted
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		// Change Links
		position = temp->link;
		temp->link = position->link;

		// Free memory
		free(position);
	}
}

//  main function // 
int main()
{
	int choice;
	while (1) {
         printf(" \n ----------------Shantanu Das Gupta 22MCB0026-----------------\n ");
          printf(" \n *********************MENU ************************************** \n");
		
		printf("\t1 For insertion at"
			" starting\n");
		printf("\t2 For insertion at"
			" end\n");
		printf("\t3 For insertion at "
			"any position\n");
		printf("\t4 For deletion of "
			"first element\n");
		printf("\t5 For deletion of "
			"last element\n");
		printf("\t6 For deletion of "
			"element at any position\n");
            printf("\t7 To see list (display all elements of the list ) \n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
     		case 1:
			insertAtfront ();
			break;
		case 2:
			insertAtEnd();
			break;
		case 3:
			insertAtPosition();
			break;
		case 4:
			deleteFirst();
			break;
		case 5:
			deleteEnd();
			break;
		case 6:
			deletePosition();
			break;
             case 7:
              display(); 
              break;
              default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}
