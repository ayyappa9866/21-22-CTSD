#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head=NULL;

void insert_a_newnode_before_the_head(int value)
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
	    new_node->next=head;
	    head=new_node;
	}//else
}//insert_a_newnode_before_the_head

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
	int data,n,i;
	printf("enter the number of values:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&data);
	    insert_a_newnode_before_the_head(data);// function call
	}
	display();
	return 0;
}//main