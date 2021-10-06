#include<stdio.h>
int sumOfDigits(int);
int sumOfDigits(int n)
{
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main()
{
    int num,ans;
    printf("Enter any positive number=");
    scanf("%d",&num);
    ans=sumOfDigits(num);
    printf("%d",ans);
    return 0;
}

