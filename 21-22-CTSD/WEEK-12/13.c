#include<stdio.h>
#define SIZE 1000000
int queue[SIZE];
int front=-1,rear=-1;
void Enqueue(int num)
{
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    printf("Underflow");
    else if(front==SIZE-1)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    } 
}
void Print()
{
    printf("%d\n",queue[front]);
}
int main()
{
    long long int q,ch,num;
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&ch);
        switch(ch)
        {
            case 1:
            scanf("%lld",&num);
            Enqueue(num);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            Print();
            break;
        }
    }
    return 0;
}
