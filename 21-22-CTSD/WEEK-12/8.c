#include<stdio.h>
int stack[10000000];
int top=-1;
void Push(int s, int value)
{
	if(top==s-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		top++;
		stack[top]=value;
	}
}
void Pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("%d\n",stack[top]);
		top--;
	}
}
void Top()
{
	if(top==-1)
	printf("stack underflow\n");
	else
	printf("%d\n",stack[top]);
}
int main()
{
	int t,n,s;
	scanf("%d",&t);
    while(t--)
	{
		scanf("%d %d",&n,&s);
		while(n--)
		{
			int value,i;
			char str[4];
			scanf("%s",str);
			if(str[1]=='u')
			{
				scanf("%d",&value);
				Push(s,value);
			}
			else if(str[0]=='p')
			{
				Pop();
			}
			else if(str[0]=='t')
			{
				Top();		
			}
		}	
	    top=-1;
	}
}
