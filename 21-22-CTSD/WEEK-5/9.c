#include<stdio.h>
void star(int);
void star(int rows)
{
	int i,j;
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
int main()
{
	int r;
	printf("Enter no of rows=");
	scanf("%d",&r);
	star(r);
	return 0;
}
