#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value=");
	scanf("%d",&n);
	int arr[n][n],i,j,k;
	printf("Enter array Elements=");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(k=0;k<=n/2;k++)
	{
		for(i=k,j=k;j<n-k;j++)
		{
			printf("%d ",arr[i][j]);
		}
		for(i=k+1,j=j-1;i<n-k;i++)
		{
			printf("%d",arr[i][j]);
		}
		for(i=i-1,j=j-1;j>=k;j--)
		{
			printf("%d ",arr[i][j]);
		}
		for(i=i-1,j=j+1;i>k;i--)
		{
			printf("%d ",arr[i][j]);
		}
	}
	return 0;
}
