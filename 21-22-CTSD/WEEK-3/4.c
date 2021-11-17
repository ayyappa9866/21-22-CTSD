#include<stdio.h>
int calProduct(FILE *);
int calProduct(FILE *fp1)
{
	int ph1,ph2,ph3,product=1;
	printf("enter the ph values=");
	scanf("%d%d%d",&ph1,&ph2,&ph3);
	product=product*(ph1%2==1?ph1:1);
	product=product*(ph2%2==1?ph2:1);
	product=product*(ph3%2==1?ph3:1);    
	fprintf(fp1,"%d",product);
	fclose(fp1); 
	return product;
}
int main()

{
	FILE *fp;
	int ans;
	fp=fopen("input4.4.txt","w");
	if(fp==NULL)
	{
		printf("the file is not created");
	}
	else
	{
	    ans=calProduct(fp);
	    printf("%d",ans);
	}
	return 0;

}
