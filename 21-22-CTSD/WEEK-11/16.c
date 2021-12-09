#include<stdio.h>
#include<string.h>
struct Test
{
	char str[20];
};
int main()
{
	struct Test st1,st2;
	strcpy(st1.str,"CTSDquiz");
	st2=st1;
	st1.str[0]='S';
	printf("%s",st2.str);
	return 0;}
