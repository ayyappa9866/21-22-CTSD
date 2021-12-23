#include<stdio.h>
int main()
{
	int n,x=0,y=0,z=0,flag=1,i,j;
	printf("Enter any number=\n");
	scanf("%d",&n);
	struct Set
	{
		int arr[n];
	};
	struct Set p1;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p1.arr[i]);
                                         if(p1.arr[i]%2==0)
		x=x+p1.arr[i];
		else if(p1.arr[i]%2==1)
		y=y+p1.arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(p1.arr[i]==2)
		z=z+p1.arr[i];
		for(j=2;j<p1.arr[i]/2;j++)
		{
			if(p1.arr[i]%j==0)
			{
			   flag=0;
			   break;	
			}
		}
		if(flag!=0)
		z=z+p1.arr[i];
	}
	printf("%d",(x*y+z));
	return 0;
}
