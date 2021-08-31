#include<stdio.h>
float calHeight(float,float);
float calHeight(float m,float pe)
{
	float res;
	res=pe/((m/2.2046)*9.8);
	return res;
}
int main()
{
	float mass,penergy,ans;
	mass=12.786;
	penergy=145;
	ans=calHeight(mass,penergy);
	printf("Height of the shelf=%f",ans);
	return 0;
}
