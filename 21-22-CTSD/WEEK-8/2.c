/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements into arrays:\n");
	scanf("%d",&n);
	int resistance[n],i,sum=0;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&resistance[i]);
		//sum=sum+resistance[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+resistance[i];
	}
	printf("Total Resistance=%d",sum);
	return 0;	
}*/
#include<stdio.h>
// int total(int *resistance,int n)
int total(int resistance[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+resistance[i];
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter no of elements into arrays:\n");
	scanf("%d",&n);
	int arr[n],i,ans;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ans=total(arr,n);
	printf("Total Resistance=%d",ans);
	return 0;
	
}
