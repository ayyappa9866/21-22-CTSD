#include<stdio.h>
void printelements(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}
int main()
{
	int n;
	printf("enter the number of elements in array");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printelements(a,n);
    return 0;
}
