#include<stdio.h>
void BreakingtheRecords(int n,int a[])
{
    int i,min=a[0],mn=0,max=a[0],mx=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            mn++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            mx++;
        }
    }
    printf("%d %d",mx,mn);
}
int main()
{
   int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    BreakingtheRecords(n,a);
    return 0;
}

