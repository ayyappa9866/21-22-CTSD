#include<stdio.h>
/*
int main()
{
	int n,i,value,index=-1;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int low,high,mid;
	low=0;
	high=n-1;
	struct Search
	{
		int arr[n];
	};
	struct Search p1;
	for(i=0;i<n;i++)
    	scanf("%d",&p1.arr[i]);
	printf("Enter search element:\n");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		if(p1.arr[mid]==value)
		{
			index=mid;
			break;
		}
		else if(p1.arr[mid]>value)
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	if(index==-1)
	printf("Search element is not found\n");
	else 
	printf("Search element is found at %d th position\n",index);
	return 0;
}*/
struct Search
{
	int arr[100];
};
int BinarySearch(int n,struct Search p1,int value)
{
	int low,high,mid,index=-1,i;
	low=0;
	high=n-1;
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		if(p1.arr[mid]==value)
		{
			index=mid;
			break;
		}
		else if(p1.arr[mid]>value)
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return index;
}
int main()
{
	int n,i,value,ans;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int low,high,mid;
	low=0;
	high=n-1;
	struct Search p1;
	for(i=0;i<n;i++)
    	scanf("%d",&p1.arr[i]);
	printf("Enter search element:\n");
	scanf("%d",&value);
	ans=BinarySearch(n,p1,value);
	if(ans==-1)
	printf("Search element is not found\n");
	else 
	printf("Search element is found at %d th position\n",ans);
	return 0;
}
