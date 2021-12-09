#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node
{
	int data;
	struct Node *next;
}*head=NULL;
void maximum()
{
	struct Node *ptr;
	int max=INT_MIN;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
	}     
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->data>max)
			{
				max=ptr->data;
			}
			ptr=ptr->next;
		}
		printf("Maximum Element is=%d",max);
	}
}
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
	}//else
}//display
int count()
{
	int c;
	struct Node *ptr;
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
	}//else
	return c;
}//count
void insertAtBegin(int value)
{
	struct Node *new_node,*ptr;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=value;
//	new_node->next=NULL;//optional
	
	new_node->next=head;
	head=new_node;	
}//insertAtBegin
void insertAtEnd(int value)
{
	struct Node *new_node,*ptr;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=value;
	new_node->next=NULL;
	if(head==NULL)
	{
		//new_node->next=head; optional
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
	}
}//insertAtEnd
void insertAtAnyPos(int value)
{
	 int pos,i;
	 struct Node *new,*ptr;
	 new=(struct Node*)malloc(sizeof(struct Node));
	 new->data=value;
	 //new->next=NULL;//optional
	 printf("Enter any position=");
	 scanf("%d",&pos);
	 ptr=head;
	 if(pos==1)
	 {
	 	new->next=head;
	 	head=new;
	 }
	 else
	 {
	 	for(i=1;i<pos-1&&ptr!=NULL;i++)
	 	{
	 		ptr=ptr->next;
		 }
		 if(ptr==NULL)
		 {
		 	printf("WE CAN't Perform insertion(INVALID POSITION)");
		 }
		 else
		 {
		 	new->next=ptr->next;
		 	ptr->next=new;
		 }
	 }//else
}//insetAtAnyPos
void deleteAtBegin()
{
	struct Node *ptr;
	if(head==NULL)
	{
		printf("Deletion not possible:\n");
	}
	else
	{
		ptr=head;
		head=head->next;
		printf("Deleted element is: %d\n",ptr->data);
		free(ptr);
	}
}//deleteAtBegin
void deleteAtEnd()
{
	struct Node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("Deletion not possible:\n");	
	}
	else if(head->next==NULL)
	{
		    ptr=head;
			head=NULL;
	}
	else
	{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}//while
			ptr1->next=NULL;
	}
	printf("Deleted element is: %d\n",ptr->data);
	free(ptr);	
}//deleteAtEnd
void deleteAtAnyPos()
{
	int pos,i;
	struct Node *ptr,*ptr1;
	printf("Enter position to be delete=");
	scanf("%d",&pos);
	if(head==NULL)
	{
		printf("Deletion not possible\n");
	}
	else
	{
		ptr=head;
		if(pos==1)
		{	
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
}//function
int main()
{
	int choice,num,result;
	do
	{
		printf("\n*****LINKEDLIST MENU*****\n");
		printf("1.create\n2.display\n3.count\n");
		printf("4.insertAtBegin\n5.insertAtEnd\n6.insertAtAnyPos\n");
		printf("7.deleteAtBegin\n8.deleteAtEnd\n9.delerteAtAnyPos\n10.Maximum\n");
		printf("11.exit\n");
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
				display();
				break;
			case 3:
				result=count();
				printf("NoOf nodes=%d",result);
				break;
			case 4:
				printf("Enter number=");
				scanf("%d",&num);
				insertAtBegin(num);
				break;
			case 5:
				printf("Enter number=");
				scanf("%d",&num);
				insertAtEnd(num);
				break;
			case 6:
				printf("Enter number=");
				scanf("%d",&num);
				insertAtAnyPos(num);
				break;
			case 7:
				deleteAtBegin();
				break;
			case 8:
				deleteAtEnd();
				break;
			case 9:
				deleteAtAnyPos();
				break;
			case 10:
				maximum();
				break;
			case 11:
				break;
		}
	}while(choice!=11);
}//main

