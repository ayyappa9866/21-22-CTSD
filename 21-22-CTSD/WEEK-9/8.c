#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n][n],i,j,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum1=sum1+A[i][j];
            if((i+j)==n-1)
            sum2=sum2+A[i][j];
        }
    }
    printf("%d",abs(sum1-sum2));
    return 0;
}
