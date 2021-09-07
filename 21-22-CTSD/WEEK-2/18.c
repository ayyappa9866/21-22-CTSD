#include<stdio.h>
void checkEven(int*);// int even[8]
void checkEven(int *even) // int even[8]
{
	even[0]%2==0?printf("\n%d Lucky Tile",even[0]):
		printf("\n%d",even[0]);
	even[2]%2==0?printf("\n%d Lucky Tile",even[2]):
		printf("\n%d",even[2]);
	even[4]%2==0?printf("\n%d Lucky Tile",even[4]):
		printf("\n%d",even[4]);
	even[6]%2==0?printf("\n%d Lucky Tile",even[6]):
		printf("\n%d",even[6]);
}
int main()
{
	int arr[8];
	printf("Enter 8 elements into array=");
	scanf("%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],
	&arr[4],&arr[5],&arr[6],&arr[7]);
	checkEven(arr);
	return 0;
}
