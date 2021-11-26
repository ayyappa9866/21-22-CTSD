/* LEETCODE SUBMISSION CODE
long int rangeBitwiseAnd(long int left, long int right)
{
    long int i,sum=left;
    for(i=left+1;i<=right;i++)
    {
        sum=sum&i;
        if(sum==0)
            return sum;
    }
    return sum;
} */
#include<stdio.h>
long int rangeBitwiseAnd(long int left, long int right)
{
    long int i,sum=left;
    for(i=left+1;i<=right;i++)
    {
        sum=sum&i;
        if(sum==0)
            return sum;
    }
    return sum;
} 
int main()
{
	int a,b,ans;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&a,&b);
	ans=rangeBitwiseAnd(a,b);
	printf("%d",ans);
	return 0;
}

