#include<stdio.h>
#include<limits.h>
void calcHeight (FILE *);
void calcHeight (FILE *fp1)	
{
	int max=INT_MIN ,height[3];
	printf("enter the heights=");
	scanf("%d%d%d",&height[0],&height[1],&height[2]);
	fprintf(fp1,"\n%d %d %d",height[0],height[1],height[2]);
	fscanf(fp1,"%d%d%d",&height[0],&height[1],&height[2]);
	max=height[0]>max?height[0]:max;
	max=height[1]>max?height[1]:max;
	max=height[2]>max?height[2]:max;
	if(max==height[0]){
		fprintf(fp1,"the first person is the tallest with %d height",max);
	}
	else if(max==height[1]){
		fprintf(fp1,"the second person is the tallest with %d height",max);
	}
	else if(max==height[2]){
		fprintf(fp1,"the third person is the tallest with %d height",max);
	}
	printf("\nthe tallest brother is of height %d",max);
	fclose(fp1);
}
int main()
{
	FILE *fp;
	int ans;
	fp=fopen("height.txt","w");
	if(fp==NULL)
	{
		printf("file  is not created");
	}
	else
	{
		calcHeight(fp);
	}
    return 0;
}
