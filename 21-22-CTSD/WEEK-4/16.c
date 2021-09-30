#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
void selection(int a,int b,char ch)
{
	int res;
	switch(ch)
	{
		case '+':
			res=add(a,b);
			printf("Addition result=%d",res);
			break;
		case '-':
			res=sub(a,b);
			printf("Subtraction result=%d",res);
			break;
		case '*':
			res=mul(a,b);
			printf("Product result=%d",res);
			break;
		case '/':
			res=div(a,b);
			printf("Quotient result=%d",res);
			break;
		case '%':
			res=mod(a,b);
			printf("Remainder result=%d",res);
			break;
		default:
			printf("Invalid operator");
			break;	
	}
}
int main()
{
	int num1,num2;
	char c;
	printf("Enter any two numbers=");
	scanf("%d%d",&num1,&num2);
	printf("Enter any operator=");
	scanf(" %c",&c);
	selection(num1,num2,c);// function calling
	return 0;	
}
