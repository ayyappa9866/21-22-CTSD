#include<stdio.h>
int fun();
int num=5;
int main()
{
	fun();
	printf("\ngloabal value =%d\n",num);//2nd o/p=5
	fun();
	printf("\ngloabal value =%d\n",num);//4rth o/p=5
	fun();
	printf("\ngloabal value =%d\n",num);//6th o/p=5
	return 0;
}
int fun()
{
	static int num = 2;
	printf("\nstaticnum value = %d\n",num);//1st o/p=2,3rd o/p=3,5th o/p=4
	num=num+1;
	return 0;
}
/*global variables are declared outside the function&
they local to all functions inthe program.
For static variable the value persist 
within the function calls*/
