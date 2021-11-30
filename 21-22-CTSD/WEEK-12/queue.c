#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
	if(rear==SIZE-1)
	{
		printf("Queue if Full or Overflow:\n");
	}
	else if(front==-1&&rear==-1)
	{
		front=0,rear=0;
		queue[rear]=value;
	}
	else
	{
		rear++;
		queue[rear]=value;
	}
}//enqueue
void dequeue()
{
	if((front==-1&&rear==-1)||(front>rear))
	{
		printf("Queue is empty or Underflow:\n");
	}
	else if(front==SIZE-1)
	{
		printf("Deleted element is: %d\n",queue[front]);
		front=-1,rear=-1;
	}
	else
	{
		printf("Deleted element is: %d\n",queue[front]);
		front++;
	}
}//dequeue
void display()
{
	if((front==-1&&rear==-1)||(front>rear))
	{
		printf("Queue is empty or Underflow:\n");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}//display
int main()
{
	int choice,num;
	do
	{
		printf("\n*****QUEUE MENU*****\n");
		printf("1.insert(enqueue)\n2.delete(dequeue)\n3.display\n4.exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter any number:\n");
				scanf("%d",&num);
				enqueue(num);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("INVALID CHOICE :\n");
		}//switch	
	}while(choice!=4);
return 0;
}//main
