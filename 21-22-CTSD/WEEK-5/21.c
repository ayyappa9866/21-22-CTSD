#include<stdio.h>

void sequence( )
{
	float i,j;
	for(i=0.10;i >= -0.10; i=i-0.01)
		printf("%.2f   ",i);
	
	for(j=-0.09;j <= 0.10; j=j+0.01)
		printf("%.2f   ",j);
		
	printf("\n\n\n");
}

int main( )
{
	int n,i;
	printf("Enter no. of times sequence has to be printed :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	sequence( );
}
