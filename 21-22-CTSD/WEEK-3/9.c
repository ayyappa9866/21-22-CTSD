#include<stdio.h>
void increment(void);
void main()
{
	increment();//function calling
	increment();
	increment();
	increment();
}
void increment(void)
{
	auto int i=0;
	printf("%d",i);//1st o/p=0,2nd o/p=0,3rdo=0,4rth o/p=0
	i=i+1;
}
//here first the i value is printed and then it is increased by 1.

