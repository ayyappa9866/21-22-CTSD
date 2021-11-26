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
		if(cc>0) // if file is empty cc=0 wc=0 lc=0 otherwise wc++ lc++
		{
			wc++;
			lc++;
		}
		printf("No of Characters=%d\n",cc);
		printf("No of Words=%d\n",wc);
		printf("No of Lines=%d\n",lc);
	}//else
	return 0;
}//main
