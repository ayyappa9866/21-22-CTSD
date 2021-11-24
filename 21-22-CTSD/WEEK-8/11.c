#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int i,arr[n];
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
           sum=sum+arr[i];
        }
        if(sum%3==0)
        printf("Yes\n");
        else {
        printf("No\n");
        }
        
    }
}

