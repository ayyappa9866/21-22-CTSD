/*#include<stdio.h>
int main()
{
	int n,noofbits=0,p;
	printf("Enter any number=");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	printf("%d number required %d bits",p,noofbits);
	return 0;
}*/
#include<stdio.h>
int noBits(int n)
{
	int noofbits=0;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	return noofbits;
}
int main()
{
	int num,ans;
	printf("Enter any number=");
	scanf("%d",&num);
	ans=noBits(num);
	printf("%d number required %d bits",num,ans);
	return 0;
}
