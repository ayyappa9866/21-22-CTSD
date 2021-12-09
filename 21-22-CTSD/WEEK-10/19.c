#include<stdio.h>
void  ChangeVowels(int lens,char *str)
{
	int i;
	for(i=0;i<lens;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
        	str[i]=str[i]-32;
		}
	}
}
int main()
{
	char str[100];
    scanf("%[^\n]s",str);
    int i,lens,j,ans;
    lens=0;
    while(str[lens]!='\0')
    lens++;
    ChangeVowels(lens,str);
    printf("%s",str);
    return 0;
}
