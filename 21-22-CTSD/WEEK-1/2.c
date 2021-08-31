#include<stdio.h>
float remainingMilk(float);
float remainingMilk(float gallons)
{
	float noofliters,res;
	noofliters= gallons * 3.785;
	res=noofliters - 36;
	return res;	
}
int main()
{
	float x,ans;
	x=12;
	ans=remainingMilk(x);
	printf("Remaining milk with him in liters=%f",ans);
	return 0;
}
