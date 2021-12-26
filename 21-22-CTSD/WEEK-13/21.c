#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node *next;
}*head=NULL;
void create(char value)
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

void even()
{
	struct node *ptr;
	if(head==NULL)
	printf("linked list is empty");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
	   if((ptr->data)%2==0)
	    {  
	     	 printf("%d is a even number\n",ptr->data);
	    }
	    ptr=ptr->next;
       }
	}
}
int main()
{
	int choice,num;
	do
	{
		printf("\n1.create\n2.evencustomer\n3.exit\n");
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
		even();
		break;	
		case 3:
			break;
		default:
			printf("INVALID CHOICE");
	}
 }while(choice!=3);
}
