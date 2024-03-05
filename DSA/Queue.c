#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int i;
void enqueue(int x)
{
if(rear==N-1)
{ printf("Queue overflow"); }
else if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=x;
}
else
{
rear=rear+1;
queue[rear]=x;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{ printf("queue is empty"); }
else if(front==rear)
{ front=rear=-1; }
else
{
printf("deleted item is : %d \n",queue[front]);
front=front+1;
}
}
void display()
{
if(front==-1&&rear==-1)
{ printf("queue empty"); }
else
{
for( i=front;i<rear+1;i++)
{ printf("queue index[%d]=%d\n",i,queue[i]); }
}
}
void peek()
{
if(front==-1&&rear==-1)
{ printf("queue is empty"); }
else
{ printf("front data is %d\n", queue[front]); }
}
void main()
{
enqueue(2);
enqueue(5);
enqueue(-1);
display();
peek();
dequeue();
peek();
display();}

