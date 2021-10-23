#include<stdio.h>
/*int main()
{
	int a,b,res,c=0;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&a,&b);
	res=a^b;
	while(res>0)
	{
		if(res&1)
		c++;
		res>>=1;	
	}
	printf("No of bits to be flipped=%d",c);
	return 0;
}*/
int noOfBits(int a,int b)
{
	int res,c=0;
	res=a^b;// To get different bits
	while(res>0)// count no of 1 s in res
	{
		if(res&1)
		c++;
		res>>=1;	
	}
	return c;
}
int main()
{
	int a,b,ans;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&a,&b);
	ans=noOfBits(a,b);
	printf("No of bits to be flipped=%d",ans);
	return 0;
}
