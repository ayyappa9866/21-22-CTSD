#include<stdio.h>
#include<string.h>
#define SIZE 100
int top=-1,front=-1,rear=-1,i;
char stack[SIZE],queue[SIZE];
void push(char v)
{
    if(top==SIZE-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=v;
    }
}
void enqueue(char v)
{
    if(rear==SIZE-1)
    {
        printf("queue overflow");
    }
    else if(front==-1 && rear ==-1)
    {
        front=0,rear=0;
        queue[rear]=v;
    }
    else
    {
        rear++;
        queue[rear]=v;
    }
}
int palindrome(int l)
{
    int t=top,f=0;
    for(i=0;i<l;i++,t--,f++)
    {
        if(stack[t]!=queue[f])
            return 0;
    }
    return 1;
}
int main()
{
    char s[100];
    scanf("%s",s);
    i=0;
    while(s[i]!='\0')
    {
        push(s[i]);
        enqueue(s[i]);
        i++;
    }
    if(palindrome(strlen(s)))
        printf("the word, %s , is palindrome\n",s);
    else
        printf("the word, %s , is not palindrome\n",s);
    return 0;
}
