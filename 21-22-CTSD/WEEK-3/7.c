#include<stdio.h>
void f()
{
	int a;
	a=20;
	d();//control will go to d()
	printf("%d",a);//3rd output 30
}
 d()
{
	int a;
	a=30;
	printf("%d ",a);//2nd output 30(control will be back to f()
}
int main()
{
	int a;
	a=10;
	printf("%d  ",a);//1st output 10
	f();//control will go to f()
	return 0;
}
