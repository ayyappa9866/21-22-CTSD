#include<stdio.h>
int roads(int n)
{
    int i,sum=1,p;
    for(i=1;i<n;i++)
    {
        scanf("%d",&p);
        sum=(sum*p)%1234567;
    }
    return sum;
}
int main()
{
    int test,i,ans=0,num;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
       scanf("%d",&num);
       ans=roads(num);
       printf("%d\n",ans); 
    }
    return 0;
}
