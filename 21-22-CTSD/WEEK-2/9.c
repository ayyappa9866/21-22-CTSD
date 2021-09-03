#include<stdio.h>
int totalCount(int *); //int totalCount(int seats[10])
int totalCount(int *seats)// int totalCount(int seats[10])
{
	int count=0;
	count=count+(seats[0]==1?1:0);
	count=count+(seats[1]==1?1:0);
	count=count+(seats[2]==1?1:0);
	count=count+(seats[3]==1?1:0);
	count=count+(seats[4]==1?1:0);
	count=count+(seats[5]==1?1:0);
	count=count+(seats[6]==1?1:0);
	count=count+(seats[7]==1?1:0);
	count=count+(seats[8]==1?1:0);
	count=count+(seats[9]==1?1:0);
	return count;
}
int main()
{
	int n,arr[10],ans;
	n=10;
	printf("Enter 10 array elements(0s and 1s only)=");
	scanf("%d%d%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],
	&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
	ans=totalCount(arr);
	printf("Occupied seats=%d",ans);
	printf("\nEmpty seats=%d",n-ans);
	return 0;
}
