#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int st[MAX];
int top = -1;
void push(int val);
void pop();
void peek();
void display();
int main()
{
int val,option;
do
{
    printf("---------------Sarthak Tripathi 22MCB0030------------------");
    printf("\n --------------MAIN MENU-----------");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. DISPLAY");
    printf("\n 5. EXIT");
    printf("\n Enter your option: ");
    scanf("%d",&option);
switch(option)
{
case 1:
printf("\n Enter the number to be pushed on stack: ");
scanf("%d",&val);
push(val);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
 printf("Exit");
 break;
default:
printf("Invalid choice\n");
}
}while(option != 5);
return 0;
}
void push(int val)
{
if(top == MAX-1)
{
printf("\n STACK OVERFLOW");
}
else
{
top++;
st[top] = val;
}
}
void pop()
{
int val;
if(top == -1)
{
printf("\n STACK UNDERFLOW");
}
else
{
printf("\n Popped element is %d",st[top]);
top--;
}
}
void display()
{
int i;
if(top == -1)
{
printf("\n STACK IS EMPTY!");
}
else
{
for(i=top;i>=0;i--)
{
printf("\n %d ",st[i]);
}
}
}
void peek()
{
if(top == -1)
{
printf("\n STACK IS EMPTY!");
}
else
{
printf("The top of the element is %d",st[top]);
}
}