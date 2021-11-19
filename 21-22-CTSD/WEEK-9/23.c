#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter noof rows and columns:\n");
	scanf("%d%d",&r,&c);
	int arr[r][c],i,j;
	printf("Enter array Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}

	}
	printf("Transope of given matrix:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
