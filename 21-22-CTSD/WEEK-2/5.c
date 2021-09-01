#include<stdio.h>
int calAssPro(int,int,int,int);
int calAssPro(int nd,int d1,int d2,int d3)
{
	int res;
	res=d1+d2+d3-nd*3;
	return res;
}
int main()
{
	int dc1,dc2,dc3,n,ans;
	n=3;
	printf("Enter no of faculty in Dept1=");
	scanf("%d",&dc1);
	printf("Enter no of faculty in Dept2=");
	scanf("%d",&dc2);
	printf("Enter no of faculty in Dept3=");
	scanf("%d",&dc3);
	ans=calAssPro(n,dc1,dc2,dc3);
	printf("No of Asst.Prof in the organization=%d",ans);
	return 0;
}
