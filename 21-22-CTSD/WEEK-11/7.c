#include<stdio.h>
#include<limits.h>
/*
int main()
{
	int n,i,max=INT_MIN,max2=INT_MIN;
	printf("Enter noof students participated");
	scanf("%d",&n);
	struct scores
	{
		int arr[n];
	};
	struct scores p1;
	printf("Enter the scores");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&p1.arr[i]);
		if(p1.arr[i]>max)
		{
			max2=max;
		    max=p1.arr[i];
	    }
	}
	printf("Second price winner score=%d\n",max2);
	return 0;
}*/
struct scores
	{
		int arr[100];
	};
int secondMaximum(int n,struct scores p1)
{
	int i,max1=INT_MIN,max2=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(p1.arr[i]>max1)
		{
		    max2=max1;
		    max1=p1.arr[i];
	                     }
                                         else if(p1.arr[i]>max2)
                                         {
		    max2=p1.arr[i];
                                         }
	}
	return max2;
}
int main()
{
	int n,i,max=INT_MIN,max2=INT_MIN;
	printf("Enter noof students participated");
	scanf("%d",&n);
	
	struct scores p1;
	printf("Enter the scores");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&p1.arr[i]);
	}
	printf("Second price winner score=%d\n",secondMaximum(n,p1));
}
