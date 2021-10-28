#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("small123.txt","w");
	if(fp1==NULL)
	{
		printf("File is not created");
	}
	else
	{
		printf("Enter characters (to Stop enter zero(0))=");
		while(1)
		{
			scanf("%c",&ch);
			if(ch==48)
			break;
			putc(ch,fp1);
		}
		fclose(fp1);
		fp1=fopen("small123.txt","r");
		if(fp1==NULL)
		{
			printf("file is not opened");
		}
		else
		{
			fp2=fopen("capital123.txt","w");
			while(1)
			{
			//fscanf(fp1,"%c",&ch);
			if((ch=getc(fp1))==EOF)
			break;
			ch=ch-32;
			fprintf(fp2,"%c",ch);
			//putc(ch,fp2);
		   }
		}
		fclose(fp1);
		fclose(fp2);		
	}
   return 0;	
}
