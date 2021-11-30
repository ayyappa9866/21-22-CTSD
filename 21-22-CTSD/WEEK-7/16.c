#include<stdio.h>
#include<string.h>
int Palindrome(int len,char *s,int i,int j)
{
	int res=0;
	if(i>j)
	return res;
	else if(s[i]!=s[j])
	{
	res=1;
    return res;
    }
	else
	{
		res=Palindrome(len,s,i+1,j-1);
	}
	return res;
	
}
int main()
{
    char s[100];
    int ans;
    scanf("%s",s);
    int i,l,j;
    l=strlen(s);
    ans=Palindrome(l,s,0,l-1);
    if(ans==0)
    printf("YES\n");
    else 
    printf("NO");
}
