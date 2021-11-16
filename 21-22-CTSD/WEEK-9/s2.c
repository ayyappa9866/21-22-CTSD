#include<stdio.h>
int main()
{
	int rows,columns;
	printf("Enter noof rows and columns=");
	scanf("%d%d",&rows,&columns);
	int arr[rows][columns],i,j;
	printf("Enter 2D array Elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix Elements Are:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
