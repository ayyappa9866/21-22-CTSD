#include<stdio.h>
#include<string.h>
#define SIZE 100
char stack[SIZE];
int top=-1;
void push(char ch)
{
	top++;
	stack[top]=ch;
}
void pop()
{
	printf("%c",stack[top]);
	top--;
}
int main()
{
	char str[100];
	printf("Enter a string");
	scanf("%s",str);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		push(str[i]);
	}
	for(i=0;i<strlen(str);i++)
	{
		pop();
	}
	
	return 0;
}
