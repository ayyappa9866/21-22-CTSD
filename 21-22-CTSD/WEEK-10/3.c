#include<stdio.h>
void Count(int lens,char *str)
{
	int vc=0,cc=0,dc=0,sc=0,i=0;
	for(i=0;i<lens;i++)
	{
		if (str[i]>='0'&&str[i] <='9') 
        dc++;
		else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		vc++;
		else if(str[i]==' ')
		sc++;
		else if('a'<=str[i]<='z'||'A'<=str[i]<='Z')
		cc++;
	}
	printf("The number of vowels=%d\n",vc);
	printf("The number of consonents=%d\n",cc);
	printf("The number of digits=%d\n",dc);
	printf("The number of Spaces=%d\n",sc);
}
int main()
{
    int lens; 
    char str[50];
    printf("Enter the string elements");
    scanf("%[^\ns]", str);
    lens=0;
    while(str[lens]!='\0')
    lens++;
    Count(lens,str);
    return 0;
}
