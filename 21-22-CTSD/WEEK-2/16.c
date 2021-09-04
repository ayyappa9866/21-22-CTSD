#include<stdio.h>
void toCapital(char*);// char str[10]
void toCapital(char *str)// char str[10]
{
	printf("%c%c%c%c%c%c%c%c%c%c",str[0]-32,str[1]-32,
	str[2]-32,str[3]-32,str[4]-32,str[5]-32,str[6]-32,str[7]-32,
	str[8]-32,str[9]-32);
	/*printf("%c%c%c%c%c%c%c%c%c%c",*(str+0)-32,*(str+1)-32,
	*(str+2)-32,*(str+3)-32,*(str+4)-32,*(str+5)-32,*(str+6)-32,
	*(str+7)-32,*(str+8)-32,*(str+9)-32);*/
}
int main()
{
	char st[10];
	printf("Enter 10 characters word in small case=");
	scanf("%c%c%c%c%c%c%c%c%c%c",&st[0],&st[1],&st[2],&st[3],&st[4],
	&st[5],&st[6],&st[7],&st[8],&st[9]);
	toCapital(st);
	return 0;
}
