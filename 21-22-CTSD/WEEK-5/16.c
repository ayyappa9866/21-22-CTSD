#include<stdio.h>
int count(int);
int count(int n)
{
    int c=0,max=0;
    while(n>0)
    {
        if(n%2==1)
        {
            c++;
            if(c>max)
            max=c;
        }
        else 
        {
            c=0;
        }
       n=n/2; 
    }
    return max;
}
int main()
{
    int num,ans;
    scanf("%d",&num);
    ans=count(num);
    printf("%d",ans);
    return 0;
}
