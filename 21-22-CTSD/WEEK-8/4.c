/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements into array=");
	scanf("%d",&n);
	int arr[n],i,low,high,mid,search,index=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search element=");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while((low<=high)&&(index==-1))
	{
		mid=(low+high)/2;
		if(arr[mid]==search)
		index=mid;
		else if(arr[mid]<search)
		low=mid+1;
		else
		high=mid-1;
	}
	if(index==-1)
	printf("NOT FOUND");
	else
	printf("Found at %d location",index);
	return 0;
	
}*/
#include<stdio.h>
//void binarySearch(int *arr,int n,int search)
void binarySearch(int arr[],int n,int search)
{
	int low,high,mid,index=-1;
	low=0;
	high=n-1;
	while((low<=high)&&(index==-1))
	{
		mid=(low+high)/2;
		if(arr[mid]==search)
		index=mid;
		else if(arr[mid]<search)
		low=mid+1;
		else
		high=mid-1;
	}
	if(index==-1)
	printf("NOT FOUND");
	else
	printf("Found at %d location",index);
	
}
int main()
{
	int n;
	printf("Enter no of elements into array=");
	scanf("%d",&n);
	int arr[n],i,low,high,mid,search,index=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search element=");
	scanf("%d",&search);
	binarySearch(arr,n,search);
	return 0;
	
}
