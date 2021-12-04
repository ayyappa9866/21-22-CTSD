#include<stdio.h>
#include<stdlib.h>
int DiagonalSum(int n,int arr[n][n])
{
	int s1=0,s2=0,i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j)
                s1=s1+arr[i][j];
            if (i == n-j-1)
                s2=s2+arr[i][j];
        }
    }
   // printf("%d\n",abs(s1-s2));
    return abs(s1-s2);

}
int main()
{
	int n,ans;
	printf("Enter the size of matrix:");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter array element:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	ans=DiagonalSum(n,a);
	if(ans>10)
	printf("NOT BEAUTIFUL");
	else
	printf("BEAUTIFUL");
	return 0;
}
