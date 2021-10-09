#include <stdio.h>
#include<math.h>
int pattern(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p=(2*p)%100000;
    }
    return p-1;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,ans;
        scanf("%d",&n);
        ans=pattern(n);
        printf("%d\n",ans);
        
    }
    return 0;
}
