#include<stdio.h>
#include<limits.h>
void asc(int,int,int);
void asc(int num1,int num2,int num3) //formal arguments or parameters
{
	int min1=INT_MAX,min2=INT_MAX,max1=INT_MIN;
	
	if(num1<min1)
	{
		min2=min1;
		min1=num1;
	}
	else if(num1<min2)
	{
		min2=num1;
	}
	if(num2<min1)
	{
		min2=min1;
		min1=num2;
	}
	else if(num2<min2)
	{
		min2=num2;
	}
	if(num3<min1)
	{
		min2=min1;
		min1=num3;
	}
	else if(num3<min2)
	{
		min2=num3;
	}
	if(num1>max1)
	max1=num1;
	if(num2>max1)
	max1=num2;
	if(num3>max1)
	max1=num3; 
	
	printf("%d\t%d\t%d",min1,min2,max1);
}
int main()
{
	int n1,n2,n3;
	printf("Enter any 3 numbers=");
	scanf("%d%d%d",&n1,&n2,&n3);
	asc(n1,n2,n3);//actual arguments or parameters
	return 0;
}
