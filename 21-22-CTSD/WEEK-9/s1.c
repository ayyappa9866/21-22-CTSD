#include<stdio.h>
int main()
{
	//int arr[3][3]={1,2,3,4,5,6,7,8,9}; //valid
	//int arr[][3]={1,2,3,4,5,6,7,8,9};//valid
	//int arr[][]={1,2,3,4,5,6,7,8,9};// invalid
	//int arr[3][3]={1,2,3,4,5,6};// valid and remaining elements are zeros
	//int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};// valid
	//int arr[][]={{1,2,3},{4,5,6},{7,8,9}};// invalid
	//int arr[3][3]={{1},{4},{7}};// valid
	int arr[3][3]={0};// valid
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
