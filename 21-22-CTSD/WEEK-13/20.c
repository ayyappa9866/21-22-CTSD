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
void insertatanypos(int value)
{
		struct node *ptr,*ptr1;
	int c=0;
	if(head==NULL)
	{
	c=0;
    }
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			c++;
			ptr=ptr->next;
		}
	}
	 struct node *newnode;
	 newnode=(struct node*)malloc(sizeof(struct node));
	 newnode->data=value;
	 newnode->next=NULL;
	 int mid,i;
		ptr=head;
		if(c%2==0)
		mid=c/2;
		else
		mid=(c+1)/2;
	 
	 	for(i=2;i<=mid&&ptr!=NULL;i++)
	 	{
	 		ptr=ptr->next;
		 }
		 if(ptr==NULL)
		 {
		 	printf("WE CAN't Perform insertion(INVALID POSITION)");
		 }
		 else
		 {
		 	newnode->next=ptr->next;
		 	ptr->next=newnode;
		 }
	 
}//insetAtAnyPos
void display()
{
	if(head==NULL)
	printf("linked list is empty");
	else
	{
		struct node*ptr;
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
	}
}
int main()
{
	int choice,num;
	do
	{
		printf("\n1.create\n2.insertatany\n3.display\n4.exit\n");
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
		    printf("enter any number=");
		    scanf("%d",&num);
		    insertatanypos(num);
		    break;	
		    case 3:
		    display();
		    break;
		    case 4:
		    	break;
		default:
			printf("INVALID CHOICE");
	}
 }while(choice!=4);
}
