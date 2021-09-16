#include<stdio.h>
void keyBoard(FILE*);
void keyBoard(FILE *fp1)
{
	char small[10],cap[10];
	printf("Enter small charcters word=");
	scanf("%c%c%c%c%c%c%c%c%c%c",&small[0],&small[1],&small[2],&small[3],
	&small[4],&small[5],&small[6],&small[7],&small[8],&small[9]);
	fprintf(fp1,"%c%c%c%c%c%c%c%c%c%c",small[0],small[1],small[2],
	small[3],small[4],small[5],small[6],small[7],small[8],small[9]);
	fclose(fp1);
	FILE *fp2=fopen("capital.txt","w");
	fp1=fopen("small.txt","r");
	if(fp2==NULL)
	{
		printf("File not created");
	}
	else
	{
		fscanf(fp1,"%c%c%c%c%c%c%c%c%c%c",&cap[0],&cap[1],&cap[2],
		&cap[3],&cap[4],&cap[5],&cap[6],&cap[7],&cap[8],&cap[9]);
		fprintf(fp2,"%c%c%c%c%c%c%c%c%c%c",cap[0]-32,cap[1]-32,cap[2]-32,
		cap[3]-32,cap[4]-32,cap[5]-32,cap[6]-32,cap[7]-32,cap[8]-32,
		cap[9]-32);
		fclose(fp1);
		fclose(fp2);	
	}
	
}
int main()
{
	FILE *fp;
	fp=fopen("small.txt","w");
	if(fp==NULL)
	{
		printf("File not created");
	}
	else
	{
		keyBoard(fp);	
	}
}
