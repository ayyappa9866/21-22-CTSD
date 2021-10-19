#include<stdio.h>
void powerOf2(int n)
{
	if((n&(n-1))==0)
	printf("%d is Power of 2 ",n);
	else
	printf("%d is not Power of 2 ",n);
}
int main()
{
	int num;
	printf("Enter Any Number=");
	scanf("%d",&num);
	powerOf2(num);
	return 0;
}
