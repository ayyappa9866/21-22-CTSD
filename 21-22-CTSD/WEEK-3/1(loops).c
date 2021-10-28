#include<stdio.h>
int main()
{
	FILE *fp1;
	int num,i,sum=0;
	float avg=0.0;
	fp1=fopen("res.txt","w");
	if(fp1==NULL)
	{
		printf("File is not created");
	}
	else
	{
		printf("Enter 10 numbers=");
		for(i=1;i<=10;i++)
		{
			scanf("%d",&num);
			putw(num,fp1);
		}
		fclose(fp1);
		fp1=fopen("res.txt","r");
	   /*	while((num=getw(fp1))!=EOF)
		{
			sum=sum+num;
			//printf("%d\n",num);
		} */
		while(1)
		{
			num=getw(fp1);
			if(num==EOF)
			break;
			sum=sum+num;
		}
		avg=sum/10.0;
		printf("Sum of numbers=%d\n",sum);
		printf("Average resistance=%f",avg);
		fclose(fp1);
	}
}
