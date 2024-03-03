#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[5];
int top=-1;
void push()
{
int x;
printf("Insert data in stack: \n");
scanf("%d",&x);
if(top==4)
{
printf("Stack OverFlow \n");
}
else

{
top=top+1;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("stack is empty \n");
}
else
{
item=stack[top];
top--;
printf("Deleted item is: %d \n", item);
}
}
void display()
{
int i;
for(i=top; i>=0 ; i--)
{
printf("items in stack are: %d\t",stack[i]);
}
}
void main()
{
int ch;
do
{
printf("enter choice no. 1 - Push, 2 - Pop, 3 – Display : \n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
default: printf("Invalid Choice \n");
}
}while(ch!=0);
getch();
}
