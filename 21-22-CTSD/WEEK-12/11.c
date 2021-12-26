#include<stdio.h>
#define size 10000
int top=-1,i,stack[size];
void push(int v)
{
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=v;
    }
}
void pop()
{
    if(top==-1)
    printf("0\n");
    else
    {
        printf("%d\n",stack[top]);
        top--;
    }
}
void sumofpop(int n)
{
	int sum=0,j;
	if(n>top+1)
	{	
		j=top+1;
		while(j--)
		{
			sum=sum+stack[top];
			top--;
		}
	}
	else
	{
		while(n--)
		{
			sum=sum+stack[top];
			top--;
		}
	}
	printf("%d\n",sum);
}
void sumofel()
{
	int sum=0;
	if(top==-1)
		printf("");
	else
	{
		for(i=0;i<=top;i++)
			sum=sum+stack[i];
	}
	printf("%d\n",sum);
}
int main()
{
	int q,v,x,n;
	scanf("%d",&q);
	while(q--)
	{
		int t;
		scanf("%d",&t);
		switch(t)
		{
			case 1: scanf("%d",&v);
				push(v);
				break;
			case 2: scanf("%d%d",&n,&x);
				while(n--)
				{
					push(x);
				}
				break;
			case 3: pop();
				break;
			case 4: scanf("%d",&n);
				sumofpop(n);
				break;
			case 5: sumofel();
				break;
			default:
			break;
		}
	}
	return 0;
}
