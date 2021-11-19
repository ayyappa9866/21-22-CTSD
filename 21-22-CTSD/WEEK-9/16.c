/* LEETCODE SUBMISSION CODE
bool binarySearch(int c,int a[],int v)
{
	int low,high,mid;
	low=0;
	high=c-1;
	while(low<=high)
	{
		mid=(low+(high))/2;
		if((a[mid]==v))
		return true;
		else if(a[mid]<v)
		low=mid+1;
		else
		high=mid-1;
	}
	return false;
}

bool searchMatrix(int** arr, int r, int* matrixColSize, int v){
    int low,high,mid,c=*matrixColSize;
	low=0;
	high=r-1;
	while(low<=high)
	{
		mid=(low+(high))/2;
		if((v>=arr[mid][0])&&(v<=arr[mid][c-1]))
		{
		   int f=binarySearch(c,arr[mid],v);
		   return f;
		}
		else if(arr[mid][0]<v)
		low=mid+1;
		else
		high=mid-1;
	}
	return false;
    
}*/
#include<stdio.h>
int r,c;
/*void display(int arr[][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}*/
int binarySearch(int a[],int v)
{
	int low,high,mid;
	low=0;
	high=c-1;
	while(low<=high)
	{
		mid=(low+(high))/2;
		if((a[mid]==v))
		return 1;
		else if(a[mid]<v)
		low=mid+1;
		else
		high=mid-1;
	}
	return 0;
}
int search(int arr[][c],int v)
{
	int low,high,mid;
	low=0;
	high=r-1;
	while(low<=high)
	{
		mid=(low+(high))/2;
		if((v>=arr[mid][0])&&(v<=arr[mid][c-1]))
		{
		   int f=binarySearch(arr[mid],v);
		   return f;
		}
		else if(arr[mid][0]<v)
		low=mid+1;
		else
		high=mid-1;
	}
	return 0;
}
int main()
{
	printf("Enter r and c=");
	scanf("%d %d",&r,&c);
	int arr[r][c],i,j,v;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		//printf("\n");
	}
	printf("Enter search element:\n");
	scanf("%d",&v);
	int a=search(arr,v);
	if(a)
	printf("FOUND");
	else
	printf("NOT FOUND");
    return 0;	
}
