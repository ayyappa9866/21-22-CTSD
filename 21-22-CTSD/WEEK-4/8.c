#include<stdio.h>
void identifyCar(int);
void identifyCar(int r)
{
	if(2000<r &&r<3000)
	{
		printf("car A");
	}
	else if(r>100&&r<500)
	{
		printf("car B");
    } 
    else 
    printf("INVALID INPUT");
}
int main()
{
	int R;
	printf("enter the range value=");
	scanf("%d",&R);
	identifyCar(R);
	return 0;
}
