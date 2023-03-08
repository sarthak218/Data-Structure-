#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head=NULL; 
  
void beginning_insertion();   
void end_insertion();  
void position_insertion();  
void beginning_deletion();  
void end_deletion();  
void position_deletion();  
void search(); 
void segregateprimecomposite();

void display();  
 
void main ()  
{  
    int choice=0;  
    while(choice!=9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random position\n4.Delete from Beginning\n");  
        printf("5.Delete from last\n6.Delete the node in the speicified position\n7. segregateprimecomposite\n8.Search for an element\n9.Show\n10.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            		beginning_insertion();      
            		break;  
            case 2:  
            		end_insertion();         
            		break;  
            case 3:  
           			position_insertion();       
                	break;  
            case 4:  
            		beginning_deletion();       
            		break;  
            case 5:  
            		end_deletion();        
            		break;  
            case 6:  
            		position_deletion();          
            		break;  
            case 7:  
            		segregateprimecomposite();         
            		break;  
            case 8: 
                    search();
                    break;        
            case 9:  
            		display();        
            		break;  
            case 10:  
            		exit(0);  
            		break;  
            default:  
            		printf("Please enter valid choice..");  
        }  
    }  
}  
void beginning_insertion()  
{  
    struct node *newnode;  
    int item;  
    newnode=(struct node*)malloc(sizeof(struct node));  
   
	printf("\nEnter value\n");    
    scanf("%d",&item);    
    newnode->data=item;  
    newnode->next=head;  
    head=newnode;  
    printf("\nNode inserted");  
    
}  
void end_insertion()  
{  
    struct node *newnode,*temp;  
    int item;     
    newnode=(struct node*)malloc(sizeof(struct node));      
    
    printf("\nEnter value?\n");  
    scanf("%d",&item);  
    newnode->data=item;  
    if(head==NULL)  
    {  
        newnode->next=NULL;  
        head=newnode;  
        printf("\nNode inserted");  
    }  
    else  
    {  
        temp=head;  
        while(temp->next!=NULL)  
        {  
            temp=temp->next;  
        }  
        temp->next=newnode;  
        newnode->next=NULL;  
        printf("\nNode inserted");  
          
    }  
}  
void position_insertion()  
{  
    int i,pos,item;   
    struct node *newnode, *temp;  
    newnode=(struct node*)malloc(sizeof(struct node));  
   
    printf("\nEnter element value");  
    scanf("%d",&item);  
    newnode->data=item;  
    printf("\nEnter the location after which you want to insert ");  
    scanf("\n%d",&pos);  
    temp=head;  
    for(i=0;i<pos-1;i++)  
    {   
        temp=temp->next;  
       
    }  
    newnode->next=temp->next;   
    temp->next=newnode;   
    printf("\nNode inserted");  
}  
void beginning_deletion()  
{  
    struct node *ptr;  
    if(head==NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr=head;  
        head=ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void end_deletion()  
{  
    struct node *ptr,*temp;  
    if(head==NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head->next==NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr=head;   
        while(ptr->next!=NULL)  
        {  
            temp=ptr;  
            ptr=ptr->next;  
        }  
        temp->next=NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void position_deletion()  
{  
    struct node *ptr,*temp;  
    int pos,i;    
    printf("\n Enter the position of the node do you want to delete \n");  
    scanf("%d",&pos);  
    ptr=head;  
    for(i=0;i<pos-1;i++)  
    {  
        temp=ptr;       
        ptr=ptr->next;  
              
        if(ptr==NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    temp->next=ptr->next;  
    free(ptr);  
    printf("\nDeleted node %d ",pos+1);  
} 

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  

void display()  
{  
    struct node *ptr;  
    ptr=head;   
    if(ptr==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while(ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr=ptr->next;  
        }  
    }  
}     


void segregateprimecomposite() 
{
    struct node *curr =head; 
printf("\n prime numbers are: "); 
while(curr != NULL) 
{
    if (isprime (curr->data)==true) 
printf ("%d\t", curr->data) ; 
curr = curr—>next;
} 
curr = head; 
printf ("\nThe composite numbers are:"); 
while(curr !=NULL) 
if (isprime (curr—>data)==false) 
printf("%d",curr->data); 
cuzr = curr->next;
}