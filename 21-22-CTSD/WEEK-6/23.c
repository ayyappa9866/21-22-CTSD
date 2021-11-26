#include<stdio.h>
int main()
{
	FILE *fp;
	int cc=0,lc=1,wc=1;
	char ch;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("FILE IS NOT EXIST");
	}
	else
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			if(ch==' ')
			{
				wc++;
				cc++;
			}
			else if(ch=='\n')
			{
				wc++;
				lc++;
			}
			else
			{
				cc++;
			}
		 ch=fgetc(fp);
		}//while
		fclose(fp);
		printf("No of Characters=%d\n",cc);
		printf("No of Words=%d\n",wc);
		printf("No of Lines=%d\n",lc);
	}//else
	return 0;
}//main
