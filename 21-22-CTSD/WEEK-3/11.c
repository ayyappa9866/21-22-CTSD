#include<stdio.h>
static int gInt=1;
static void staticDemo()
{
	static int i;
	printf("%d",i);//1sto/p=0,3rddo/p=1
	i=i+1;//i is increased by 1
	printf(" %d\n",gInt);//2nd o/p=1,4rth o/p=2
	gInt=gInt+1;//gInt is increased by 1
}
int main()
{
	staticDemo();
	staticDemo();
}
/*global variables are declared outside the function&
they local to all functions inthe program.
For static variable the value persist 
within the function calls*/
