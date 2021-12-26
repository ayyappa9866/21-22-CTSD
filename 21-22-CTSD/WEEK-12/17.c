#include <stdio.h>
#include <stdlib.h>
int data[100000],top,max=0;
void push()
{
   int item;
   scanf("%d",&item);
   top++;
   data[top]=item;
   if(max < data[top])
        max = data[top];
}

void pop()
{
    int i;
    if(max == data[top])
        max=0;
    top--;
    for(i= top;i>=0;i--)
        if(max < data[i])
            max = data[i];
}
int main()
{
    int t,n,choice;
    top = -1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push();
                     break;
            case 2:  pop();
                     break;
            case 3: printf("%d\n",max);
                    break;
        }
    }
    return 0;

}