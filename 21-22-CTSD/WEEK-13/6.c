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
void deleteatend()
{
	if(head==NULL)
	printf("deletion not possible\n");
	else if(head->next==NULL)
	{
		   struct node *ptr;
		    ptr=head;
		    printf("deleted element=%d\n",ptr->data);
			head=NULL;
	}
	else
	{
		struct node *ptr1,*ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		printf("deleted element=%d\n",ptr->data);
	    free(ptr);
	}
}
int main()
{
	int choice,num;
	do
	{
		printf("\n1.create\n2.deleteatend\n3.exit\n");
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
			deleteatend();
			break;
		case 3:
			break;
		default:
			printf("INVALID CHOICE\n");
	    }
    }while(choice!=3);
}

