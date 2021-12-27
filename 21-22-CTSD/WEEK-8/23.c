#include<stdio.h>
int main()
{
	int arr[10],n,i,j,before=0,after=0;
	printf("Enter the no of elements in the array :  ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		before=0,after=0;
		for(j=0;j<i;j++)
		{
			if(arr[i]<=arr[j])
			{
				before=1;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>=arr[j])
			{
				after=1;
			}
		}
		if(after==0&&before==0)
		{
			printf("\nINDEX : %d",i);
			break;
		}
	}
	if(after!=0||before!=0)
		{
			printf("\n%d",-1);
		}
}
