#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void create(int value)
{
	struct node *ptr,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
    else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}
int reversePrint(struct node *ptr)
{
	if(ptr==NULL)
	{
	return -1;
    }
	else
	{
		reversePrint(ptr->next);
		printf("%d->",ptr->data);	
	}
}
int main()
{
	int choice,num,f;
	do
	{
		printf("\n1.create\n2.reverseprint\n3.exit\n");
		printf("enter your choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter any number=");
			scanf("%d",&num);
			create(num);
			break;
		case 2:
				f=reversePrint(head);
				if(f==-1)
				printf("LINKED LIST IS EMPTY\n");
				break;	
		case 3:
			break;
		default:
			printf("INVALID CHOICE\n");
    	}
    }while(choice!=3);
}
