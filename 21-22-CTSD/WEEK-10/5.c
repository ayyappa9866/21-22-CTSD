#include<stdio.h>
int Palindrome(char *s,int l)
{
	int i,j;
	for(i=0,j=l-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    scanf("%s",str);
    int lens,ans;
    lens=0;
    while(str[lens]!='\0')
    lens++;
    ans=Palindrome(str,lens);
    if(ans==0)
    printf("NO");
    else 
    printf("YES");
    return 0;
}
