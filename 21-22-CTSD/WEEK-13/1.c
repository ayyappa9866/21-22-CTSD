#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head=NULL;
void display()
{
	struct Node *ptr;
	if(head==NULL)
	{
		printf("LINKED LIST IS EMPTY\n");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
	}//else
}//display
void insertAtBegin(int value)
{
	struct Node *new_node,*ptr;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=value;//	new_node->next=NULL;//optional	
	new_node->next=head;
	head=new_node;	
}//insertAtBegin
void create(int value)
{
	struct Node *new_node,*ptr;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=value;
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
	}//else
}//create
int main()
{
	int choice,num;
	do{
	printf("*****/LINKED LIST MENU/*****");
	printf("1.create\n2.Insert at begin\n3.Display\n4.exit\n");
	printf("Enter your choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter number=");
			scanf("%d",&num);
			create(num);
			break;
		case 2:
			printf("Enter number=");
			scanf("%d",&num);
			insertAtBegin(num);
			break;
		case 3:
			display();
			break;
			case 4:
				break;
		default:
			printf("INVALID INPUT\n");
    }//switch-case
	}while(choice!=4);//do-while
}//main
