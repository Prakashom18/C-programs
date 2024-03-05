#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
int front=-1, rear=-1;
void enqueue()
{
int x;
printf("\nEnter the data you want to insert in queue: ");
scanf("%d",&x);
if(rear==N-1)
{
printf("\nQueue is Overflow");
}
else if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=x;
// printf("\n\tInserted item is: %d",x);
}
else
{
rear=rear+1;
queue[rear]=x;
// printf("\n\tInserted item is: %d",x);
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("\nQueue is Underflow");
}
else if(front==rear)
{
	front=rear=-1;

}
else
{

printf("\n\tDeleted item is: %d",queue[front]);
front=front+1;

}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("\nQueue is Empty");
}
else
{
for(i=front;i<rear+1;i++)
{
printf("\nQueue[%d]=%d",i,queue[i]);
}
}
}
int main()
{
int ch;
do
{
printf("\nEnter the choice: 1-Enqueue, 2-Dequeue, 3-Display, 0-Exit : ");
scanf("%d",&ch);
switch(ch)
{
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
default:

printf("\nInvalid choice, please choose 0-3");

}
}while(ch!=0);
return 0;
}
