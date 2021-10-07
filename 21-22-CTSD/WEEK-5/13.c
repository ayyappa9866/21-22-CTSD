#include<stdio.h>
int height(int n)
{
    int i,h=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        h=h*2;
        else 
        h=h+1;
    }
    return h;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int noc,ans;
    scanf("%d",&noc);
    ans=height(noc);
    printf("%d\n",ans);
    }
    return 0;
}
