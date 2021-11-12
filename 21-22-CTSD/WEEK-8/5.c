/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements into array:\n");
	scanf("%d",&n);
	int arr[n],i,j,temp,c=0,k;
	printf("Enter array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-1-i;j++)
	{
		//c++;
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	/*printf("\nPASS-%d\n",i+1);
	for(k=0;k<n;k++)
{
	printf("%d ",arr[k]);
}*/

/*}
printf("\nSorted Elements:\n");
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
//printf("\n%d",c);
return 0;
}*/
#include<stdio.h>
//void bubbleSort(int *arr,int n)
void bubbleSort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-1-i;j++)
	{
		//c++;
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	/*printf("\nPASS-%d\n",i+1);
	for(k=0;k<n;k++)
{
	printf("%d ",arr[k]);
}*/

}
}
int main()
{
	int n;
	printf("Enter no of elements into array:\n");
	scanf("%d",&n);
	int arr[n],i;
	printf("Enter array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
printf("\nSorted Elements:\n");
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
//printf("\n%d",c);
return 0;
}
