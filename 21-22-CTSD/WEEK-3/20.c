#include<stdio.h>
int count ;
extern int count;
void see();
void increment();
int main()
{
	count=5;
	increment(count);//fuction calling
}
void increment(void)
{
	if(count>0)//(5>0)
	{
		count=count+1;//count=6
		see(count);//fuction calling 
	}
	else
	{
		count=0;
		see(count);
	}
}
void see(void)
{
	printf("count is %d\n",count);//o/p=6
}
/*global variables are declared outside the function&
they local to all functions inthe program.*/
