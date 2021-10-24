/*#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	//for(i=1;i<=test;i++)
	while(test--)
	{
		int n,i,j,xor,count=0;
		scanf("%d",&n);
		for(i=1;i<=n-1;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				xor=i^j;
				if(xor<=n)
				count++;
			}//j loop
		}//i loop
		printf("%d\n",count);		
	}//test
	return 0;
}//main */
#include<stdio.h>
int xorpairs(int n)
{
	int i,j,xor,count=0;
	for(i=1;i<=n-1;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				xor=i^j;
				if(xor<=n)
				count++;
			}//j loop
		}//i loop
	return count;
}
int main()
{
	int test;
	scanf("%d",&test);
	//for(i=1;i<=test;i++)
	while(test--)
	{
		int n,ans;
		scanf("%d",&n);
		ans=xorpairs(n);
		printf("%d\n",ans);		
	}//test
	return 0;
}//main
