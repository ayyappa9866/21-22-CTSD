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
	newnode=(struct node *)malloc(sizeof(struct node));
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
void Count()
{
	struct node *ptr;
	int cnt=0;
	if(head!=NULL)
	{
		ptr=head;
		while(ptr!=NULL)
		{
			cnt++;
			ptr=ptr->next;
		}
	}
	printf("no of cars=%d\n",cnt);
}
int main()
{
	int choice,num;
	do
	{
		printf("\n1.create\n2.count\n3.exit\n");
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
		        Count();
		        break;	
		    case 3:
			    break;
		    default:
			    printf("INVALID CHOICE TRY AGAIN");
	}
}while(choice!=3);
}
