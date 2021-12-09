#include<stdio.h>
int main()
{
	int n,i,k;
   //	printf("Enter length of the string=");
	scanf("%d",&n);
	char str[n];
//	printf("Enter any string=");
	scanf("%s",str);
//	printf("Enter no of positions to be shift=");
	scanf("%d",&k);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')// we can take 65 and 90 also
		{
			str[i]=(str[i]-'A'+k)%26+'A';
		}
		
		else if(str[i]>='a'&&str[i]<='z')// we can take 97 and 122 also
		{
			str[i]=(str[i]-'a'+k)%26+'a';
		}
	}// for 
	printf("%s",str);
	return 0;
}//main
