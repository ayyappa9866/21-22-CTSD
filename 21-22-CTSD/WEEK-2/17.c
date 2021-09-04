#include<stdio.h>
//#include<limits.h>
int scoreDiff(int*);// int a[4]
int scoreDiff(int *a) // int a[4]
{
	int max,min,diff;
	/*min=INT_MAX;
	max=INT_MIN;
	printf("%d %d\n",min,max);*/
	min=a[0];
	max=a[0];
	//min=a[0]<min?a[0]:min;
	min=a[1]<min?a[1]:min;
	min=a[2]<min?a[2]:min;
	min=a[3]<min?a[3]:min;
	//max=a[0]<max?a[0]:max;
	max=a[1]>max?a[1]:max;
	max=a[2]>max?a[2]:max;
	max=a[3]>max?a[3]:max;
	diff=max-min;
	return diff;	
}
int main()
{
	int arr[4],n=4,ans;
	printf("Enter 4 Students marks=");
	scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
	ans=scoreDiff(arr);
	printf("Difference between Max score and Min score=%d",ans);
	return 0;
}
