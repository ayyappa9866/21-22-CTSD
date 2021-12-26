#include <stdio.h>
#define SIZE 100
int top=-1;
int stack[SIZE];
void push(int c)
{
    if(top==SIZE-1)
	{
        printf("stack overflow");
        return;
    }
    else
	{
        top++;
        stack[top]=c;
    }
}
int pop()
{
    if(top<0)
	{
        printf("stack underflow");
        return;
    }
    else
	{
        return stack[top--];
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int p,index;
    for(i=0;i<n;++i)
	{
        scanf("%d",&p);
        push(p);
    }
    scanf("%d",&p);
    for(i=0;i<n;++i){
    if(pop()==p)
	{
        index=top;
    }
}
    printf("%d",index+2);
}

