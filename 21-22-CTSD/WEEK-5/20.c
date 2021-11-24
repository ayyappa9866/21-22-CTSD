#include<stdio.h>
int CalDays(float num)
{
	int count=0,i=1;
	while(i<=365)
	{
		if(i%2==1)
		count=count+1;
		else
		count=count;
		i++;
	}
	return (count)*num;
}
int main()
{
    float n,ans;
	printf("enter any number=");
	scanf("%f",&n);
	ans=CalDays(n); 
	printf("%f",ans);
	return 0;
}
