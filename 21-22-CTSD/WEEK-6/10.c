/*#include<stdio.h>
int main()
{
	int arr[]={6,1,4,3,2};
	int noe=sizeof(arr)/sizeof(int);
	int x1=0,x2=0,res,i;
	for(i=0;i<noe;i++)
	{
		x1=x1^arr[i];
	}
	for(i=1;i<=noe+1;i++)
	{
		x2=x2^i;
	}
	res=x1^x2;
	printf("Missing number=%d",res);
	return 0;
}*/
#include<stdio.h>
int missingNumber(int *arr,int noe)
{
	int x1=0,x2=0,res,i;
	for(i=0;i<noe;i++)
	{
		x1=x1^arr[i];
	}
	for(i=1;i<=noe+1;i++)
	{
		x2=x2^i;
	}
	res=x1^x2;
	return res;
}
int main()
{
	int a[]={6,1,4,3,2},ans;
	int n=sizeof(a)/sizeof(int);
	ans=missingNumber(a,n);
	printf("Missing number=%d",ans);
	return 0;
}
