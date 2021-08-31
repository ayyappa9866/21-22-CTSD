#include<stdio.h>
float calWater(int);//prototype declaration of a function
float calWater(int x)//function defination
{
	float res;
	res= (x *(x+1)*(2*x+1)/6)*0.03;
	return res;
}
int main()
{
	int days;
	float ans;
	days=6;
	ans=calWater(days); // function calling
	printf("Water available in the pond=%f",ans);
	return 0;
}
