#include<stdio.h>
void decimalBinary(int);
void decimalBinary(int n)
{
	int k,i;
	for(i=31;i>=0;i--)
	{
		k=n>>i;// k=0 or 1 always
		if((k&1)==1)//if(k&1)
		printf("1");
		else
		printf("0");
	}
}
int main()
{
	int num1;
	printf("Enter any number");
	scanf("%d",&num1);
	decimalBinary(num1);
	return 0;
}
