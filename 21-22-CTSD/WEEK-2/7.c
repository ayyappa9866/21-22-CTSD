#include<stdio.h>
void enMessage(char *s); // void enMessage(char s[30]);
void enMessage(char *s)  // void enMessage(char s[30])
{
/*	*(s+0)=*(s+0)+1;
	//s[0]=s[0]+1;
	s[1]=s[1]+1;
	s[2]=s[2]+1;
	s[3]=s[3]+1;
	s[4]=s[4]+1;
	s[5]=s[5]+1;
	s[6]=s[6]+1;
	s[7]=s[7]+1;
	printf("\n%c%c%c%c%c%c%c%c",s[0],s[1],s[2],s[3],s[4],
   s[5],s[6],s[7]); */
//	printf("\nFunction");
//	printf("\n%u %u %u %u %u %u %u %u",&s[0],&s[1],&s[2],
//	&s[3],&s[4],&s[5],&s[6],&s[7]);
    printf("\nEncrpted message=%c%c%c%c%c%c%c%c",
	s[0]+1,s[1]+1,s[2]+1,s[3]+1,s[4]+1,s[5]+1,s[6]+1,s[7]+1);
}
int main()
{
	char str1[8];
	printf("Enter 8 charactes message=");
	scanf("%c%c%c%c%c%c%c%c",&str1[0],&str1[1],&str1[2],
	&str1[3],&str1[4],&str1[5],&str1[6],&str1[7]);
//	printf("Main");
//	printf("\n%u %u %u %u %u %u %u %u",&str1[0],&str1[1],&str1[2],
//	&str1[3],&str1[4],&str1[5],&str1[6],&str1[7]);
	enMessage(str1);
	//printf("\n%s",str1);
	return 0;
}
