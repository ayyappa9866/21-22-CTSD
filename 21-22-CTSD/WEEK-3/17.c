#include<stdio.h>
static int p=0;
void fun()
{
	auto int I=1;
	register char a='O';//ASCII value of O=79
	p=p+1;
	printf(" %d %d %d",I,a,p);//2nd o/p 1 79 2
	p=3;
	printf(" %d %d %d",I,a,p);//3rd o/p 1 79 3
}
int main()
{
	auto int I=1;
	register char a='D';//ASCII value of D=68
	p=p+1;//p=1
	printf("%d %d %d",I,a,p);//1st o/p 1 68 1
	fun();
	printf(" %d %d %d",I,a,p);//4rth o/p 1 68 3
	return 0;
}
