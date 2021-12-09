#include<stdio.h>
#include<string.h>
#define MOD 1000000007
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
	 char s[100001];
	 scanf("%s",s);
	 int a[26]={0},i;
     long long int res=1;
	 for(i=0;i<strlen(s);i++)
	 {
		 a[s[i]-'a']++;
	 }
	 for(i=0;i<26;i++) 
	 {
		 if(a[i]>0)
		 res=((res%MOD)*(a[i]%MOD))%MOD;
	 }
	 printf("%lld\n",res%MOD);
 }
}
