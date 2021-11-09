/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements into array:\n");
	scanf("%d",&n);
	int arr[n],i,f=0,index,search;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search element:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			f=1;
			index=i;
			break;
		}
	}
	if(f==0)
	printf("NOT FOUND");
	else
	printf("FOUND AT %dth Location",index);
	return 0;
}*/
#include<stdio.h>
//void linearSearch(int *arr,int n,int search)
void linearSearch(int arr[],int n,int search)
{
	int i,f=0,index;
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			f=1;
			index=i;
			break;
		}
	}
	if(f==0)
	printf("NOT FOUND");
	else
	printf("FOUND AT %dth Location",index);	
}
int main()
{
	int n;
	printf("Enter no of elements into array:\n");
	scanf("%d",&n);
	int arr[n],i,search;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search element:");
	scanf("%d",&search);
	linearSearch(arr,n,search);
	return 0;
}
