#include<stdio.h>
#include<math.h>
float dis(float a,float b,float c)
{
	return b*b-4*a*c;
}
void root1(float a,float b,float c)
{
	
	if(dis(a,b,c)>=0)
	{
		printf("%f\n",(-b+sqrt(dis(a,b,c)))/(2*a));
	}
	else
	{
		printf("%f+i%f\n",-b/(2*a),sqrt(-dis(a,b,c))/(2*a));
	}
}
void root2(float a,float b,float c)
{
	
	if(dis(a,b,c)>=0)
	{
		printf("%f\n",(-b-sqrt(dis(a,b,c)))/(2*a));
	}
	else
	{
		printf("%f-i%f\n",(-b)/(2*a),sqrt(-dis(a,b,c))/(2*a));
	}
}
int main()
{
	float a,b,c;
	printf("Enter a ,b and c values=");
	scanf("%f%f%f",&a,&b,&c);
	root1(a,b,c);
	root2(a,b,c);
	return 0;
}
