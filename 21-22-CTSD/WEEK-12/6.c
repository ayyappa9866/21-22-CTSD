#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size];
int top=-1;
void push(int ele)
{
	if(top==size-1)		
	printf("stack is overflow");
	else
	{
		top++;
		a[top]=ele;
	}
}
void pop(){
	if(top==-1)
		printf("stack is underflow");
	else
	{
		printf("%d ",a[top]);
		top=top-1;
	}
}
int main()
{
	int n,i;
	printf("Enter any number:");
	scanf("%d",&n);
    while(n>0)
	{
	  push(n%2);
	  n=n/2;
	}
	int N=top;
	for(i=0;i<=N;i++)
	pop();
	return 0;
	
}

