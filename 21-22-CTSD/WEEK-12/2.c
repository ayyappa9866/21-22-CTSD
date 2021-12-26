#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void StoreDivisor(int n)
{
	int i;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0) 
		{
		    top++;
		    stack[top]=i;
	    }	
	}
	
}
int main()
{
	int n,i;
	printf("Enter any number=");
	scanf("%d",&n);
	StoreDivisor(n);
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	printf("%d",n);
	return 0;
}
