#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,lens;
	scanf("%d",&t);
	while(t--)
	{
        int sc=0,so=0,fc=0,fo=0,bc=0,bo=0,count=0;
		char str[5000];
		scanf("%s",str);
		lens=strlen(str);
		for(i=0;i<lens;i++)
		{
			if(str[i]=='[')
			so++;
			else if(str[i]==']')
			sc++;
			if(str[i]=='{')
			fo++;
			else if(str[i]=='}')
			fc++;
			if(str[i]=='(')
			bo++;
			else if(str[i]==')')
			bc++;
		}
		count=((bo<bc)?bo:bc)+((fo<fc)?fo:fc)+((so<sc)?so:sc);
		printf("%d\n",count*2);
	}
}
