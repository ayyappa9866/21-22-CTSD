#include<stdio.h>
int UniqueElement(int arr[])
{
	int i,res=0;
	for(i=0;i<5;i++)
	{
		res=res^arr[i];
	}
	return res;
}
int main()
{
	int arr[5],ans,i;
	printf("Enter 5 array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	ans=UniqueElement(arr);
	printf("%d",ans);
	return 0;
}
