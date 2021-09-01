#include<stdio.h>
float calRadius(float);
float calRadius(float side)
{
	float radius,res;
	radius=side/2;
	res=3.28 * radius;
	return res;
}
int main()
{
	float ans,s;
	s=4;
	ans=calRadius(s);
	printf("Maximum radius dining Table=%f",ans);
	return 0;
}
