/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements into arrays:\n");
	scanf("%d",&n);
	int seats[n],i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&seats[i]);
	}
	printf("Array Elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",seats[i]);
	}
	return 0;
}*/
#include<stdio.h>
//void display(int *seats,int n)
void display(int seats[],int n)
{
	int i;
		printf("Array Elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",seats[i]);// *(seats+i)
	}	
}
int main()
{
	int n;
	printf("Enter no of elements into arrays:\n");
	scanf("%d",&n);
	int arr[n],i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr,n);
	return 0;
}
