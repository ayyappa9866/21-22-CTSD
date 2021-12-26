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
void DeleteAtAnyPosition()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	printf("deletion not possible\n");
	else
	{
		int pos,i;
		ptr=head;
		printf("Enter any position");
		scanf("%d",&pos);
		if(pos==1)
		{	
		    printf("deleted element=%d\n",ptr->data);
			head=head->next;
			free(ptr);
		}
		else
		{
		for(i=1;i<=pos-1&&ptr!=NULL;i++)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		if(ptr==NULL)
		printf("deletion not possible");
		else
		{
			printf("deleted element=%d\n",ptr->data);
			ptr1->next=ptr->next;
			free(ptr);
		}
	}
}
}
int main()
{
	int choice,num;
	do
	{
		printf("\n1.create\n2.DeleteAtAnyPosition\n3.exit\n");
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
		    DeleteAtAnyPosition();
		break;	
		case 3:
			break;
		default:
			printf("INVALID CHOICE\n");
	}
}while(choice!=3);
}
