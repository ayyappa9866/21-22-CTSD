#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int value)
{
	if(top==SIZE-1)
	{
		printf("Stack is full or stack overflow:\n");
	}
	else
	{
		/*top++;
		stack[top]=value;*/
		stack[++top]=value;
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
void display()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		int i;
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}
int peek()
{
	return stack[top];
}
int main()
{
	int choice,num;
	do
	{
		printf("\n*****STACK MENU*****\n");
		printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("Enter your choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter any number=");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				if(top==-1)
				printf("stack is empty\n");
				else
				printf("TOP ELEMENT=%d",peek());
				break;
			case 4:
				display();
				break;
			case 5:
				break;
			default:
				printf("INVALID CHOICE\n");
				break;
		}//switch
	}while(choice!=5);//do while
}//main
