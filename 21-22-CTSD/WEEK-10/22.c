#include<stdio.h>
void DeleteOddIndex(char *s,int lens)
{
	char str[100];
	int i,k=0;
	for(i=0;i<lens;i++)
	{
	    if(i%2==0)
	    {
		    str[k]=s[i];
		    k++;
	    }
    }
	printf("%s",str);	
}
int main()
{
	int lens=0;
	char s[100];
	printf("Enter the given string:");
	scanf("%s",s);
	while(s[lens]!='\0')
	lens++;
	DeleteOddIndex(s,lens);
    return 0;
}
