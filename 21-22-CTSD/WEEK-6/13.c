/*#include<stdio.h>
int main()
{
	int n,p=0,pos=0;
	printf("Enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		if((n&1)==0)
		p=p^(1<<pos);//body of if 
		pos++;// next position bit
		n=n>>1;//n>>=1
	}//while
	printf("%d",p);
	return 0;
}//main */
#include<stdio.h>
int invertingBits(int n)
{
	int pos=0,p=0;
	while(n>0)
	{
		if((n&1)==0)
		p=p^(1<<pos);//body of if 
		pos++;// next position bit
		n=n>>1;//n>>=1
	}//while
	return p;
}
int main()
{
	int num1,ans;
	printf("Enter any number=");
	scanf("%d",&num1);
	ans=invertingBits(num1);
	printf("%d",ans);
	return 0;
}//main
