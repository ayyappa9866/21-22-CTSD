#include<stdio.h>
float calBill(float,float,float);
float calBill(float mc,float tip,float tax)
{
	float res;
	res=mc+(tip*mc/100)+(tax*mc/100);
	return res;
}
int main()
{
	float mealcost,taxpercentage,tippercentage,ans;
	printf("Enter meal cost=");
	scanf("%f",&mealcost);
	printf("Enter tip percentage=");
	scanf("%f",&tippercentage);
	printf("Enter tax percentage=");
	scanf("%f",&taxpercentage);
	ans=calBill(mealcost,tippercentage,taxpercentage);
	printf("Final Bill=%.2f",ans);
	return 0;
}
