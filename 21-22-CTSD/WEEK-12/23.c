#include<stdio.h>
#include<string.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int value)
{
	top++;
	stack[top]=value;
}
void pop()
{
	printf("%c",stack[top]);//the element which is at the top is poped(lastin-firstout)
	top--;
}
int main()
{
	char str[]="Hello World";
	int len=strlen(str),i;
	for(i=0;i<len;i++)
	push(str[i]);//each element in the string is pushed
	for(i=0;i<len;i++)
	pop();//each element in the string is poped
}
//so the output is dlroW olleH
