#include<stdio.h>
float calBMI(float,float);
float calBMI(float w,float h)
{
	float W,H,res;
	W=w*0.45359237;
	H=h*0.0254;
	res=(W/(H*H));
    return res;
}
void calhealthcondition(float);
void calhealthcondition(float BMI)
{
	if(BMI<18.5)
	{
		printf("underweight\n");
	}
	else if(18.5<=BMI<25)
	{
		printf("normal\n");
	}
	else if(25<=BMI<30)
	{
		printf("overweight\n");
	}
	else 
	{
		printf("obese\n");
	}
}
int main()
{
	float weight,height,ans;
	printf("enter the weight and height=");
	scanf("%f%f",&weight,&height);
	ans=calBMI(weight,height);
	calhealthcondition(ans);
	printf("the average BMI=%f",ans);
	return 0;
}
