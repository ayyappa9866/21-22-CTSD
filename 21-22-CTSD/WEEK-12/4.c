#include<stdio.h>
#define size 5
int a[size];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
	if(rear==size-1)
		printf("Queue is overflow");
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		a[rear]=ele;
	}
	else
	{
		rear++;
		a[rear]=ele;
	}
}
void dequeue()
{
	if(rear==-1&&front==-1&&front>rear)
		printf("Queue is underflow");
	else{
		printf("%d ",a[front]);
		front++;
	}
}
int main()
{
	int n;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		enqueue(arr[i]);
	}
	for(i=0;i<n;i++)
	dequeue();
	return 0;
}

