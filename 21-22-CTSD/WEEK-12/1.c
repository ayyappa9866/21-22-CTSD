#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int value)
{
	int i;
	if(top==SIZE-1)
	{
		printf("Stack is full or stack overflow:\n");
	}
	else
	{
		top++;
		stack[top]=value;
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty or stack underflow:\n");
	}
	else
	{
		printf("Deleted element is=%d\n",stack[top]);
		top--;
	}
}
int main()
{
	int choice,num;
	do
	{
		printf("\n*****STACK MENU*****\n");
		printf("1.push\n2.pop\n3.exit\n");
		printf("Enter your choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter any number=");
				scanf("%d",&num);
				push(num);
				printf("\n");
				break;
			case 2:
				pop();
				break;
			case 3:
				break;
			default:
				printf("INVALID CHOICE\n");
				break;
		}
	}while(choice!=3);
}
