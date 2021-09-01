#include<stdio.h>
int calTotal(int *);//int calTotal(int r[10]);
int calTotal(int *r)//int calTotal(int r[10])
{
	int res;
	printf("%d",sizeof(r));
	res=r[0]+r[1]+r[2]+r[3]+r[4]+r[5]+r[6]+r[7]+r[8]+r[9];;
	return res;
}
int main()
{
	int re[10],ans;
	//re[]={1,2,3,4,5,6,7,8,9,10};
	//scanf("%d%d%d%d%d%dd%d%d%d%d",&re[0],&re[1],&re[2],&re[3],&re[4],&re[5],&re[6],&re[7],&re[8],&re[9]);
	re[0]=10;
	re[1]=12;
	re[2]=13;
	re[3]=22;
	re[4]=34;
	re[5]=44;
	re[6]=45;
	re[7]=5;
	re[8]=55;
	re[9]=7;
	ans=calTotal(re);
	printf("\nTotal Resistance=%d",ans);
	printf("\n%d",sizeof(re));
	return 0;
}
