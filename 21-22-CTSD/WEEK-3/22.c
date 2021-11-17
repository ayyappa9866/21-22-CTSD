#include<stdio.h>
#include<math.h>
float CalDistance(FILE *fp1)
{
	int  X1,Y1,X2,Y2;
	float  dis;
	printf("Enter the values of x1,y1,x2,y2=");
	scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
	dis=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
	fprintf(fp1,"the distance between two points=%f",dis);
	return dis;
}
int main()
{
	FILE *fp;
	float ans;
	fp=fopen("distance.txt","w");
	if(fp==NULL)
	printf("The file is not created");
	else
	ans=CalDistance(fp);
	printf("the distance between two points=%f",ans);
	return 0;
}
