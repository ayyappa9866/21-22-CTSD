#include<stdio.h>
float calcBill(float,float,float,float);
float calcBill(float pc,float cc,float pp,float cp)
{
	float res;
	res=pc*pp+cp*cc;
	return res;
}
int main()
{
	float penc,penp,chocc,chocp,ans;
	printf("enter the values of pen count and price=");
	scanf("%f%f",&penc,&penp);
	printf("enter the values of chocolate count and price=");
	scanf("%f%f",&chocc,&chocp);
	ans=calcBill(penc,penp,chocc,chocp);
	printf("the total bill amount=%f  \nremaining charges=%f",ans,100-ans);
	return 0;
}

