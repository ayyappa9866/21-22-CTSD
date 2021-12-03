#include<stdio.h>
void DeleteElement(int n,int arr[n],int position)
{
	int i;
	for(i=position;i<n;i++)
	{
	  arr[i]=arr[i+1];
	}
	arr[n-1]=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);	
    }
}
int main()
{
	int arr[100],position,i,n;
	printf("Enter any number=");
	scanf("%d",&n);
	printf("Enter array elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter any  position");
	scanf("%d",&position);
	DeleteElement(n,arr,position-1);
	return 0;
}
