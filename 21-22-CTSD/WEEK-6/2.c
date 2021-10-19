#include<stdio.h>
void evenOdd(int n)
{
	if(n&1==1)
	printf("ODD Number");
	else
	printf("EVEN Number");
}
int main()
{
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	evenOdd(num);
	return 0;
}
