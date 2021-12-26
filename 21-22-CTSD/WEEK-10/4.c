#include <stdio.h>
#include<string.h>
int Countcharacter(char str[100], int len, int n, char ch)
{
   int count=0,i,occ;
   for(i=0;i<len;i++)
   {
      if(str[i]==ch)
	  {
         count++;
      }
   }
   occ=n/len;
   count=count*occ;
   for (i=0;i<n%len;i++)
   {
      if(str[i] == ch)
	  {
         count++;
      }
   }
   return count;
}
int main()
{
	char str[100],ch;
	int n,length,ans;
	printf("Enter string");
	scanf("%s",str);
	printf("enter any character");
	scanf("  %c",&ch);
    printf("Enter any number");
    scanf("%d",&n);
    length=strlen(str);
   ans=Countcharacter(str,length,n,ch);
   printf("%d",ans);
   return 0;
}
