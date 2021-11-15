#include<stdio.h>
float CalcMaxProfit(float,float,float,float);
float CalcMaxProfit(float p1,float p2,float d1,float d2)
{
	float profit;
	if(d1>d2)
	{
		profit=(p1+p2-d2);
}
else
{
	profit=(p1-d1+p2);
}
     return profit;
}
int main()
{
    float p1,p2,d1,d2,ans;
    p1=5;
	p2=9;
    d1=2;
    d2=1;
    ans=CalcMaxProfit(p1,p2,d1,d2);
    printf ("the maximum profit=%f",ans);
    return 0;
}

