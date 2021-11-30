#include<stdio.h>
int multiplication(int x,int y)
{
    if(y == 0)
        return 0;
   if(y > 0 )
        return x + multiplication(x, y-1);
    if(y < 0 )
        return -multiplication(x, -y);
} 
int main()
{
	int a,b,ans;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
    ans=multiplication(a,b);
    printf("the product of two numbers=%d",ans);
    return 0;
}
