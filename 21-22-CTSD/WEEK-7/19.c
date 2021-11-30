#include<stdio.h>
int gcd(int,int);
int lcm(int,int);
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0 ; i<n ; i++)
            scanf("%d",&a[i]);
        printf("%d ",a[0]);
        for(i=0 ; i<n-1 ; i++)
        {
            if(a[i+1] >a[i])
                printf("%d ",lcm(a[i+1],a[i]));
            else
                printf("%d ",lcm(a[i],a[i+1]));
        }
        printf("%d\n",a[n-1]);        
    }
    return 0;
}

