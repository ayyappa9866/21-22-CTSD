#include <stdio.h>
#include <string.h>
void swapCharecters(char *s, char *str)
{
	char temp;
	temp=*s;
	*s=*str;
	*str=temp;
}
void permution(char *s, int l, int r)
{
    int i;
    if(l==r)
	printf("%s\n",s);
    else
    {
	    for (i=l;i<=r;i++)
	    {
		    swapCharecters((s+l),(s+i));
		    permution(s,l+1,r);
		    swapCharecters((s+l), (s+i));
	    }
    }
}
int main()
{
	int n;
	char str[100];
	printf("Enter string elements");
	scanf("%s",str);
	n=strlen(str);
	permution(str,0,n-1);
	return 0;
}

