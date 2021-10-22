#include<stdio.h>
int bitwiseOr(int a,int b)
{
	/*int res;
	res=a|b;
	return res;	*/
	return a|b;
}
int bitwiseAnd(int a,int b)
{
	/*int res;
	res=a&b;
	return res;	*/
	return a&b;
}
int bitwiseXor(int a,int b)
{
	/*int res;
	res=a^b;
	return res;	*/
	return a^b;
}
int main()
{
	int num1,num2;
	printf("Enter any two numbers=");
	scanf("%d%d",&num1,&num2);
	printf("\nBitwiseOR result=%d",bitwiseOr(num1,num2));
	printf("\nBitwiseAND result=%d",bitwiseAnd(num1,num2));
	printf("\nBitwiseXOR result=%d",bitwiseXor(num1,num2));
	return 0;
}
