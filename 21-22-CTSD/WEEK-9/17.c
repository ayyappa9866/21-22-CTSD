/* LEETCODE SUBMISSION CODE
bool searchMatrix(int** matrix, int r, int* matrixColSize, int target)
{   
    int c=*matrixColSize;
    int i=0,j=c-1;
   // printf("%d ",c);
    while(i<r && j>=0 )
    {
        if(matrix[i][j]==target)
            return true;
        else if(matrix[i][j]>target)
            j--;
        else
            i++;
    }
    return false;
} */
#include<stdio.h>
int main()
{
	int r,c,target,f=0;
	printf("Enter matrix size:\n");
	scanf("%d%d",&r,&c);
    printf("Enter search element:\n");
    scanf("%d",&target);
	int arr[r][c],i,j;
	printf("Enter Array Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	i=0;
	j=c-1;
	while((i<r)&&(j>=0))
	{
		if(arr[i][j]==target)
		{
			f=1;
			printf("Element %d found at (%d,%d)th index:\n",target,i,j);
			break;
		}
		else if(arr[i][j]>target)
		j--;
		else
		i++;
	}
	if(f==0)
	printf("Element %d is not found",target);
	return 0;
}
