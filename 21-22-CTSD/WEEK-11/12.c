#include<stdio.h>
/*
int main()
{
	int n,i,j,temp;
	printf("Enter any number");
	scanf("%d",&n);
	struct Order
	{
		int arr[n];
	};
	struct Order p1;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&p1.arr[i]);
    }
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			if(p1.arr[j]>p1.arr[j+1])
			{
				temp=p1.arr[j];
				p1.arr[j]=p1.arr[j+1];
				p1.arr[j+1]=temp;
			}
		}	
	}
	printf("Sorted array is\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",p1.arr[i]);
    }
    return 0;
}*/
struct Order
{
	int arr[100];
};
void BubbleSort(int n,struct Order p1)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			if(p1.arr[j]>p1.arr[j+1])
			{
				temp=p1.arr[j];
				p1.arr[j]=p1.arr[j+1];
				p1.arr[j+1]=temp;
			}
		}	
	}
	printf("Sorted array is\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",p1.arr[i]);
    }	
}
int main()
{
	int n,i;
	printf("Enter any number");
	scanf("%d",&n);
	struct Order p1;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&p1.arr[i]);
    }
    BubbleSort(n,p1);
}
