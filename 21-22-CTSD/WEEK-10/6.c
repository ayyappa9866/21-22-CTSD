#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	printf("Enter no of strings=");
	scanf("%d",&n);
	char str[n][30],temp[30];
	printf("Enter strings=\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("Sorted strings:\n");
	for(i=0;i<n;i++)
	{
		printf("%s ",str[i]);
	}
	return 0;
}
