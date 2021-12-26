#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head=NULL;

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
void deleteAtAnyPos(int position)
{
	int i;
	struct Node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("Deletion not possible\n");
	}
	else
	{
		ptr=head;
		if(position==0)
		{	
			head=head->next;
			free(ptr);
		}
		else
		{
			for(i=0;i<=position-1&&ptr!=NULL;i++)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			if(ptr==NULL)
			{
				printf("Deletion not possible\n");
			}
			else
			{
				ptr1->next=ptr->next;
				free(ptr);
			}	
		}//else	
	}//else
}//deleteAtAnyPos

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
			printf("%d ->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}//else
}//display
int main()
{
	int data,n,i,position;
	printf("enter the number of values:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&data);
	    create(data);// function call
	}
	printf("enter the position to be deleted:");
	scanf("%d",&position);
	deleteAtAnyPos(position);
	display();
	return 0;
}//main