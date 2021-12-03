#include<stdio.h>
void ReplaceElement(int n,int arr[n],int k,int position)
{
	int i;
	if(position<=n)
	{
		arr[position-1]=k;
	}
	else
	{
		printf("Position value should  not be greater than n");
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n,arr[n],k,position,i;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter array elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter  k value and position");
	scanf("%d%d",&k,&position);
	ReplaceElement(n,arr,k,position);
	return 0;
}
