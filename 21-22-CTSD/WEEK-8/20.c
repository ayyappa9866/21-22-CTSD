#include<stdio.h>
double maxArray(double arr[],int size)
{
	int i;
	double max=arr[0];
	for(i=0;i<size;i++)
	{
	    max=(arr[i]>max?arr[i]:max);
    }
    return max;
}
int main()
{
	int n,i;
	double arr[n],ans;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
	}
	ans=maxArray(arr,n);
	printf("%lf",ans);
}
