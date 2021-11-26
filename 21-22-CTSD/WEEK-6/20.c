#include<stdio.h>
int main()
{
    int test,n;
    long int sum=0;
    scanf("%d%d",&n,&test);
    while(test--)
    {
        long int a,b,k;
        scanf("%ld%ld%ld",&a,&b,&k);
        sum=sum+(b-a+1)*k;
    }
    printf("%ld\n",(sum/n));
    return 0;
}
