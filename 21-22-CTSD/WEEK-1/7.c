#include<stdio.h>
float calCost(float,float,float,float);
float calCost(float l,float b,float h,float c)
{
	float res;
	res=2*(l*b+b*h+h*l)*c/100;
	return res;
}
int main()
{
	float length,breadth,height,cost,ans;
	length=20;
	breadth=15;
	height=12;
	cost=5;
	ans=calCost(length,breadth,height,cost);
	printf("The cost of painting=%f",ans);
	return 0;
}

