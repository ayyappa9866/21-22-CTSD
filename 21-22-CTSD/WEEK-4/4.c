#include<stdio.h>
float calBill(int);
float calBill(int units)
{
	float bill=0;
	if(units<=50)
	bill=units*2;
	else if(units<=100)
	bill=50*2+(units-50)*3;
	else if(units<=300)
	bill=50*2+50*3+(units-100)*5+100;
	else if(units<=450)
	bill=50*2+50*3+200*5+(units-300)*6+200;
	else 
	bill=50*2+50*3+200*5+150*6+(units-450)*8+250;
	return bill;
}
int main()
{
	int unit;
	float ans;
	printf("Enter no of units consumed=");
	scanf("%d",&unit);
	ans=calBill(unit);
	printf("Current Bill=%f",ans);
	return 0;
}
