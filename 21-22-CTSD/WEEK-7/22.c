/* LEETCODE SUBMISSION CODE
double myPower(double x,long int n)
{
    if(n==1)
        return x;
    double ans=myPower(x,n/2);
    if(n%2==0)
        return ans*ans;
    else
        return x*ans*ans;        
}
double myPow(double x, long int n)
{
    long n1;
    if(n==0)
        return 1;
    else if(n<0)
    {
        n1=-n;
        return (1.0)/(myPower(x,n1));       
    }
    else
        return myPower(x,n);   
} */
#include<stdio.h>
double myPower(double x,long int n)
{
    if(n==1)
        return x;
    double ans=myPower(x,n/2);
    if(n%2==0)
        return ans*ans;
    else
        return x*ans*ans;        
}
double myPow(double x, long int n)
{
    long n1;
    if(n==0)
        return 1;
    else if(n<0)
    {
        n1=-n;
        return (1.0)/(myPower(x,n1));       
    }
    else
        return myPower(x,n);   
}
int main()
{
	double x,ans;
	int n;
	printf("Enter x and n values=");
	scanf("%lf%d",&x,&n);
	ans=myPow(x,n);
	printf("%lf",ans);
	return 0;	
}
