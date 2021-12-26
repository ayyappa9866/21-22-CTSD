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

void vowel()
{
	struct node *ptr;
	if(head==NULL)
	printf("linked list is empty");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
	   if((ptr->data)=='A'||(ptr->data)=='E'||(ptr->data)=='I'||(ptr->data)=='O'||(ptr->data)=='U')
	    {  
	     	 printf("%c is a vowel\n",ptr->data);
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
		printf("\n1.create\n2.vowel\n3.exit\n");
		printf("enter your choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter any vowel=");
			scanf(" %c",&num);
			create(num);
			break;
		case 2:
		vowel();
		break;	
		case 3:
			break;
		default:
			printf("INVALID CHOICE");
	}
 }while(choice!=3);
}
